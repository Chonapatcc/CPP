
x1,y1 = [int(x) for x in input().split()]
x2,y2 = [int(x) for x in input().split()]
distance = ((x2-x1)**2 + (y2-y1)**2)**0.5
print(round(distance))