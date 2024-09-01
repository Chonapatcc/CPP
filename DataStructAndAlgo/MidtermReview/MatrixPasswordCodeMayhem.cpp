#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to transpose a matrix
vector<vector<char>> transposeMatrix(const vector<vector<char>>& matrix, int m, int n) {
    vector<vector<char>> transposed(n, vector<char>(m));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// Function to fold the matrix
vector<vector<char>> foldMatrix(vector<vector<char>>& matrix, int& m, int& n, int foldCount) {
    if (foldCount % 2 == 0) { // Vertical fold
        vector<vector<char>> folded(m, vector<char>(n / 2));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n / 2; ++j) {
                folded[i][j] = matrix[i][j] + matrix[i][n - 1 - j];
            }
        }
        n /= 2;
        return folded;
    } else { // Horizontal fold
        vector<vector<char>> folded(m / 2, vector<char>(n));
        for (int i = 0; i < m / 2; ++i) {
            for (int j = 0; j < n; ++j) {
                folded[i][j] = matrix[i][j] + matrix[m - 1 - i][j];
            }
        }
        m /= 2;
        return folded;
    }
}

// Function to generate the password
string generatePassword(vector<vector<char>>& matrix, int m, int n) {
    string password = "";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            password += matrix[i][j];
        }
    }
    return password;
}

int main() {
    int m, n;
    string inputText;
    int minChannels;

    // Reading input
    cin >> m >> n;
    cin.ignore();
    getline(cin, inputText);
    cin >> minChannels;

    // Initialize matrix with 'a'
    vector<vector<char>> matrix(m, vector<char>(n, 'a'));

    // Fill the matrix with the input text
    int idx = 0;
    for (int i = 0; i < m && idx < inputText.length(); ++i) {
        for (int j = 0; j < n && idx < inputText.length(); ++j) {
            matrix[i][j] = inputText[idx++];
        }
    }

    // Sort the matrix by ASCII values
    vector<char> sortedElements;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sortedElements.push_back(matrix[i][j]);
        }
    }
    sort(sortedElements.begin(), sortedElements.end());

    // Refill the matrix with sorted elements
    idx = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = sortedElements[idx++];
        }
    }

    // Transpose the matrix
    matrix = transposeMatrix(matrix, m, n);
    swap(m, n); // Update dimensions

    // Fold the matrix until it no longer meets the minimum channel size
    int foldCount = 0;
    while (m * n >= minChannels) {
        matrix = foldMatrix(matrix, m, n, foldCount++);
    }

    // Generate and output the final password
    string password = generatePassword(matrix, m, n);
    cout << password << endl;

    return 0;
}
