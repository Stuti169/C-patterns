#include<iostream>
using namespace std;

int main() {
    // Input the number of rows from the user
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int row = 1; // Initialize the row variable to 1

    // Outer loop for each row
    while(row <= n) {
        int col = 1; // Initialize the column variable to 1

        // Inner loop for each column in the current row
        while(col <= row) {
            // Calculate the character based on the current row and column
            char ch = ('A' + row + col - 2);
            cout << ch; // Print the character
            col = col + 1; // Move to the next column
        }

        cout << endl; // Move to the next line after printing each row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicate successful program execution
}
/*n Output for n = 4:
A
BC
DEF
GHIJ
*/
