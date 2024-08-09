x = [-1 for x in range(11)]
print(x)

input = [int(x) for x in "12, 99, 58, 32, 10, 8, 19, 70".split(", ")]

for num in input:
    xx = num %11
    while(x[xx] !=-1):
        xx+=1;
        xx%=11;
    x[xx] =  num
    print("index = " ,xx ,"list = " ,x)

print(x)