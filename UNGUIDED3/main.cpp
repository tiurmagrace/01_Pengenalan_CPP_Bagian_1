#include <iostream>
using namespace std;

int main() {
    int angka;


    cout << "Masukkan sebuah angka (0-100): ";
    cin >> angka;


    if (angka < 0 || angka > 100) {
        cout << "Error: Angka harus antara 0 hingga 100!" << endl;
    } else {
        cout << angka << " : ";


        if (angka == 100) {
            cout << "seratus";
        } else if (angka >= 20) {

            switch (angka / 10) {
                case 2: cout << "dua puluh"; break;
                case 3: cout << "tiga puluh"; break;
                case 4: cout << "empat puluh"; break;
                case 5: cout << "lima puluh"; break;
                case 6: cout << "enam puluh"; break;
                case 7: cout << "tujuh puluh"; break;
                case 8: cout << "delapan puluh"; break;
                case 9: cout << "sembilan puluh"; break;
            }


            if (angka % 10 != 0) {
                cout << " ";
                switch (angka % 10) {
                    case 1: cout << "satu"; break;
                    case 2: cout << "dua"; break;
                    case 3: cout << "tiga"; break;
                    case 4: cout << "empat"; break;
                    case 5: cout << "lima"; break;
                    case 6: cout << "enam"; break;
                    case 7: cout << "tujuh"; break;
                    case 8: cout << "delapan"; break;
                    case 9: cout << "sembilan"; break;
                }
            }
        } else {

            switch (angka) {
                case 0: cout << "nol"; break;
                case 1: cout << "satu"; break;
                case 2: cout << "dua"; break;
                case 3: cout << "tiga"; break;
                case 4: cout << "empat"; break;
                case 5: cout << "lima"; break;
                case 6: cout << "enam"; break;
                case 7: cout << "tujuh"; break;
                case 8: cout << "delapan"; break;
                case 9: cout << "sembilan"; break;
                case 10: cout << "sepuluh"; break;
                case 11: cout << "sebelas"; break;
                case 12: cout << "dua belas"; break;
                case 13: cout << "tiga belas"; break;
                case 14: cout << "empat belas"; break;
                case 15: cout << "lima belas"; break;
                case 16: cout << "enam belas"; break;
                case 17: cout << "tujuh belas"; break;
                case 18: cout << "delapan belas"; break;
                case 19: cout << "sembilan belas"; break;
            }
        }
    }

    cout << endl;
    return 0;
}

