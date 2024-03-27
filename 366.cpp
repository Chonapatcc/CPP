#include <bits/stdc++.h>
using namespace std;
void sortList(int list[],int size)
{
    for(int i =0 ; i<=size; i++)
    {
        for(int y =i+1 ;y<=size ; y++)
        {
            if(list[i]>list[y])
            {
                int temp = list[i];
                list[i] = list[y];
                list[y] = temp;
            }
        }
    }
}
int main()
{
    int N,Q;
    cin>>N>>Q;
    int price[N];
    for(int item_price =0 ;item_price<N;item_price++)
    {
        cin>>price[item_price];
    }
    for(int game =0 ; game<Q; game++)
    {
        int money;
        int range1, range2;
        cin>>money >>range1>>range2;
        int count =0;
        int itemprices[N] ;
        int dif =range2 - range1;
        for(int item=0; item <=dif; item++ )
        {
            itemprices[item] = price[range1+item-1];
        }
        sortList(itemprices,dif);
        for(int i=0 ; i<= dif ; i++)
        {
            if(money>=itemprices[i])
            {
                money-=itemprices[i];
                count++;
            }
            else
            {
                break;
            }
        }
        cout <<count <<endl;
        
        
    }

}