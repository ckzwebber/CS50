from cs50 import SQL
from flask import Flask, redirect, render_template, request

app = Flask(__name__)

db = SQL("sqlite:///gotosports.db")

SPORTS = [
    "Queimada",
    "Futebol Americano",
    "Futebol",
    "Vôlei",
    "Frisbee"
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Nome faltando!")
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Esporte faltando!")
    if sport not in SPORTS:
        return render_template("error.html", message="Esporte inválido!")

    db.execute("INSERT INFO registrants(name, sport) VALUES(?, ?)", name, sport)

    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html", registrants=registrants)