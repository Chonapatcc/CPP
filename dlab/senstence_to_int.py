def encode(text):
    s =0 
    for letter in text:
        if letter == 'x':
            s+=6
        elif letter == 'y':
            s+=0
        elif letter.isalpha():
            s+=1
    return s


text_list= input().split()

t = ""
for i in range(len(text_list)):
    print(encode(text_list[i]),end="")


