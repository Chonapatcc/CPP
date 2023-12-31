#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    a+=" ";
    string t="0",t2="0";
    char x,sign='\0';
    int x1=1,ch=0;

    for(int i=0 ; i< a.length() ;i++)
    {
        if(a[i]==' ' and ch)
        {
            int a1=stoi(t),a2=stoi(t2);
            int dif=a1*a2;
            if(a2==0)
            {
                if(!x1)
                {
                    if(sign!='\0')
                    {
                        cout << sign << " ";  
                    }
                    if(a1==0)
                    {
                        printf("1 ");
                    }
                    else
                    {
                        printf("%d ",a1);
                    }
                    
                }
                
                
            }
    
            
            else
            {
                if(sign!='\0')
                {
                    cout << sign << " ";  
                }


                printf("%d%c",dif,x);
                
                if(a2-1>1)
                {
                    printf("^%d ",a2-1);
                }
                else
                {
                    printf(" ");
                }
            }
            
            t="0";
            t2="0";
            x1=1;
            ch=0;
        }
        else if (isalpha(a[i]))
        {
            ch=1;
            x1=0;
            x=a[i];
        }
        else if(isdigit(a[i]))
        {
            ch=1;
            if(x1)
            {
                t+=a[i];
            }
            else
            {
                t2+=a[i];
            }
            
        }
        else if(a[i]=='+' or a[i]=='-')
        {
            sign=a[i];
        }

    }
}