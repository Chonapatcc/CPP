#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &v,int find)
{
    int size= v.size();
    int time =0 ;
    for(int i =0 ; i<size; i++)
    {
        time++;
        if(v[i] == find)
        {
            return time;
        }
    }
    return -1;
}
int sentinelSearch(vector<int> &v,int find)
{
    int size= v.size();
    int time =0 ;
    for(int i =0 ; i<size; i++)
    {
        time++;
        if(v[size-i-1] == find)
        {
            return time;
        }
    }
    return -1;
}

int binarySearch(vector<int> &v,int find)
{
    int time =0 ;
    int low =0;
    int high = v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        time++;
        if(v[mid] == find)
        {
            return time;
        }
        else if(v[mid] > find)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
void sort(vector<int> &v)
{
    int size= v.size();
    for(int i =0 ; i<size; i++)
    {
        for(int y=i+1 ; y<size; y++)
        {
            if(v[i] > v[y])
            {
                swap(v[i],v[y]);
            }
        }
    }
}

int main()
{

    string line;
    getline(cin,line);
    stringstream s(line);
    int num;
    vector<int> v;
    while(s>>num)
    {
        v.push_back(num);
    }

    int find;
    cin>>find;
    
    int linear = linearSearch(v,find);
    int sentiment = sentinelSearch(v,find);
    sort(v);
    int binary = binarySearch(v,find);
    int m = min(linear,min(sentiment,binary));
    
    if(sentiment==-1 and linear==-1 and binary==-1)
    {
        cout << "Not Found" <<endl;
    }
    else
    {
        string tp="";
        if(linear == m)
        {
            tp+="Linear";
        }
        if(sentiment == m)
        {
            if(tp!="")
            {
                tp+=" ";
            }
            tp+="Sentinel";
        }
        if(binary == m)
        {
            if(tp!="")
            {
                tp+=" ";
            }
            tp+="Binary";
            
        }
        if(tp!="")
        {
            cout<<tp<<endl;
            cout<< m <<endl;
        }
    }
}