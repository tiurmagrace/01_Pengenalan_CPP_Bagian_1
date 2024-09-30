#include <iostream>

using namespace std;

int main() {
    float bil1, bil2;

    // Input dua bilangan float
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    // Hitung dan output hasilnya
    cout << "Hasil:" << endl;
    cout << "Penjumlahan: " << bil1 + bil2 << endl;
    cout << "Pengurangan: " << bil1 - bil2 << endl;
    cout << "Perkalian: " << bil1 * bil2 << endl;
    cout << "Pembagian: ";
    if (bil2 != 0) {
        cout << bil1 / bil2 << endl;
    } else {
        cout << "Error: Pembagian oleh nol!" << endl;
    }

    return 0;
}
