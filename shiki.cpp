#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name[5]={"THAI", "MATH", "ENGLISH" ,"SCIENCE" , "SPORT"};
    double x;
    double sum;
    string tp;
    for(int i =0;i<5;i++)
    {
        cin >> x;
        sum+=x;

        cout << name[i]+" = "<< fixed << setprecision(1) <<x << endl;
    }
    cout << "---" <<endl;

    cout << "GPA = "<< setprecision(1) <<sum/5<< endl;

}