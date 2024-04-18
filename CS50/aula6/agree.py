from cs50 import get_string

s = get_string("Você aceita? ")

if s.lower() in ["s", "sim"]:
    print("Aceitado")
elif s.lower() in ["n", "não"]:
    print("Não aceitado")