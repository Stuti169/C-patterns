#include<iostream>
using namespace std;

int main() {
    // Declare and input the value of 'n' from the user
    int n;
    cin >> n;

    int row = 1; // Initialize the row variable to 1

    // Outer loop for each row
    while (row <= n) {
        int col = 1; // Initialize the column variable to 1

        // Inner loop for each column in the current row
        while (col <= n) {
            char ch = 'A' + row - 1;
            cout << ch; // Print the character based on the row
            col = col + 1; // Move to the next column
        }

        cout << endl; // Move to the next line after printing each row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicate successful program execution
}

/* Output for n=3:
AAAA
BBBB
CCCC
DDDD
*/
