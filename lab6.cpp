#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    unsigned long long N;
    cout << "¬вед≥ть натуральне число N: ";
    cin >> N;

    int sum = 0;
    while (N > 0) {
        int digit = N % 10;   
        if (digit < 7)
            sum += digit;     
        N /= 10;              
    }

    cout << "—ума цифр, менших за 7: " << sum << endl;
    return 0;
}