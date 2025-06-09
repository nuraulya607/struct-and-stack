#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa *auliaPtr = new mahasiswa; 

    auliaPtr->nim = "c030324101";
    auliaPtr->nama = "nur aulia wati";
    auliaPtr->alamat = "Handil Bakti, Komp Persada Permai Baru 1, no 191";
    auliaPtr->ipk = 3.8;

    cout << "NIM    : " << auliaPtr->nim << "\n";
    cout << "Nama   : " << auliaPtr->nama << "\n";
    cout << "Alamat : " << auliaPtr->alamat << "\n";
    cout << "IPK    : " << auliaPtr->ipk << "\n";

    delete auliaPtr;
    auliaPtr = nullptr;

    return 0;
}