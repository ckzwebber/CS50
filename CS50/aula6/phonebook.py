from cs50 import get_string

people = {
    "David": "1111-1111",
    "Brian": "2222-2222"
}

name = get_string("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number}")