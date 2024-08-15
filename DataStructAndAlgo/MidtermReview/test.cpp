#include <bits/stdc++.h>
using namespace std;

bool cat(){
   static int i = 0;
   return i++ % 2 == 0;
}

int main(){
    unsigned int sign = 1; // Negative number
    unsigned int sign_bit = sign << 31; // Result:
    cout << sign_bit;
}
