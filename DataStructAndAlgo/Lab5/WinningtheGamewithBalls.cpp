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
queue<int> getInput(int number)
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
void recur(int id,int num,int weight,int score,int maxWeight, int minScore,queue<int>weightQueue,queue<int>scoreQueue,int *count,int *all,queue<int> indexList)
{
    for (int i =id ; i<num;i++)
    {
        (*all)++;
        int weightNew = weightQueue.front();
        int scoreNew = scoreQueue.front();
        weightQueue.pop();
        scoreQueue.pop();
        queue<int>newIndexList(indexList);
        newIndexList.push(i);
        recur(i+1,num,weight+weightNew,score+scoreNew,maxWeight,minScore,weightQueue,scoreQueue,count,all,newIndexList); 
    }
    if(score>=minScore and weight<=maxWeight and weight>0 )
    {
        printQueue(indexList);
        (*count) ++;
    }
}
int main()
{
    int number,maxWeight,minScore;
    cin>>number>>maxWeight>>minScore;
    queue <int> weightQueue = getInput(number);
    queue <int> scoreQueue = getInput(number);
    int all = 1;
    int count =0;
    recur(0,number,0,0,maxWeight,minScore,weightQueue,scoreQueue,&count,&all,queue<int>());
    double result = (count*1.0)/all;
    cout <<fixed<<setprecision(5)<< result << endl; 
}