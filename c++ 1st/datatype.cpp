#include <iostream>
using namespace std;

int main() {
    // Integer types
    int a;
    short s;
    long l;
    long long ll;
    unsigned int ua;
    unsigned short us;
    unsigned long ul;
    unsigned long long ull;

    // Floating-point types
    float f;
    double d;
    long double ld;

    // Character types
    char c;
    wchar_t wc;
    char16_t c16;
    char32_t c32;

    // Boolean type
    bool b;

    // Display sizes
    cout << "Sizes of various data types in C++:\n\n";

    cout << "int: " << sizeof(a) << " bytes\n";
    cout << "short: " << sizeof(s) << " bytes\n";
