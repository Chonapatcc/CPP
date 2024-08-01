while(1):
    size = int(input())
    if(size<=0):
        break;

    sizeLst = []
    leftList = []
    rightList = []

    for i in range(size):
        text = input().split()
        if len(text)==0:
            sizeLst.append(25)
            leftList.append(26)
            rightList.append(26)
        elif len(text)==1:
            sizeLst.append(25-len(text[0]))
            leftList.append(len(text[0]))
            rightList.append(26)
        elif len(text)==2:
            sizeLst.append(25-len(text[0])-len(text[1]))
            leftList.append(len(text[0]))
            rightList.append(len(text[1]))
        
    maxId = sizeLst.index(max(sizeLst))
    leftList.remove(leftList[maxId])
    rightList.remove(rightList[maxId])

    maxSize = sizeLst[maxId];
    times = 0 
    while(1):
        leftId = -1
        rightId = -1
        if maxSize<=0:
            break;

        if len(leftList)>0:    
            id = leftList.index(min(leftList))
            if leftList[id]<26 and leftList[id]<maxSize:
                leftId = id
        if len(rightList)>0:
            id = rightList.index(min(rightList))
            if(rightList[id]<26 and rightList[id]<maxSize):
                rightId = id

        if leftId==-1 and rightId==-1:
            break;

        if leftId!=-1 and rightId!=-1:
            left = leftList[leftId]
            right = rightList[rightId]
            if left<=right:
                if left<=maxSize:
                    maxSize-=left
                    leftList[leftId] = 26
                    times+=1
                if right<=maxSize:
                    maxSize-=right
                    rightList[rightId] = 26
                    times+=1
            else:
                if right<=maxSize:
                    maxSize-=right
                    rightList[rightId] = 26
                    times+=1
                if left<=maxSize:
                    maxSize-=left
                    leftList[leftId] = 26
                    times+=1
        elif leftId!=-1:
            left = leftList[leftId]
            if left<=maxSize:
                maxSize-=left
                leftList[leftId] = 26
                times+=1
        elif rightId!=-1:
            right = rightList[rightId]
            if right<=maxSize:
                maxSize-=right
                rightList[rightId] = 26
                times+=1
    print(times)
    break;
