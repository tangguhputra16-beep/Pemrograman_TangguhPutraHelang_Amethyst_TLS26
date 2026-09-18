#include <iostream>
using namespace std;

int main() {
    char encrypted[100];

    cout << "Encrypted text: ";
    cin.getline(encrypted, 100);

    int i = 0;
    int sebelumnya;

    while (encrypted[i] != '\0') {

        if (i == 0) {
            cout << encrypted[i];

            sebelumnya = encrypted[i] - 'A' + 1;
        }
        else {
            int sekarang = encrypted[i] - 'A' + 1;

            int hasil = sekarang - sebelumnya;

            if (hasil <= 0) {
                hasil = hasil + 26;
            }

            char huruf = 'A' + hasil - 1;

            cout << huruf;

            sebelumnya = hasil;
        }

        i++;
    }

    cout << endl;

    return 0;
}
