#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    string arr[8]= {"F","D","D+","C","C+","B","B+","A"};
    int score[8] = {50,54,59,64,69,74,79,100};
    string x;
    for(int i =0 ; i < 8 ; i++)
    {
        if(a<=score[i])
        {
            x= arr[i];
            break;
        }
    }
    cout << "grade: " << x <<endl;
    cout << "score: " << a << endl;
}