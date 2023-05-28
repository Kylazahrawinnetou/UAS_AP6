/*
SOAL 2 - PROGRAM MENAMPUNG DATA YANG BISA CRUD DENGAN MENGGUNAKAN FUNGSI
NAMA    :   KYLA ZAHRA WINNETOU
NIM     :   221401106
KOM     :   C   
*/

#include <iostream>
#include <vector>

using namespace std;

struct AkunGoogle {
    string usn;
    string pswd;
    string email;
};

vector<AkunGoogle> datakun;

// CREATE
void tambahacc() 
{
    AkunGoogle baru;
    cout << endl;
    cout << "Tambahkan akun Google baru" << endl;
    cout << endl;
    cout << "Username : ";
    cin >> baru.usn;
    cout << "Password : ";
    cin >> baru.pswd;
    cout << "Email    : ";
    cin >> baru.email;

    datakun.push_back(baru);
    cout << endl;
    cout << "Akun Google berhasil ditambahkan!" << endl;
}

// READ
void tampilacc() 
{
    if (datakun.empty()) 
    {
        cout << "Maaf, tidak ada akun Google yang bisa ditampilkan." << endl;
        return;
    }

    cout << "Berikut adalah data dari akun Google yang ada" << endl;
    cout << endl;
    for (const AkunGoogle& akun : datakun) 
    {
        cout << "Username : " << akun.usn << endl;
        cout << "Password : " << akun.pswd << endl;
        cout << "Email    : " << akun.email << endl;
        cout << endl;
    }
}

// UPDATE
void ubahacc() 
{
    if (datakun.empty()) 
    {
        cout << "Maaf, tidak ada akun Google yang bisa diubah." << endl;
        return;
    }

    string usn;
    cout << "Masukkan username akun Google yang ingin diubah : ";
    cin >> usn;

    bool accketemu = false;
    for (AkunGoogle& akun : datakun) 
    {
        if (akun.usn == usn) 
        {
            cout << endl;
            cout << "Masukkan data baru untuk akun Google tersebut" << endl;
            cout << "Password : ";
            cin >> akun.pswd;
            cout << "Email    : ";
            cin >> akun.email;
            accketemu = true;
            cout << endl;
            break;
        }
    }

    if (accketemu) 
    {
        cout << "Data akun Google berhasil diubah!" << endl;
    } 
    else 
    {
        cout << "Akun dengan username tersebut tidak ditemukan." << endl;
    }
}

// DELETE
void hapusacc() 
{
    if (datakun.empty()) 
    {
        cout << "Maaf, tidak ada akun Google yang bisa dihapus." << endl;
        return;
    }

    string usn;
    cout << "Masukkan username akun Google yang ingin dihapus : ";
    cin >> usn;

    for (auto itr = datakun.begin(); itr != datakun.end(); ++itr) 
    {
        if (itr->usn == usn) 
        {
            datakun.erase(itr);
            cout << endl;
            cout << "Akun Google berhasil dihapus!" << endl;
            return;
        }
    }

    cout << "Akun dengan username tersebut tidak ditemukan." << endl;
}

int main() 
{
    int pilihan;
    cout << endl;

    while (true) 
    {
        cout << endl;
        cout << "Pilih menu" << endl;
        cout << endl;
        cout << "1. Tambah Akun" << endl;
        cout << "2. Tampilkan Akun" << endl;
        cout << "3. Ubah Akun" << endl;
        cout << "4. Hapus Akun" << endl;
        cout << "5. Keluar" << endl;
        cout << endl;
        cout << "Pilihan : ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) 
        {
            case 1:
                tambahacc();
                break;
            case 2:
                tampilacc();
                break;
            case 3:
                ubahacc();
                break;
            case 4:
                hapusacc();
                break;
            case 5:
                cout << "Terima kasih. Senang membantu! ^^" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    }

    return 0;
}
