#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;


int main()
{   
    char x[100]; //100.200.300.400.500
    //100.200.300.400

    fgets(x,100,stdin);
    char *p=x;
    char *p0=x; 
    int n =0 ;

        while(*p0!='\n')
        {
            //printf("%c \n",*p0++);
            if(*p0=='.')
            {
                n++;
            }
            
            //printf("%c\n" ,*p0 );
            p0++;
        }
    *p0='.';
    *(p0+1) = '\n';
    //printf("%d \n" , n);
    if(n%2==0)
    {
        static char xx[]={0};
        int n =0;
        int id=0;
        int ch1=1;
        float sum=0;
        //printf("%s %s\n",xx,x);
        while(*p!='\n')
        {
            //printf("%c \n" , *p );
            if(*p=='.')
            {
                //printf("%s\n",xx);
                n++;
                if(ch1)
                {
                    //printf("%s\n" , xx);
                    sum+=atof(xx);
                    for(int i =0 ; i< id;i++)
                    {
                        xx[i]='0';
                    }
                    n=0;
                    ch1=0;
                    id=0;
                }
                else
                {
                    if(n==2)
                    {
                        //printf("%s\n" , xx);
                        sum+=atof(xx);
                        for(int i =0 ; i< id;i++)
                        {
                            xx[i]='0';
                        }
                        n=0;
                        id=0;
                    }
                    else
                    {
                        xx[id++]=*p;
                    }
                }
            }
            else
            {
                xx[id++]=*p;

            }
            
            //printf("%c\n" ,*p);
            p++;
        }
        printf("%f" , sum);
    }
    else
    {
        static char xx[]={0};
        int n =0;
        int id=0;

        float sum=0;
        //printf("%s %s\n",xx,x);
        while(*p!='\n')
        {
            //printf("%c \n" , *p );
            if(*p=='.')
            {
                //printf("%s\n",xx);
                n++;
                
                if(n==2)
                {
                    //printf("%s\n" , xx);
                    sum+=atof(xx);
                    for(int i =0 ; i< id;i++)
                    {
                        xx[i]='0';
                    }
                    n=0;
                    id=0;
                }
                else
                {
                    xx[id++]=*p;
                }
                
            }
            else
            {
                xx[id++]=*p;

            }
            
            //printf("%c\n" ,*p);
            p++;
        }
        printf("%f" , sum);
    }
    

}


