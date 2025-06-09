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
