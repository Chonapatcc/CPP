

// C++ program to pass a 3D array to a function 
#include <iostream> 
using namespace std; 
  
// function to print the elements of a 3D array 
void printArray(int arr[][3][3], int row, int col, int dpt) 
{ 
    for (int i = 0; i < row; ++i) { 
        for (int j = 0; j < col; ++j) { 
            for (int k = 0; k < dpt; ++k) { 
                cout << arr[i][j][k] << " "; 
            } 
            cout << endl; 
        } 
        cout << endl; 
    } 
} 
  
int main() 
{ 
    // intialize the 3D array 
    int arr[3][3][3] = { 
        { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }, 
        { { 10, 11, 12 }, { 13, 14, 15 }, { 16, 17, 18 } }, 
        { { 19, 20, 21 }, { 22, 23, 24 }, { 25, 26, 27 } } 
    }; 
    // pass the 3D array to the function 
    printArray(arr, 3, 3, 3); 
  
    return 0; 
}