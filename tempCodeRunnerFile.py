import math
a=int(input())
b=int(input())
mod= 1000000007
ans= math.ceil(b*math.log10(a))
print(ans%mod)