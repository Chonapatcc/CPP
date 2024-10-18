#include <iostream>
#include <vector>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify(std::vector<int> &arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(std::vector<int> &arr, int n) {
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    buildMaxHeap(arr, n);
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
