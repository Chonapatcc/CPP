#include <iostream>
using namespace std;

int main()
{
    int students,tests;
    cin >> students >> tests;

    int correctAns[tests+1];
    for(int i =0 ; i< tests ; i++ )
    {
        cin>> correctAns[i];
    }
    for(int i=0; i<students; i++ )
    {
        int score=0 ;
        int answers[tests+1];
        for(int i =0 ; i< tests ; i++ )
        {
            cin>>answers[i];
            if (answers[i] == correctAns[i])
            {
                score+=1;
            }
        }
        cout << score << " ";
    }


}