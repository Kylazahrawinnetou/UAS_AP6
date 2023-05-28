/* 
SOAL 1 - Program yang menghitung nilai total element array menggunakan fungsi
NAMA    :   KYLA ZAHRA WINNETOU
NIM     :   221401106
KOM     :   C
*/

#include <iostream>

using namespace std;

int hitung(int arr[], int size) 
{
    int total = 0;
    for (int i = 0; i < size; i++) 
    {
        total += arr[i];
    }
    return total;
}

int main() 
{
    system("cls");
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = hitung(arr, size);
    cout << "Total elemen dalam sebuah array adalah " << total << endl;

    return 0;
}


