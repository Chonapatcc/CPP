#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a<1 or a>5)
    {
        cout << "Error! Not have this floor";
    }
    else
    {
        cout << "OK! Wait please" <<endl;
        cout << "---------------" << endl;
        cout << "Lift is arriving!" << endl;
        cout << "---------------" << endl;
        cout << "Lift is going up!" << endl;
        cout << "---------------" << endl;
        if(a==1)
        {
            printf("Lift has reached the %dst floor!",a);
        }
        else if (a==2)
        {
            printf("Lift has reached the %dnd floor!",a);
        }
        else
        {
            printf("Lift has reached the %dth floor!",a);
        }
        
    }
}