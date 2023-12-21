#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if(a==0)
    {
        cout << "No courses.";
    }
    else if(a<0)
    {
        cout << "Please enter number greater than or equal to -1.";
        
    }
    else
    {
        printf("Now, You have %d courses.",a);
    }

}