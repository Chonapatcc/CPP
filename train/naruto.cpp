#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,score=0;
    string team,p;
    cin>>n >> team;
    for(int i=0 ;i<n;i++)
    {
        cin >> p;
        if(p=="SG")
        {
            score+=3;
        }
        else if(p=="F")
        {
            score+=1;
        }
        else
        {
            score+=2;
        }
    }
    cout << "Team : " << team << endl;
    printf("Get %d points",score);
}