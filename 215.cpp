#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ip,s=0;
    string t1[]={"underwear","pants","skirt","shirt","blouse"};
    int p1[]={20,30,30,40,40};
    cin>>ip;
    ip-=1;
    cout << t1[ip] <<" - "<< p1[ip]<<endl;
    s+=p1[ip];

    string t2[]={"S","M","L","XL","XXL"};
    int p2[]={5,10,15,20,25};
    cin >>ip;
    ip-=1;
    cout << "size "<< t2[ip] <<" - "<< p2[ip]<<endl;
    s+=p2[ip];
    string ip2;
    string t3[]={"R","B","W","G","BK"};
    string t32[]={"red","blue","white","green","black"};
    int p3[]={15,15,10,15,15};
    cin >>ip2;
    for(int i =0 ; i<5;i++)
    {
        if(ip2==t3[i])
        {
            ip=i;
            break;
        }
    }
    s+=p3[ip];
    cout <<"color " <<  t32[ip] <<" - "<< p3[ip]<<endl;
    
    string t4[]={"cotton","nylon","spandex","wool","linen"};
    int p4[]={20,15,25,30,25};
    cin >>ip;
    ip-=1;
    cout << t4[ip] <<" - "<< p4[ip]<<endl;
    s+=p4[ip];
    
    cin >>ip;

    cout << "amount - "<<ip <<endl;

    cout << "cost - "<<s<<"*"<<ip<<" = " << s*ip ;






}
