import re

def get_score():
    return re.sub(r'[a-zA-Z]', '', input())

a = int(get_score())
b = int(get_score())
c = int(get_score())

score = a+b+c
if score >= 80:
    print("A")
elif score >=75:
    print("B+")
elif score >=70:
    print("B")
elif score >=65:
    print("C+")
elif score >=60:
    print("C")
elif score >=55:
    print("D+")
elif score >=50:
    print("D")
else:
    print("F")
