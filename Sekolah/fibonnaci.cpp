#include <iostream>
using namespace std;

// Jawaban nomer 1;
// algoritma perulangan biasanya digunakan untuk perulangan  yang menggunakan perulangan
// atau literasi untuk mengulangi langkah-langkah tertentu hingga suatu kondisi dari variabel terpenuhi.
// Sedangkan algortima rekursi algortima yang memecahkan masalah menjadi submasalah yang lebih kecil, dan biasanya 
// rekursi dibuat hampir mirip dengan sebuah fungsi  dan memanggil dirinya sendiri untuk menyelesaikan submasalah tersebut

int fibonacci(int n){
    if(n <=1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    int n;
    cout<<"Masukan nilai n: ";
    cin>>n;
    for(int i =0; i <n; i++){
        cout<<fibonacci(i) <<" ";
    }
    return 0;
}