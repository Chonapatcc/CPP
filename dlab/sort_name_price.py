def sort_by_name_price(name_price_list):
    
    return sorted(name_price_list, key=lambda x: (100 - ord(x[0][-1]), 100-len(x[0])))
    

n = int(input())

name_price_list = []

for i in range(n):
    name, price = input().split()
    price = float(price)
    name_price_list.append((name, price))

sorted_list = sort_by_name_price(name_price_list)

money = float(input())
printed = False
for name, price in sorted_list:
    if money>= price:
        print(name,end=" ")
        money -= price
        printed = True

if not printed:
    print("Sorry I am broke.")
