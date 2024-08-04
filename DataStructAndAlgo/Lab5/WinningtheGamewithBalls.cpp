#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
void printQueue(queue<int> q)
{
    if(q.empty())
    {
        return;
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void recur(int id,int num,int weight,int score,int maxWeight, int minScore,queue<int>weightQueue,queue<int>scoreQueue,long long int *count,queue<int> indexList)
{
    if(score>=minScore and weight<=maxWeight )
    {
        if(weight>0)
        {
            printQueue(indexList);
            (*count) ++;
        }
    }
    if(weightQueue.empty() or scoreQueue.empty())
    {
        return ;
    }
    for (int i =id ; i<num;i++)
    {
        int weightNew = weightQueue.front();
        int scoreNew = scoreQueue.front();
        weightQueue.pop();
        scoreQueue.pop();
        if(weight+weightNew<=maxWeight)
        {
            queue<int>newIndexList(indexList);
            newIndexList.push(i);
            recur(i+1,num,weight+weightNew,score+scoreNew,maxWeight,minScore,weightQueue,scoreQueue,count,newIndexList);
        }
    }
}
long long int factorial(long long int number)
{
    if (number==0 or number==1)
    {
        return 1;
    }
    return number*factorial(number-1);
}
queue <int> getInput(int number)
{
    queue <int> q = queue<int>();
    for(int i =0 ;i<number;i++)
    {
        int item ;
        cin>>item;
        q.push(item);
    }
    return q;
}
int main()
{
    int number,maxWeight,minScore;
    cin>>number>>maxWeight>>minScore;
    queue <int> weightQueue = getInput(number);
    queue <int> scoreQueue = getInput(number);
    // printQueue(weightQueue);
    // printQueue(scoreQueue);
    long long int all=0 ;
    for(int i= 0;i<=number;i++)
    {
        all+=factorial(number) / factorial(number-i) / factorial(i);
    }
    // cout << all;
    long long int count =0; 
    recur(0,number,0,0,maxWeight,minScore,weightQueue,scoreQueue,&count,queue<int>());
    double result = (count*1.0)/all;
    // cout << all << " " << count << endl;
    // result = factorial(15);
    cout <<fixed<<setprecision(5)<< result << endl; 
}