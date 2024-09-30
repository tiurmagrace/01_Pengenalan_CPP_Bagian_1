#include <iostream>
#include <string>

using namespace std;

string getWrittenForm(int number) {
    string writtenForm;

    switch (number) {
        case 0:
            writtenForm = "nol";
            break;
        case 1:
            writtenForm = "satu";
            break;
        case 2:
            writtenForm = "dua";
            break;
        case 3:
            writtenForm = "tiga";
            break;
        case 4:
            writtenForm = "empat";
            break;
        case 5:
            writtenForm = "lima";
            break;
        case 6:
            writtenForm = "enam";
            break;
        case 7:
            writtenForm = "tujuh";
            break;
        case 8:
            writtenForm = "delapan";
            break;
        case 9:
            writtenForm = "sembilan";
            break;
        case 10:
            writtenForm = "sepuluh";
            break;
        case 11:
            writtenForm = "sebelas";
            break;
        case 12:
            writtenForm = "dua belas";
            break;
        case 13:
            writtenForm = "tiga belas";
            break;
        case 14:
            writtenForm = "empat belas";
            break;
        case 15:
            writtenForm = "lima belas";
            break;
        case 16:
            writtenForm = "enam belas";
            break;
        case 17:
            writtenForm = "tujuh belas";
            break;
        case 18:
            writtenForm = "delapan belas";
            break;
        case 19:
            writtenForm = "sembilan belas";
            break;
        case 20:
            writtenForm = "dua puluh";
            break;
        case 30:
            writtenForm = "tiga puluh";
            break;
        case 40:
            writtenForm = "empat puluh";
            break;
        case 50:
            writtenForm = "lima puluh";
            break;
        case 60:
            writtenForm = "enam puluh";
            break;
        case 70:
            writtenForm = "tujuh puluh";
            break;
        case 80:
            writtenForm = "delapan puluh";
            break;
        case 90:
            writtenForm = "sembilan puluh";
            break;
        default:
            if (number < 100) {
                int tens = number / 10;
                int ones = number % 10;
                switch (tens) {
                    case 2:
                        writtenForm = "dua puluh ";
                        break;
                    case 3:
                        writtenForm = "tiga puluh ";
                        break;
                    case 4:
                        writtenForm = "empat puluh ";
                        break;
                    case 5:
                        writtenForm = "lima puluh ";
                        break;
                    case 6:
                        writtenForm = "enam puluh ";
                        break;
                    case 7:
                        writtenForm = "tujuh puluh ";
                        break;
                    case 8:
                        writtenForm = "delapan puluh ";
                        break;
                    case 9:
                        writtenForm = "sembilan puluh ";
                        break;
                }
                switch (ones) {
                    case 1:
                        writtenForm += "satu";
                        break;
                    case 2:
                        writtenForm += "dua";
                        break;
                    case 3:
                        writtenForm += "tiga";
                        break;
                    case 4:
                        writtenForm += "empat";
                        break;
                    case 5:
                        writtenForm += "lima";
                        break;
                    case 6:
                        writtenForm += "enam";
                        break;
                    case 7:
                        writtenForm += "tujuh";
                        break;
                    case 8:
                        writtenForm += "delapan";
                        break;
                    case 9:
                        writtenForm += "sembilan";
                        break;
                }
            } else {
                writtenForm = "Invalid input";
            }
            break;
    }

    return writtenForm;
}

int main() {
    int number;

    // Input a positive integer from 0 to 100
    cout << "Masukkan bilangan bulat positif (0-100): ";
    cin >> number;

    if (number < 0 || number > 100) {
        cout << "Error: Input tidak valid" << endl;
    } else {
        cout << "Bentuk tertulis: " << getWrittenForm(number) << endl;
    }

    return 0;
}
