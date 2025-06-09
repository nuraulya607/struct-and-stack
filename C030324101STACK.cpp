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

void init(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack s) {
    return s.top == -1;
}

bool isFull(Stack s) {
    return s.top == MAX - 1;
}

void push(Stack &s, mahasiswa mhs) {
    if (isFull(s)) {
        cout << "Stack penuh!\n";
    } else {
        s.top++;
        s.data[s.top] = mhs;
    }
}

void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!\n";
    } else {
        s.top--;
    }
}

void display(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!\n";
    } else {
        for (int i = s.top; i >= 0; i--) {
            cout << "\nData Mahasiswa ke-" << i+1 << ":\n";
            cout << "NIM    : " << s.data[i].nim << "\n";
            cout << "Nama   : " << s.data[i].nama << "\n";
            cout << "Alamat : " << s.data[i].alamat << "\n";
            cout << "IPK    : " << s.data[i].ipk << "\n";
        }
    }
}
