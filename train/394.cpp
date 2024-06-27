#include <bits/stdc++.h>
using namespace std;

int main()
{
    char text[100];
    fgets(text,100,stdin);

    char *ptr = strtok(text," ");

    char list[100][100];
    int count[100]={};
    int index =0 ;
    while(strcmp(ptr,"stop"))
    {
        cout <<ptr<<endl;
        int ch=1;
        for(int i= 0; i<index ; i++)
        {
            if(strcmp(list[i],ptr)==0)
            {
                count[i]+=1;
                ch=0;
                break;
            }
        }
        if(ch)
        {
            strcpy(list[index],ptr);
            count[index]+=1;
            index++;
        }
        ptr = strtok(NULL," ");

        
        
    }

    for(int i=0 ; i< index ;i++)
    {
        cout << list[i]  <<endl;
    }
    




}