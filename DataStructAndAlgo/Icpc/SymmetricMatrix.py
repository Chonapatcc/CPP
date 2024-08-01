def printLst(lst,size):
    for x in range(size):
        for y in range(size):
            print(lst[x][y],end=" ")
        print(end="\n")

def checkSymmetrix(lst,size):
    for i in range(size):
        for j in range(size):
            if lst[i][j]!=lst[size-i-1][size-j-1] or lst[j][i]!=lst[size-j-1][size-i-1]:
                return False
    return True




times = int(input())
for i in range(times):
    n = int(input().split()[-1])
    lst = []
    lstTrans = [[] for _ in range(n)]
    for x in range(n):
        miniLst = [int(x) for x in input().split()]
        lst.append(miniLst)

    print(f"Test #{i+1}: ",end="")
    if checkSymmetrix(lst,n):
        print("Symmetric.")
    else:
        print("Non-symmetric.")
    



