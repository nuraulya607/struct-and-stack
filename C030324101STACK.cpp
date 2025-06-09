#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

struct Stack {
    mahasiswa data[MAX];
    int top;
};
