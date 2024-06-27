#include <bits/stdc++.h>
using namespace std;

int main()
{
    string list[5];
    for(int i=0;i<5;i++)
    {
        getline(cin,list[i]);
    }

    cout << "--- Customer Detail ---" << endl;
    cout << "Name : " << list[0]<< " " << list[1] << endl;
    cout << "Address : " << list[2]<<endl;
    cout << "Gender : " << list[3] <<endl;
    cout << "Tel : " << list[4] << endl;
    

}