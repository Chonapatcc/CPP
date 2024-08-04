#include <iostream>
#include <queue>
#include <iomanip>
// #include <list>
using namespace std;
double factorial(double number)
{
    if (number==0 or number==1)
    {
        return 1;
    }
    return number*factorial(number-1);
}
void printQueue(queue<double> q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void recur(int id,double num,double weight,double score,double maxWeight, double minScore,queue<double>weightQueue,queue<double>scoreQueue,double *count,queue<double> indexList)
{
    if(score>=minScore and weight<=maxWeight)
    {
        printQueue(indexList);
        (*count) ++;
        return;
    }
    for (int i =id ; i<num;i++)
    {
        double weightNew = weightQueue.front();
        double scoreNew = scoreQueue.front();
        weightQueue.pop();
        scoreQueue.pop();
        
        if(weight+weightNew<=maxWeight)
        {
            queue<double> newIndexList= indexList;
            newIndexList.push(i);
            recur(i+1,num,weight+weightNew,score+scoreNew,maxWeight,minScore,weightQueue,scoreQueue,count,newIndexList);
        }
    }
}
int main()
{
    double num;
    cin>> num ;
    double maxWeight,minScore;
    cin>>maxWeight>>minScore;
    
    queue <double> weightQueue;
    queue <double> scoreQueue;

    for(int i =0 ; i<num;i++)
    {
        double weight;
        cin>>weight;
        weightQueue.push(weight);
    }
    for(int i =0 ; i<num;i++)
    {
        double score;
        cin>>score;
        scoreQueue.push(score);
    }
    // printQueue(weightQueue);
    // printQueue(scoreQueue);
    double all = 0;
    for(int i= 0;i<=num;i++)
    {
        all+=factorial(num) / factorial(num-i) / factorial(i);
    }
    double count =0;
    queue<double> indexList;
    if(0>=minScore)
    {
        count ++ ;
    }
    recur(0,num,0,0,maxWeight,minScore,weightQueue,scoreQueue,&count,indexList);

    cout << fixed<<setprecision(5) << count/all << endl;
}