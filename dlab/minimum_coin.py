lst = [10,5,2,1]
coin = 0

n = int(input())

for i in lst:
    coin += n // i
    n %= i
print(coin,"coin")