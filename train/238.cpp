#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[8]={"study math online","learn English online",
"learn Thai online","study science online",
"read test preparation o-net","do housework",
"learn to draw","learn to sing"};
    string inp,temp="";
    getline(cin ,inp);
    string arr2[100];
    int c=0;
    inp+=',';
    for(int i=0;i<inp.length() ; i++ )
    {
        if(inp[i]==',')
        {
            arr2[c]=temp;
            temp="";
            c++;
        }
        else
        {
            temp+=inp[i];
        }

    }
    int arrch[8]={0,0,0,0,0,0,0,0},co=0;
    for(int i =0 ; i< c ;i ++)
    {
        for(int y =0 ; y<8 ; y++)
        {
            if(arr2[i]==arr[y])
            {
                if(!arrch[y])
                {
                    co+=1;
                    arrch[y]=1;
                }
                break;
            }
        }
    }
    printf("There is still %d things to do.\n",8-co);
    for(int i =0 ; i<8 ; i++)
    {
        if(!arrch[i])
        {
            cout <<"- "<<arr[i]<< endl;
        }
    }


}