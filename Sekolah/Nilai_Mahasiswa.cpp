#include <iostream>

using namespace std;

int main()
{
 cout << "==============================\n";
 cout << "PROGRAM NILAI AKHIR MAHASISWA\n";
 cout << "==============================\n";

 float kehadiran, tugas, ujian_akhir, nilai_akhir_mahasiswa;
 char space = ' ';
 cout << "Masukan nilai kehadiran: ";
 cin >> kehadiran;
 cout << "Masukan nilai tugas: ";
 cin >> tugas;
 cout << "Masukan nilai ujian akhir: ";
 cin >> ujian_akhir;
 // Bobot nilai kehadiran(30%), bobot nilai tugas (30%), bobot ujian akhir(40%)
 nilai_akhir_mahasiswa = kehadiran * 0.3 + tugas * 0.3 + ujian_akhir * 0.4;

 if (nilai_akhir_mahasiswa >= 90 && nilai_akhir_mahasiswa <= 100)
 {
		cout << "Nilai kamu adalah" << space << nilai_akhir_mahasiswa << space << "(A)";
 }
 else if (nilai_akhir_mahasiswa >= 80 && nilai_akhir_mahasiswa <= 89.9)
 {
		cout << "Nilai kamu adalah" << space << nilai_akhir_mahasiswa << space << "(B)";
 }
 else if (nilai_akhir_mahasiswa >= 70 && nilai_akhir_mahasiswa <= 79.9)
 {
		cout << "Nilai kamu adalah" << space << nilai_akhir_mahasiswa << space << "(C)";
 }
 else if (nilai_akhir_mahasiswa >= 60 && nilai_akhir_mahasiswa <= 69.9)
 {
		cout << "Nilai kamu adalah" << space << nilai_akhir_mahasiswa << space << "(D)";
 }
 else
 {
		cout << "Nilai kamu adalah" << space << nilai_akhir_mahasiswa << space << "(E)";
 }

 return 0;
}
