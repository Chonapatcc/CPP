import re
def pass_pyramid():
    return re.sub(r'[0-9!]', '', input())

t = pass_pyramid()
print(t)
