#include <iostream>

using namespace std;

float matrix2x2(float matrix[2][2]){
	float det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	return det;
}


int main(){
	float matrix[2][2];
	char s =' '; //space
	cout<< "Masukan nilai matriks 2x2\n";
	for (int i = 0; i < 2; i++) // tambah elemen pada tulisan
	// cout otomatis
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Masukan angka untuk elemen"<<s<< i+0 <<"," << j + 0 <<s << "=" <<s;
			cin >> matrix [i][j];
		}
		
	}
	
	float det  = matrix2x2(matrix);
	cout<<"Derteminan matriks: " << det << endl;
	
	return 0;
}

