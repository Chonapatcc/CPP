#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr) 
{
    double size= arr.size();
    int plus=0,minus=0,zero=0;
    for(int i =0 ; i< size ;i++)
    {
        if(arr[i]>0)
        {
            plus++;
        }
        else if(arr[i]<0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    double ans[3]={plus/size,minus/size,zero/size} ;
    for(int i=0 ; i< 3; i++)
    {
        printf("%.6lf\n",ans[i]);
    } 



}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    signedRatio(ar);
    return 0;
}