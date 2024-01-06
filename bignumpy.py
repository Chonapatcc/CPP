import math
a=float(input())
b=float(input())
mod= 1000000007
ans= math.ceil(b*math.log10(a))
print(ans%mod+1)