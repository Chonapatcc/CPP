#include <bits/stdc++.h>
using namespace std;



int main()
{
   int num=123;

   string a="";

   while(num>0)
   {
      int let=num%10+(int)'0';
      a+=(char)let;
      
      num/=10;
   }

   cout << a;

   
}