#include <bits/stdc++.h>
using namespace std;

int main()
{
    string DNA; 
    cin>>DNA;
    int checker=0;
    int count=0;
    string end_list[3] = {"UAA","UAG","UGA"};
    string list[5] ={"AUG","GCC","CUG","CGA","AGU"};
    for(int i =0 ; i<DNA.length() ;)
    {
        string nucle = {DNA[i],DNA[i+1],DNA[i+2]};
        if(nucle=="AUG")
        {
            checker=1;
        }
        else if(nucle==end_list[0] or nucle ==end_list[1] or nucle ==end_list[2] and checker==1)
        {
            break;
        }


        //cout << nucle<<" " <<count <<endl;
        
        if(checker)
        {
           i+=3;
           count++;
        }
        else
        {
            i++;
        }
    }
    cout <<count;


}