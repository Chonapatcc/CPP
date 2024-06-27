#include <bits/stdc++.h>
using namespace std;

void func(string p1, string p2 , int y1 , int y2)
{
    if(y1<y2)
    {
        cout << p1 <<" is older than " <<p2 <<endl;
    }
    else if(y1==y2)
    {
        cout << p1 <<" and " <<p2 <<" would be sibling" <<endl;
    }
    else
    {
        cout << p2 <<" is older than " <<p1<<endl;
        
    }
}

int main()
{
    string p1,p2,p3;
    int y1,y2,y3;
    cin >>p1>>y1;
    cin >>p2>>y2;
    cin >>p3>>y3;

    func(p1,p2,y1,y2);
    func(p1,p3,y1,y3);
    func(p2,p3,y2,y3);


}