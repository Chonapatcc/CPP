#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    double lscore[a+1],sum=0;
    long long int lid[a+1];
    for(int i= 0; i< a ;i++)
    {
        double score;
        long long int id;
        cin>>id>>score;
        if(score>100 or score<0)
        {   
            cout<<"Error";
            exit(0);
        }
        sum+=score;
        lscore[i]=score;
        lid[i]=id;

    }
    sum/=a;
    long long int passed[a+1];
    double passscore[a+1];
    int c=0;

    for(int i =0 ; i<a; i++)
    {
        if(lscore[i]>=sum)
        {
            passscore[c]=lscore[i];
            passed[c]=lid[i];

            c++;
        }
    }

    for(int i = 0; i < c ; i++)
    {
        for(int y = i+1; y<c; y++)
        {
            if(passed[i]>passed[y])
            {
                int x;
                x=passed[i];
                passed[i]=passed[y];
                passed[y]=x;

                

            }
        }
    }
    //cout <<sum <<endl;
    for(int i=0 ; i< c ; i++)
    {
        cout << passed[i]<<endl;
    }

}   