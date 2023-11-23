#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,p;
    cin >> n>>k>>m;
    
    string p1,p2,p0;
    getline(cin,p0);
    p=stoi(p0);
    getline(cin,p1);
    getline(cin,p2);
    int score;
    for(int i =0 ; i<n;i++)
    {
        if(p2[i]=='X')
        {
            score+=p;
        }
        else
        {
            if(p1[i]==p2[i])
            {
                score+=k;
            }
            else
            {
                score-=m;
            }
        }
    }
    cout <<"Your score:"<<score;

}