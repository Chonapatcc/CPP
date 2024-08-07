import random

times = random.randint(15,15)
print(times)

n = random.randint(0,1000)
print(n)

n = random.randint(-1000,1000)
print(n)

for i in range(times):
    n = random.randint(1,100)
    print(n,end=" ")
print();

for i in range(times):
    n = random.randint(-100,100)
    print(n,end=" ")
print();