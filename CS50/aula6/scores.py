from cs50 import get_int

scores = []
for i in range(3):
    scores.append(get_int("Nota: "))

media = sum(scores) / len(scores)
print(f"Media: {media}")