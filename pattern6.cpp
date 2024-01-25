#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;  // Input the number of rows from the user

    int row = 1;  // Initialize the row variable to 1

    while(row <= n) {
        // Print leading spaces in each row
        int space = n - row;
        while(space) {
            cout << " ";  // Print a space
            space = space - 1;
        }

        // Print stars in each row
        int col = 1;
        while( col <= row ) {
            cout << "*";  // Print a star
            col = col + 1;
        }

        cout << endl;  // Move to the next line after printing each row
        row = row + 1;  // Move to the next row
    }

    return 0;  // Indicate successful program execution
}
