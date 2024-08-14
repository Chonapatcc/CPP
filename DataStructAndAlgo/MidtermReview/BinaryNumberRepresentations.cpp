#include <bits/stdc++.h>
using namespace std;
string toUnsign(int num)
{
    if(num<0)
    {
        return "Underflow";
    }
    bitset<8> b(abs(num));
    return b.to_string();
}
string toSign(int num)
{
    bitset<7> b(abs(num));
    return b.to_string();
}
string toOneComp(int num)
{
    bitset<8> b(toUnsign(abs(num)));
    if(num<0)
    {
        b.flip();
    }
    return b.to_string();
}
string toTwoComp(int num)
{
    if(num<0)
    {
        bitset<8> b(toUnsign(abs(num+1)));
        b.flip();
        return b.to_string();
    }
    else
    {
        bitset<8> b(toUnsign(abs(num)));
        return b.to_string();
    }
}
int toLog(string text)
{
    float num = stod(text);
    if(num<=0)
    {
        return 0;
    }
    int expo =0 ;
    while(num<1)
    {
        num*=10;
        expo--;
    }
    expo += int(log10(num));
    return expo;
}
string decimalToBinary(float num)
{
    string t = "";
    for(int i=0 ; i<=24*2; i++)
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
string toIEEE754(int num,float decimal)
{
    string textNum = toUnsign(abs(num));
    string textDec = decimalToBinary(abs(decimal));
    string type = to_string((num+decimal)<0);
    int expo =0 ;
    string text = "";

    expo = toLog(textNum + "." +textDec);
    if(num==0)
    {
        text = textDec.substr(abs(expo) , textDec.length()+expo);
    }
    else
    {
        text =  textNum.substr(textNum.length()-expo , expo) + textDec;   
    }

    if((num+decimal)!=0)
    {
        expo+=127;
    }
    string expoText =toUnsign(expo);
    text = text.substr(0,23);
    
    return type + " " +expoText +" " +text;
}

int main()
{
    double input ;
    cin>>input;
    string unsign,sign,oneComp,twoComp,iEEE;
    string type = to_string(input<0);
    int num = int(input);
    float decimal = input - num;
    if(floor(input) != ceil(input))
    {
        iEEE = toIEEE754(num, decimal) ;
        cout << "IEEE 754: " << iEEE <<endl;
    }
    else
    {
        unsign = toUnsign(num);
        sign = toSign(num);
        oneComp = toOneComp(num);
        twoComp = toTwoComp(num);
        iEEE = toIEEE754(num,decimal);
        cout << "Unsigned:         " << unsign <<endl;
        cout << "Signed Magnitude: " << type << " " <<sign <<endl;
        cout << "1's Complement:   " << oneComp <<endl;
        cout << "2's Complement:   " << twoComp <<endl;
        cout << "IEEE 754: " << iEEE <<endl;
    }
    
}