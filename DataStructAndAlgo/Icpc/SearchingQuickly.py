mode =1
word =[]
text= []
while(1):
    t = input()
    
    if t =="::":
        mode =0

    if mode:
        word.append(t)
    else:
        text.append(t)
    
for w in word:
    for t in text:
        t= t.replace(w,)