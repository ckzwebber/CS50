import csv

titles = set()

with open("file.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        titles.add(row["title"].strip().upper())

for title in sorted(titles):
    print(title)