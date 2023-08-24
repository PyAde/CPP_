#include <iostream>

using namespace std;

float derteminan_2x2(float matrix[2][2]){
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
			cout << "Elemen"<<s<< i+0 <<"," << j + 0 <<s << "=" <<s;
			cin >> matrix [i][j];
		}
		
	}
	
	float det  = derteminan_2x2(matrix);
	cout<<"Derteminan matriks: " << det << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

float derteminan_3x3(float matrix[3][3]){
	    float det =   matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
	 return det;
}

// int main (){
// 	float matrix[3][3];
// 	char s = ' ';
// 	cout<<"Silahkan masukan angka matrix 3x3\n";
// 	for (int i = 0; i < 3; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{
// 			cout << "Elemen"<<s<< i+0 <<"," << j + 0 <<s << "=" <<s;
// 			cin >> matrix [i][j];
// 		}
		
// 	}
// 	float det = derteminan_3x3(matrix);
// 	cout<<"Derteminan matriks: " << det << endl;
// 	return 0;
// }