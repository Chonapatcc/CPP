#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    string ls[] = {"เรียนคณิตศาสตร์online","เรียนอังกฤษonline","เรียนไทยonline","เรียนวิทย์online"
    ,"อ่านเตรียมสอบ o-net","ทำงานบ้าน","เรียนวาดรูป","เรียนร้องเพลง"};
    int lsn[]={0,0,0,0,0,0,0,0};
    string temp;
    a+=',';
    for(int i =0 ; i<a.length();i++)
    {
        if(a[i]==',')
        {
            for(int y =0 ; y< 8; y++)
            {
                if(temp==ls[y])
                {
                    lsn[y]++;
                    temp="";
                    break;
                }
            }
        }
        else
        {
            temp+=a[i];
        }
    }
    int c=0;
    string tp[100];
    for(int i =0 ; i < 8 ; i++)
    {
        if(lsn[i]==0)
        {
            tp[c]=ls[i];
            c++;
        }
    }
    cout << "ยังเหลือสิ่งที่ต้องทำอีก "<<c<<" อย่าง" <<endl;
    for(int i =0 ; i<c; i++)
    {
        cout << "- "<<tp[i] << endl;
    }
}