#include <iostream>
#include <vector>

using namespace std;

// ฟังก์ชันหาจำนวนเฉพาะที่ใกล้เคียงกับ n
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

// ฟังก์ชันแฮช
int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    int n;
    cin >> n;

    // กำหนดขนาดตารางแฮชเป็นจำนวนเฉพาะที่ใกล้เคียงกับ n*2 เพื่อลดการชน
    int tableSize = findNextPrime(n);
    vector<int> hashTable(tableSize, -1); // เริ่มต้นค่าทุกช่องเป็น -1

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        int index = hashFunction(num, tableSize);

        // จัดการการชนแบบ Linear Probing
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }
        hashTable[index] = num;
    }

    // แสดงผลลัพธ์
    for (int i = 0; i < tableSize; ++i) {
        cout << hashTable[i] << " ";
    }
    cout << endl;

    return 0;
}
