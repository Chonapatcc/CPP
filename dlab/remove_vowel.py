def remove(t):
    vowels = "aeiouAEIOU"
    return ''.join(char for char in t if char not in vowels)


t = input()
result = remove(t)
print(result)