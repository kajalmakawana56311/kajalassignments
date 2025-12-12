#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {          // outer loop ? rows
        for (int j = 1; j <= i; j++) {         // inner loop ? stars in each row
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

