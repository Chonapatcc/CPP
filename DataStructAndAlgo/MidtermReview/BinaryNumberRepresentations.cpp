#include <bits/stdc++.h>
using namespace std;
unsigned int floatToBinary32(float f) {
    unsigned int sign = f < 0 ? 1 : 0;
    f = abs(f);
    if (f == 0) {
        return sign << 31;
    }
    int exponent = 127;
    while (f >= 2) {
        f /= 2;
        exponent++;
    }
    while (f < 1) {
        f *= 2;
        exponent--;
    }
    unsigned int mantissa = 0;
    f -= 1;
    for (int i = 0; i < 23; i++) {
        f *= 2;
        mantissa = (mantissa << 1) | (f >= 1 ? 1 : 0);
        f -= (f >= 1) ? 1 : 0;
    }
    unsigned int ieee754 = (sign << 31) | (exponent << 23) | mantissa;
    return ieee754;
}
bool isFloat(float num) {
    return num != static_cast<int>(num);
}
int main()
{
    string input;
    getline(cin,input);
    float num = stof(input);
    unsigned int binary = floatToBinary32(num);
    bitset<32> bits(binary);
    string temp = bits.to_string();
    string sign = input.find('-') !=-1? "1" : "0";
    string exponent = temp.substr(0,8);
    string expo = temp.substr(1,8);
    string mantissa = temp.substr(9,23);
    string iEEE754 = sign +" " + expo+" " + mantissa;
    
    if(!isFloat(num))
    {
        bitset<8> bits(abs(num));
        string temp = bits.to_string();
        string unsignedText = temp;
        string signedText = sign + " " + temp.substr(1,7);
        string oneComplementText = temp;
        string twoComplementText = temp;

        if(sign=="1")
        {
            unsignedText = "Underflow";
            bits.flip();
            string temp2 = bits.to_string();
            oneComplementText = temp2;
            if(num!=0)
            {
                bits = bitset<8> (abs(num+1));
                bits.flip();
                temp2 = bits.to_string();
                twoComplementText = temp2;
            }
        }
        cout << "Unsigned:         " <<unsignedText << endl;
        cout << "Signed Magnitude: " <<signedText << endl;
        cout << "1's Complement:   " <<oneComplementText << endl;
        cout << "2's Complement:   " <<twoComplementText << endl;
    }
    cout << "IEEE 754: " << iEEE754;
}