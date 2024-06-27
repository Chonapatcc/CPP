#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a<=0)
    {
        cout<<"ไม่สามารถหาได้" ;
        return 0;
    }
    list <int>l;
    int c=0;
    bool ch=true;
    for(int i=2;i<=a;i++)
    {
        if(l.size()==0)
        {
            l.push_back(i);
            c++;
        }
        else
        {
            ch=true;
            for(int num:l)
            {
                if(i%num==0)
                {
                    ch=false;
                    break;
                }
            }
            if(ch)
            {
                l.push_back(i);

                c++;
            }

        }

    }
    cout << "จำนวนเฉพาะในช่วง 0 ถึง "<<a<<endl;
    cout << "มีอยู่ " << c << " จำนวน";
}