#include <bits/stdc++.h>
using namespace std;

string toUnsigned(int number,bool type)
{
    if(type and number!=0)
    {
        return "Underflow";
    }
    bitset<8> b(number);
    return b.to_string();
}
string toSigned(int number,bool type)
{
    bitset<7> b(number);
    return b.to_string();
}
string toOneComplement(int number,bool type)
{
    bitset<8> b(number);
    if(type)
    {
        b.flip();
    }
    return b.to_string();
}
string toTwoComplement(int number,bool type)
{
    if(type)
    {
        number-=1;
    }
    bitset<8> b(number);
    if(type)
    {
        b.flip();
    }
    return b.to_string();
}
string floatToBinary(float number)
{   
    string text= "" ;
    for(int i=0 ; i< 24 ; i ++)
    {
        number*=2;
        if(number>=1)
        {
            text+= "1";
            number-=1;
        }
        else
        {
            text+= "0";
        }
    }
    return text;
}
int getExpo(float result)
{
    float num = result;
    int expo = log10(num);
    return expo;
}
string toFloatting(float number,bool type)
{
    string padZero = toUnsigned(0,0) ;
    if (number == 0) {
        string result = "0 " + padZero + " "+padZero+padZero+padZero+padZero+padZero;
        return result.substr(0,34) ;
    }
    int exponent = 0;
    while (number >= 2) {
        number /= 2;
        exponent++;
    }
    while (number < 1) {
        number *= 2;
        exponent--;
    }
    string mantissa = "";
    float f= number-1;
    for (int i = 0; i < 23; i++) {
        f *= 2;
        if(f>=1)
        {
            f-=1;
            mantissa+="1";
        }
        else
        {
            mantissa+="0";
        }
    }
    string expoText = toUnsigned(127+exponent,0);
    mantissa += padZero+padZero+padZero;
    mantissa = mantissa.substr(0,23);
    string result = to_string(type)+ " " + expoText + " " + mantissa;
    return result ;
}
int main()
{
    string input;
    getline(cin,input);
    bool type = (input[0]=='-') ; //1 = -,0 = +; 

    float num = abs(stod(input));
    bool isFloat = !(num == int(num));
    if(isFloat)
    {
        string floatting = toFloatting(num,type);
        cout <<"IEEE 754: " <<  floatting << endl;
    }
    else
    {
        int number = int(num);
        string unsign = toUnsigned(number,type);
        string sign = to_string(type) + " " +toSigned(number,type);
        string oneComp = toOneComplement(number,type);
        string twoComp = toTwoComplement(number,type);
        string floatting = toFloatting(number,type);
        cout <<"Unsigned:         " << unsign << endl;
        cout <<"Signed Magnitude: " << sign << endl;
        cout <<"1's Complement:   " <<  oneComp << endl;
        cout <<"2's Complement:   " <<  twoComp << endl;
        cout <<"IEEE 754: " <<  floatting << endl;
    }
}