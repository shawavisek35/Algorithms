string = input()
vowels = ["a", "o", "y", "e", "u", "i"]
string = string.lower()
string = [x for x in string if x not in vowels]
print("."+".".join(string))

