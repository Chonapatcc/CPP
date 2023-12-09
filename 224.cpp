#include <bits/stdc++.h>
using namespace std;

string plusstr(string num1,string num2)
{   
    int len1=num1.length();
    int len2=num2.length();
    int len=0;
    string temp="";

    for(int i =0 ; i<abs(len1-len2) ; i++)
    {
        temp+='0';
    }
    if(len1>len2)
    {
        num2=temp+num2;
    }
    else if(len2>len1)
    {
        num1=temp+num1;

    }

    int size=num1.length();
    vector<int> arr(size+1,0) ;

    int ind=0,carry =0 ;
    for(int i =size-1 ; i>=0 ;i--)
    {
        int n1=num1[i]-'0';
        int n2=num2[i]-'0';
        int re= n1+n2+carry;
   
        carry=re/10;
        arr[ind]=re%10;
        

        ind++;
    }   
    
    if(carry>0)
    {
        arr[ind]+=carry;
    }
    else
    {
        ind-=1;
    }

    string tp="";
    for(int i =ind ; i>=0 ; i--)
    {
        //cout << arr[ind] <<endl;
        tp+=to_string(arr[i]);
    }

    return tp;
}

string multistr(string num1,string num2)
{
    int len1=num1.length();
    int len2=num2.length();
    int len=len1+len2;
    vector<int> arr(len,0);

    int ind1=0,ind2=0;

    for(int i =len1-1 ; i>=0 ; i--)
    {
        int n1=num1[i]-'0';
        ind2=0;
        int carry=0;
        for(int j=len2-1 ; j>=0 ; j--)
        {
            int n2=num2[j]-'0';
            int re=n1*n2+carry+arr[ind1+ind2];

            carry=re/10;
            arr[ind1+ind2]=re%10;

            ind2++;
        
        }
        if(carry>0)
        {
            arr[ind1+ind2]+=carry;
        }
        ind1++;
    }
    while(len-1>=0 and arr[len-1]==0)
    len--;
    string tp="";
    for(int i =len-1 ; i>=0 ;i --)
    {
        tp+=(char)(arr[i]+'0');
    }

    return tp;
}

string sumstr(string num)
{
    int sum=0 , len=num.length();
    for(int i =0 ; i<len;i++)
    {
        sum+=num[i]-'0';
    }

    string tp=to_string(sum);
    
    return tp;
}


int main()
{
    string a;
    cin>>a;
    int len=a.length();
    string temp;
    string sum="0";
    for(int i =0 ; i<len ; i++)
    {
        string n1=to_string((int)a[i]);
        temp=n1;

        for(int y =0 ; y<len-1 ; y++)
        {
            
            temp=multistr(temp,n1);
        }
        sum=plusstr(sum,temp);
    }
    
    while (sum.length()>1)
    {
        sum=sumstr(sum);
    }

    cout << sum;

    
    
        
}