#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;


struct a
{
    int x;
    int x2;
};

struct b
{
    int x1;
    struct a a;
};
int main()
{   
    
    struct b cat;
    cat.x1= 100;
    cat.a={200,300};

    printf("%d %d %d",cat.x1,cat.a.x,cat.a.x2);
    



    

}


