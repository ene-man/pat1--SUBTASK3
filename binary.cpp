#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int n, bin[32], i = 0;
        cout << "Enter decimal: ";
        cin >> n;

        while (n > 0) {
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }

        cout << "Binary: ";
        for (int j = i - 1; j >= 0; j--)
            cout << bin[j];
    }
    else if (choice == 2) {
        string bin;
        int decimal = 0, base = 1;

        cout << "Enter binary: ";
        cin >> bin;

        for (int i = bin.length() - 1; i >= 0; i--) {
            if (bin[i] == '1')
                decimal += base;
            base *= 2;
        }

        cout << "Decimal: " << decimal;
    }

    return 0;
}
