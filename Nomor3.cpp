/* 
SOAL 3 - Program struct
NAMA    :   KYLA ZAHRA WINNETOU
NIM     :   221401106
KOM     :   C
*/

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string nama;
    string jurusan;
};

int main() {
    
    Person orang;

    system("cls");
    cout << "Masukkan Nama    : ";
    getline(cin, orang.nama);

    cout << "Masukkan Jurusan : ";
    getline(cin, orang.jurusan);

    cout << endl;
    cout << "Pendaftar, " << orang.nama << ", " << "memilih " << orang.jurusan << " sebagai jurusan yang diminati" << endl;
    cout << endl;
    
    return 0;
}
