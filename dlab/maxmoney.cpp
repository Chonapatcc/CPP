#include <iostream>
using namespace std;


void printArray(int **array, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n ;
    cin>> n;
    int *money = (int *)malloc((n)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>> money[i];
    }

    int *max_money = (int *)malloc((n)*sizeof(int));
    int max_money_so_far = -2147483648;
    for(int i=0;i<n;i++)
    {
        max_money[i] = 0;
    }
    max_money[0] = money[0];
    for(int i=1 ;i <n;i++)
    {
        max_money[i] = max(max_money[i-1]+money[i], money[i]);
        if(max_money[i] > max_money_so_far)
        {
            max_money_so_far = max_money[i];
        }
    }
    cout << max_money_so_far << endl;
}