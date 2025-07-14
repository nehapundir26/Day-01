#include <iostream>
using namespace std;

// Global scope variable
int globalVar = 100;

void showFunctionScope() {
    // Function scope variable
    int functionVar = 200;

    cout << "Inside function - globalVar: " << globalVar << endl;
    cout << "Inside function - functionVar: " << functionVar << endl;

    // Block scope inside function
    if (true) {
        int blockVar = 300;
        cout << "Inside block - blockVar: " << blockVar << endl;
    }

    // Uncommenting the line below will cause an error because blockVar is not visible here
    // cout << blockVar << endl;
}

int main() {
    cout << "In main - globalVar: " << globalVar << endl;

    // Uncommenting the line below will cause an error because functionVar is not visible in main
    // cout << functionVar << endl;

    showFunctionScope();

    // Block scope in main
    if (true) {
        int blockMainVar = 400;
        cout << "Inside main block - blockMainVar: " << blockMainVar << endl;
    }

    // Uncommenting the line below will cause an error because blockMainVar is out of scope
    // cout << blockMainVar << endl;

    return 0;
}
