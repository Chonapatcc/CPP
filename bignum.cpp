#include <bits/stdc++.h>
using namespace std;
#include 

int main()
{
    ieee a[10];
    cin>>a[0]>>a[1];
    unsigned long double mod=1000000007;

    
    a[0]=log10l(a[0]);
    a[2]=a[0]*a[1];


    
    cout << fixed << setprecision(30)<<a[2]<<endl;
    //cout << fixed << setprecision(30)<<a2<<endl;

    a[2] = fmodl(a[2],mod);
    cout << fixed << setprecision(20)<<a[2]<<endl;
    /*;
    
    
    string a2[10] = {to_string(a[2])};
    long long int a3[10]= {a[2]};
    cout << a2[0] <<endl;
    cout  << a3[0];*/

    /*ex1.
    1272551081
    1926073815862655512
    ans = 534407533 */

    /*ex2.
    654879642315
    979878946551647
    ans = 792150970
    */
  

}