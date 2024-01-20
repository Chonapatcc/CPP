#include <bits/stdc++.h>
using namespace std;
int func(string t)
{
    int x =0 ;
    for(int i=0 ; i<t.length() ; i++)
    {
        if(t[i]!='-' and isalpha(t[i]))
        {
            return 1;
        }
    }


    return x; 
}
int main()
{
    string x,y,z;
    cin>>x>>y>>z;

    if(func(x) or func(y) or func(z))
    {
        cout << "The number you entered is not an integer, 0 or a positive integer. Please enter again.";
        exit(0);
    }

    

    int a,b,c;
    a=stoi(x);
    b=stoi(y);
    c=stoi(z);
    if(a<0 or b<0 or c<0)
    {
        printf("The number you entered is not an integer, 0 or a positive integer. Please enter again.");
        exit(0);
    }
    int n =0 ; 

    while(a>0 and b>0 and c>0)
    {
        a-=3;
        b-=2;
        c-=5;
        n++;
    }
    if(a<0)
    {
        a=0;
    }
    if(b<0)
    {
        b=0;
    }
    if(c<0)
    {
        c =0 ;
    }
    printf("The total number of relief bags that can be arranged is %d.\n",n);
    printf("There are %d loaves of bread left in total.\n",a);
    printf("There are %d bottles of water left in total.\n",b);
    printf("There are %d boiled eggs left in total.\n",c);


}