#include <bits/stdc++.h>
using namespace std;

int main()
{
    string music_list[100] ={};
    int index=0;
    string input;
    getline(cin,input);
    
    while(input !="exit")
    {
        music_list[index] = input;
        index++;
        getline(cin,input);

    }
    if(index==0)
    {
        cout <<"There is no song in the album";
        exit(0);
    }
    double idcheck;
    cin>>idcheck;
    int id=idcheck;
    if(id != idcheck)
    {
        cout <<"The MP3 Player has an Error";
        exit(0);
    }
    
    if(id<=0 or id>index)
    {
        cout <<"The MP3 Player has an Error";
    }
    else
    {
        cout <<"Currently playing: " <<music_list[id-1];
    }

}