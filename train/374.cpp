#include <bits/stdc++.h>
using namespace std;
void printMinus()
{
    cout <<"-------"<<endl;
}

void printMatrix(char matrix[3][3])
{
    for(int i =0 ; i<3; i++)
    {
        printMinus();
        for(int y=0 ;y<3; y++)
        {
            cout <<'|' <<matrix[i][y];
        }
        cout <<'|'<<endl;
    }
    printMinus();
}

void matrixImplement(char matrix[3][3])
{
    for(int i =0 ; i<3;i++)
    {
        for(int y=0 ;y<3;y++)
        {
            matrix[i][y] = ' ';
        }
    }
}

int main()
{
    char matrix[3][3]={};
    matrixImplement(matrix);
    char x;
    int posi_x,posi_y;
    while(cin>>x)
    {
        if(x!='X' and x!='O')
        {
            break;
        }

        cin>>posi_y>>posi_x;
        matrix[posi_x][posi_y] = x;
    }



    printMatrix(matrix);
}