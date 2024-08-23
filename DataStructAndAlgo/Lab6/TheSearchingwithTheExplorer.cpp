#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &v,int find)
{
    int counter =0 ;
    for(auto i:v)
    {
        counter++;
        if(i ==find)
        {
            return counter;
        }
    }
    return -1;
}
int sentinelLinearSearch(vector<int> &v,int find)
{
    int counter =0 ; 
    int size = v.size();
    for(int i = size-1 ; i>=0 ; i--)
    {
        counter ++ ;
        if(v[i] == find)
        {
            return counter;
        }
    }
    return -1;
}
int binarySearch(vector<int> &v,int find)
{
    int counter =0;
    int low=0;
    int high=v.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        counter++;
        if(v[mid] == find)
        {
            return counter;
        }
        else if(v[mid]<find)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}
void sortArr(vector<int> &v)
{
    int size= v.size();
    for(int i =0;i<size-1;i++)
    {
        for(int y =i+1 ;y<size-1 ; y++)
        {
            if(v[i]>v[y])
            {
                int temp = v[i];
                v[i] = v[y];
                v[y] = temp;
            }
        }
    }
}
void printArr(vector<int> &v)
{
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    string line;
    getline(cin,line);
    stringstream s(line);
    int num;
    vector <int> v;
    while(s>>num)
    {
        v.push_back(num);
    }
    int find;
    cin>> find;
    
    int linear = linearSearch(v,find);
    int sentinel = sentinelLinearSearch(v,find);
    sortArr(v);
    // printArr(v);
    int binary = binarySearch(v,find);

    if(linear == -1 and sentinel == -1 and binary == -1)
    {
        cout<<"Not Found";
    }
    else
    {
        int m = min(linear,min(sentinel,binary));
        string tp = "";
        if(m == linear)
        {
            if(tp!="")
            {
                tp += " ";
            }
            tp += "Linear";
        }
        if(m == sentinel)
        {
            if(tp!="")
            {
                tp += " ";
            }
            tp += "Sentinel";
        }
        if(m == binary)
        {
            if(tp!="")
            {
                tp += " ";
            }
            tp += "Binary";
        }
        cout << tp <<endl;
        cout << m <<endl;
    }
}