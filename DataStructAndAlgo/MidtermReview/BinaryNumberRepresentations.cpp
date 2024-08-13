#include <bits/stdc++.h>
using namespace std;
string toUnsign(int num)
{
    if(num<0)
    {
        return "Underflow";
    }
    if(num>=256)
    {
        return "Overflow";
    }
    bitset<8> b(num);
    return b.to_string();
}
string toSign(int num)
{
    if(num<-128)
    {
        return "Underflow";
    }
    if(num>=128)
    {
        return "Overflow";
    }
    bitset<7> b(abs(num));
    return b.to_string();
}
string toOneComp(int num)
{
    if(num<=-128)
    {
        return "Underflow";
    }
    if(num>=128)
    {
        return "Overflow";
    }
    bitset<7> b(abs(num));
    if(num<0)
    {
        b.flip();
    }
    return b.to_string();
}
string toTwoComp(int num)
{
    if(num<-128)
    {
        return "Underflow";
    }
    if(num>=128)
    {
        return "Overflow";
    }
    if(num<0)
    {
        bitset<7> b(abs(num+1));
        b.flip();
        return b.to_string();
    }
    bitset<7> b(abs(num));
    return b.to_string();
}
int toLog(string text)
{
    int num = log10(max(1,stoi(text)));
    return num;
}
string decimalToBinary(double num)
{
    string t = "";
    for(int i=0 ; i<23; i++)
    {
        num*=2;
        if(num>=1)
        {
            num-=1;
            t+="1";
        }
        else
        {
            t+="0";
        }
    }
    return t ; 
}
string toIEEE754(int num,double decimal)
{
    string text = toUnsign(abs(num));
    int expo = toLog(text);
    string text2 = text.substr(text.length()-expo,text.length()-1);
    expo = 127+expo;
    string expoText = toUnsign(expo);
    
    string dec = decimalToBinary(abs(decimal));
    text2+=dec;
    text2 = text2.substr(0,23);
    string type = "";
    if(num>=0)
    {
        type = "0";
    }
    else
    {
        type = "1";
    }
    return type+" "+expoText+" "+text2;
}

int main()
{
    double num ;
    cin>>num;
    string unsign,sign,oneComp,twoComp,iEEE;
    string type = to_string(num<0);
    int number = int(num);
    num -= number;
    if(num!=0)
    {
        iEEE = toIEEE754(number, num) ;
        cout << "IEEE 754: " << iEEE <<endl;
    }
    else
    {
        unsign = toUnsign(number);
        sign = toSign(number);
        oneComp = toOneComp(number);
        twoComp = toTwoComp(number);
        iEEE = toIEEE754(number,num);
        cout << "Unsigned:         " << unsign <<endl;
        cout << "Signed Magnitude: " << type << " " <<sign <<endl;
        cout << "1's Complement:   " << type <<oneComp <<endl;
        cout << "2's Complement:   " << type <<twoComp <<endl;
        cout << "IEEE 754: " << iEEE <<endl;
    }
    
}