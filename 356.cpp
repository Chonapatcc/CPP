#include <bits/stdc++.h>
using namespace std;

int main()
{
    string oil_1 ,oil_2;
    double price_1 , price_2;
    double distance_1 ,distance_2;

    cin >> oil_1 >> price_1 >> distance_1;
    cin >> oil_2 >> price_2 >> distance_2;

    double dis_per_price_1 = price_1/distance_1 *50;
    double dis_per_price_2 = price_2/distance_2 *50;

    cout <<fixed<<setprecision(2)<< "Average cost per km of "<<oil_1 << " is " <<dis_per_price_1 <<endl;
    cout <<fixed<<setprecision(2)<<"Average cost per km of "<<oil_2 << " is " <<dis_per_price_2 <<endl;


    if(dis_per_price_1 <dis_per_price_2)
    {
        cout << oil_1<<" is saver than "<<oil_2 ;
        
    }
    else
    {
        cout << oil_2<<" is saver than "<<oil_1 ;

    }


}