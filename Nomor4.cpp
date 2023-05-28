/* 
SOAL 4 - Memperbaiki Codingan
NAMA    :   KYLA ZAHRA WINNETOU
NIM     :   221401106
KOM     :   C
*/

#include <iostream>

using namespace std;

int tambah (int a, int b, int c) 
{
    return a + b + c;
}

int main() 
{
    
    system("cls");
    cout << "Hello, world!" << endl;

    if (true) 
    {
        cout << endl;
        cout << "Ini blok if" << endl;
        cout << endl;
    } 
    else 
    {
        cout << endl;
        cout << "Ini blok else" << endl;
        cout << endl;
    }

    int x = 5;
    cout << "Nilai x : " << x << endl;

    int hasil = tambah(3, 4, 5);
    cout << "Hasil penjumlahan : " << hasil << endl;
    cout << endl;

    switch (x) 
    {
        case 5: 
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    int* ptr;
    *ptr = 10;

    int y = 5;
    int* nullPtr = nullptr;
    nullPtr = &y;

    delete nullPtr;

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;

    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10;

    return 0;
}

// saya tambahin space aja si bang biar rapian hehehe
