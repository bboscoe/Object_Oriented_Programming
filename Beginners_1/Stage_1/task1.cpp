/*
  - Declare two integer variables 'a' and 'b'.
  - Create two integer pointers 'ptrA' and 'ptrB' and assign them the addresses of 'a' and 'b' respectively.
  - Prompt the user to input two integer values, which are stored in 'a' and 'b'.
  - Display the values of 'a' and 'b' using the pointers 'ptrA' and 'ptrB' respectively.
  - Update the values of 'a' and 'b' by setting the values at the memory addresses pointed to by 'ptrA' and 'ptrB' to 30 and 40 respectively.
  - Display the updated values of 'a' and 'b' using the pointers 'ptrA' and 'ptrB' respectively.
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to input a matrix
void inputMatrix(vector<vector<double>>& matrix, int rows, int cols) {
    cout << "Enter the matrix row by row (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        vector<double> row;
        for (int j = 0; j < cols; j++) {
            double value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
}

// Function to calculate the sum of a specific column
double sumColumn(const vector<vector<double>>& matrix, int rows, int columnIndex) {
    double total = 0;
    for (int i = 0; i < rows; i++) {
        total += matrix[i][columnIndex];
    }
    return total;
}

// Function to display the sum of each column
void displayColumnSums(const vector<vector<double>>& matrix, int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        cout << "Sum of the elements at column " << j << " is " << sumColumn(matrix, rows, j) << endl;
    }
}

int main() {
    int rows, cols;

    // Ask the user for the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare the matrix as a 2D vector
    vector<vector<double>> matrix;

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Display the column sums
    displayColumnSums(matrix, rows, cols);

    return 0;
}