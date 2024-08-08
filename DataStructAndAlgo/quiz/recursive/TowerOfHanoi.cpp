#include <bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, char from_rod, char to_rod,
                  char aux_rod,int *times)
{
    if (n == 0) {
        (*times)++;

        return;

    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod,times);
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod,times);
}

// Driver code
int main()
{
    int N = 3;
    int times = -1;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B',&times);
    cout << times;
    
    return 0;

}