sizeLst = []
lstLst = []
while(1):
    size = int(input())
    if(size<=0):
        break;
    sizeLst.append(size)
    lst=[]
    for i in range(size):
        text = input().replace("B"," ")
        lst.append(text.strip())
    lstLst.append(lst)
    # print(size)
    # for i in range(size):
    #     print(lst[i])

for i in range(len(sizeLst)):
    print(sizeLst[i])
    for y in range(sizeLst[i]):
        print(lstLst[i][y])
    