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
        cout << "Now, You have 3 courses." <<endl;
        for(int i=0 ; i < 3 ; i++)
        {

            char temp[100];
            cin>>temp;
            printf("Course %d : %s\n",i+1,temp);


        }
    }
    
}