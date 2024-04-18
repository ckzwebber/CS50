from flask import Flask, redirect, render_template, request

app = Flask(__name__)

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
    email = request.form.get("email")
    if not email:
        return render_template("error.html", message="Email faltando!")
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Esporte faltando!")
    if sport not in SPORTS:
        return render_template("error.html", message="Esporte inválido!")

    return render_template("success.html")