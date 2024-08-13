#include <bits/stdc++.h>
using namespace std;

int onesComplement(int num, int n) {

    bitset<8> b(12.25);
    string x= b.to_string();
    cout << x << "| "<<endl; 
    // Invert all bits
    b.flip();

    // Convert back to integer
    return b.to_ulong();
}
int toLog(string text)
{
    int num = log10(max(1,stoi(text)));
    return num;
}
int main() {
    cout << toLog("0000001");
    return 0;
}
