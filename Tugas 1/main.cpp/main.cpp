#include <iostream>
using namespace std;

int main() {
    // Variabel
    int a = 10;
    
    // Tipe data
    int num = 5;
    double pi = 3.14;
    char grade = 'A';
    
    // Perulangan for
    for (int i = 0; i < 5; i++) {
        cout << "Perulangan For C++ iterasi " << i << std::endl;
    }
    
    // Pernyataan if
    if (a > 0) {
        cout << "Pernyataan If C++: a adalah bilangan positif" << std::endl;
    }
    
    // Perulangan while
    int j = 0;
    while (j < 5) {
        cout << "Perulangan While C++ iterasi " << j << std::endl;
        j++;
    }
    
    // Perulangan do-while
    int k = 0;
    do {
        cout << "Perulangan Do-While C++ iterasi " << k << std::endl;
        k++;
    } while (k < 5);
    
    // Array satu dimensi
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Array multidimensi
    int multiArr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Input
    int userInput;
    cout << "Masukkan sebuah angka: ";
    cin >> userInput;
    
    // Output
    cout << "Output C++: Pengguna memasukkan " << userInput << std::endl;
    
    return 0;
}

