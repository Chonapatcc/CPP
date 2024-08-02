#include <iostream>
#include <list>
#include <iomanip>
using namespace std;
void printList(list<int> lst)
{
    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
void printArray(int arr[],int size)
{
    for(int i =0 ;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void recur(int *weightList,int *scoreList,int startId,int size,list<int> indexList,int maxWeight,int minScore , int weight,int score,double *count)
{
    // cout << "cat" <<endl;
    if(weight<=maxWeight and score>=minScore and !indexList.empty() and weight>0)
    {
        printList(indexList);
        (*count) ++;
        return;
    }

    for(int i=startId ; i < size ; i++)
    {
        if(weight + weightList[i] <=maxWeight)
        {
            list<int> newList(indexList);
            newList.push_back(i);
            recur(weightList,scoreList,i+1,size,newList,maxWeight,minScore,weight+weightList[i],score+scoreList[i],count);
        }
    }
}
int factorial(int number)
{
    if (number==0 or number==1)
    {
        return 1;
    }
    return number*factorial(number-1);
}
int main()
{
    int number,maxWeight,minScore;
    cin>>number>>maxWeight>>minScore;

    int weightList[number];
    int scoreList[number];
    list<int> indexList;
    
    for(int i =0 ;i<number;i++)
    {
        int weight ;
        cin>>weight;
        weightList[i] = weight;
    }
    for(int i =0 ;i<number;i++)
    {
        int score ;
        cin>>score;
        scoreList[i] = score;
    }

    // printArray(weightList,number);
    // printArray(scoreList,number);
    // printList(indexList);

    double all=0 ;
    for(int i= 0;i<=number;i++)
    {
        all+=factorial(number) / factorial(number-i) / factorial(i);
    }
    double count =0; 

    recur(weightList,scoreList,0,number,indexList,maxWeight,minScore,0,0,&count);
    
    // cout << all << " " << count << endl;
    cout <<fixed<<setprecision(5)<< count/all << endl; 

}