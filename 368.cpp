#include <bits/stdc++.h>
using namespace std;

int main()
{
    string DNA; 
    cin>>DNA;
    int checker=0;
    int count=0;
    string end_list[3] = {"UAA","UAG","UGA"};
    for(int i =0 ; i<DNA.length() ;)
    {
        string nucle = {DNA[i],DNA[i+1],DNA[i+2]};
        if(nucle=="AUG")
        {
            checker=1;
            count+=1;
            i+=3;
            continue;
        }
        else if(nucle==end_list[0] or nucle ==end_list[1] or nucle ==end_list[2] and checker==1)
        {
            break;
        }

        int base[5]={0,0,0,0,0};
        for(int i =0; i<3; i++)
        {
            if(nucle[i]=='A')
            {
                base[0]++;
            }
            else if(nucle[i]=='T')
            {
                base[1]++;
            }
            else if(nucle[i]=='C')
            {
                base[2]++;
            }
            else if(nucle[i]=='G')
            {
                base[3]++;
            }
            else if(nucle[i]=='U')
            {
                base[4]++;
            }
        }

        //cout << nucle<<" " <<count <<endl;
        
        if(checker)
        {
            if(base[2]==2 and base[3]==1)
            {
                count+=2;
            }
            else if(base[2]==1 and base[3]==1 and base[4]==1)
            {
                count+=3;
            }
            else if(base[0]==1 and base[2]==1 and base[3]==1)
            {
                count+=4;
            }
            else if(base[0]==1 and base[3]==1 and base[4]==1)
            {
                count+=5;
            }
            i+=3;
        }
        else
        {
            i+=1;
        }
    }
    cout <<count;


}