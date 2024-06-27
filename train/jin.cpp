#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout <<"คะแนนของคุณ : " <<fixed << setprecision(1) << a << endl;
    cout <<"คิดเป็นร้อยละ : " <<fixed << setprecision(1) << a/80*100 << "%"<< endl;
}