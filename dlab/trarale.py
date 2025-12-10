def solve():
    n,day = map(int,input().split())

    parent = list(range(n+1))
    sizes=  [1] *(n+1)
    is_dead = [False] *(n+1)

    def find_root(x):
        if parent[x]!=x:
            parent[x]= find_root(parent[x])
        return parent[x]
    
    def union(a,b):
        rootA= find_root(a)
        rootB= find_root(b)
        
        if rootA == rootB:
            is_dead[rootA]= True
            return
        
        parent[rootB]= rootA
        sizes[rootA] += sizes[rootB]
        if is_dead[rootA] or is_dead[rootB]:
            is_dead[rootA]= True


    for i in range(day):
        mode = input()
        if mode[0]=="1":
            mode = mode.split()
            tra1,tra2 = map(int,mode[1:])
            union(tra1,tra2)
        else:
            max_power = -1
            for j in range(1,n+1):
                
                if parent[j] == j and not is_dead[j]:
                    max_power = max(max_power,sizes[j])
            print(max_power)

solve()
