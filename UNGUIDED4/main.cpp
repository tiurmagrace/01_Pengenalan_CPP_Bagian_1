#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari pengguna
    cout << "Input: ";
    cin >> n;

    // Loop untuk mencetak pola
    for (int i = n; i >= 1; i--) {
        // Mencetak spasi di awal baris
        for (int j = 0; j < (n - i); j++) {
            cout << "   "; // 3 spasi untuk setiap pergeseran ke kanan
        }

        // Mencetak angka yang menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Mencetak simbol bintang
        cout << "* ";

        // Mencetak angka yang naik
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}

