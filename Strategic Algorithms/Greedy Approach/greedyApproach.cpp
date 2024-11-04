#include <iostream>
using namespace std;

// Declare the function before main
void printx(int val, int num);

int main() {
    int a[5] = {1, 2, 5, 10, 20}, val, i, j;

    // Input
    cout << "Enter the value: ";
    cin >> val;

    // Logic
    for (i = 0; i < 5; i++) {
        int count = 0;
        while (val != 0 && a[i] <= val) {  // Corrected condition
            val -= a[i];
            count++;
        }
        if (count > 0) {  // Only print if the coin is used
            printx(a[i], count);
        }
    }

    return 0;
}

// Define the printx function
void printx(int val, int num) {
    cout << val << " coin is used " << num << " times + ";
}
