#include <iostream>

using namespace std;

// Membuat fungsi bernama fibonacci yang bertipe integer dan menerima masukkan sebuah integer yang diberi nama variable n.

int fibonacci(int n) {

// Melakukan cek kondisi jika nilai dari variable n adalah 0 atau 1 maka akan mengembalikan nilai n.

  if (n == 0 || n ==1){

    return n;

//  Jika variable n bernilai selain 0 dan 1 maka akan melakukan operasi rekursif dimana hasil operasi fibonacci n-1 ditambah dengan hasil operasi fibonacci n-2

  } else {

    return (fibonacci(n-1) + fibonacci(n-2));

  }

}

int main() {

// mendeklarasikan variable n, i, dan j dimana variable n digunakan untuk batas jumlah bilangan fibonacci yang akan ditampilkan

  int n, i, j = 0;

  cout << "Masukkan batas jumlah bilangan fibonacci: ";

  // menginputkan nilai kedalam variable n.

  cin >> n;

  cout << "Hasil bilangan fibonacci: \n";

  for (i = 1; i <= n; i++){

    cout << "fibonacci ke-"<< i <<": " << fibonacci(j) << endl;

    j++;

// melakukan perulangan sebanyak nilai n dan menginputkan nilai j kedalam fungsi fibonacci serta menampilkan hasil operasi fibonacci

  }

  return 0;

}
