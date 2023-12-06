#include <bits/stdc++.h>
using namespace std;



main()
{
   unsigned char a=5,b=3;
   unsigned char r1,r2,r3,r4,r5,r6;
   r1=a&b;
   r2=a|b;
   r3=a^b;
   r4= ~(a|0xf0);
   r5= a<<1;
   r6= b>>1;
   printf("%d %d %d %d %d %d",r1,r2,r3,r4,r5,r6); 
}