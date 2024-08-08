#include <bits/stdc++.h>
using namespace std;

int checkType(string type)
{
    if(type=="char")
    {
        return 1;
    }
    else if(type=="short")
    {
        return 2;
    }
    else if(type=="int")
    {
        return 4;
    }
    else if(type=="long")
    {
        return 8;
    }
    else if(type=="float")
    {
        return 4;
    }
    else if(type=="double")
    {
        return 8;
    }
    else
    {
        return -1;
    }
}
bool checkSize(int size)
{
    if(size<0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool checkOverSize(int find,int size)
{
    if(find>=size or find<0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string type;
    cin >> type;
    int typeSize = checkType(type);
    if(typeSize==-1)
    {
        cout << "Invalid Type";
        return 0;
    }
    long long int startAddress;
    cin>>startAddress;

    int size1,size2,size3;
    cin>>size1>>size2>>size3;

    if(!checkSize(size1) || !checkSize(size2) || !checkSize(size3))
    {
        cout << "Invalid Argument";
        return 0;
    }

    int find1,find2,find3;
    cin>>find1>>find2>>find3;

    // if(!checkSize(find1) || !checkSize(find2) || !checkSize(find3))
    // {
    //     cout << "Invalid Argument";
    //     return 0;
    // }

    if(checkOverSize(find1,size1) || checkOverSize(find2,size2) || checkOverSize(find3,size3))
    {
        cout << "Segmentation Fault";
        return 0;
    }

    long long int spaceSize = typeSize * size1*size2*size3;
    long long int findAddress = startAddress + typeSize*(find1*size2*size3 + find2*size3 + find3);
    cout << spaceSize <<" B, Accessing Address " << findAddress;
    return 0;
}



