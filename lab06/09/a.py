letters = "abcdefghijklmnopqrstuvwxyz"
for letter_number in range(26):
    letter = letters[letter_number]
    for number in range(100):
        variable_name = letter + str(number)
        variable_value = letter_number * 100 + number + 1
        globals()[variable_name] = variable_value
print(a0, a1, a99)
print(b0, b1, b99)
print(z0, z1, z99)