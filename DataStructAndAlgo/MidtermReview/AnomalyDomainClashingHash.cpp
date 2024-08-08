#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int findNextPrime(int n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}
void printList(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if(arr[i] == -1)
        {
            cout << "-";
        }
        else
        {
            cout << arr[i];
        }
        cout << " ";
    }
    cout << endl;
}
void resetList(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = -1;
    }
}
int main() {
    int n;
    cin >> n;
    int tableSize = findNextPrime(n);
    int hashTable[tableSize];
    resetList(hashTable, tableSize);
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        int index = num%tableSize;
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }
        hashTable[index] = num;
    }
    printList(hashTable, tableSize);
    return 0;
}
