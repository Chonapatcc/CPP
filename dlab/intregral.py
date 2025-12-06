def integral(n):
    return n**3 + n**2 + n*5


a = int(input())
b = int(input())
print(integral(b) - integral(a))