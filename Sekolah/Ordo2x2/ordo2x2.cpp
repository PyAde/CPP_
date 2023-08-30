#include <iostream>

using namespace std;

// Fungsi untuk mengisi matriks
void isiMatriks(int matriks[][2], const string& nama) {
    cout << "Masukkan elemen-elemen matriks " << nama << ":\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen matriks " << nama << " ke-" << i + 0 << "," << j + 0 << ": ";
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk menjumlahkan matriks
void jumlahMatriks(const int matriks1[][2], const int matriks2[][2], int hasil[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

int main() {
    int matriks1[2][2], matriks2[2][2], hasil[2][2];

    isiMatriks(matriks1, "pertama");
    isiMatriks(matriks2, "kedua");

    jumlahMatriks(matriks1, matriks2, hasil);

    // Menampilkan hasil penjumlahan matriks
    cout << "Hasil penjumlahan matriks:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
