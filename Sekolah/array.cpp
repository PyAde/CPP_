#include <iostream>

using namespace std;
// char hanya bisa menampung satu nilai sedangkan
// string mampu menyimpan banyak nilai yang berbentuk
// karakter
int main(){
	
	string nama_siswa[3] =  {
		"erik",
		"mark",
		"spencer"
	};
	nama_siswa[1] = "Budi";
	cout << nama_siswa[1];
}