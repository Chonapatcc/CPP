#include <bits/stdc++.h>
using namespace std;


int main() {

  int arr[100];
  int x;
  int ind=0;
  cin >>x;

  while (x!=0)
  {
    arr[ind]=x;
    cin >> x;
    ind++;
  }

  string ch;
  cin >> ch;
  
  for(int i =0 ; i< ch.length();i++)
  {
    ch[i]=tolower(ch[i]);
  }
  sort(arr,arr+ind);

  if (ch=="max")
  {
    reverse(arr,arr+ind);
  }

  for(int i=0;i<ind;i++)
  {
    cout << arr[i] << " ";
  }

  


}