t = input().split("+")

for i in range(len(t)):
    x = t[i]
    if("x" in x):
        if(x=="x"):
            t[i]="1"
        elif(x=="-x"):
            t[i]="-1"
        else:
            a = x.split("x")
            coef,power = a[0],a[1]
            if(power==""):
                power=1
            else:
                power=int(power)
            if(coef==""):
                coef=1
            result = coef*power
            if(power-1==0):
                t[i]=str(result)
            elif (power-1==1):
                if(result==1):
                    t[i]="x"
                else:
                    t[i]=str(result)+"x"
            else:
                if(result==1):
                    t[i]="x"+str(power-1)
                else:
                    t[i]=str(result)+"x"+str(power-1)

        print(t[i],end="")
        

        