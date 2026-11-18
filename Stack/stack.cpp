#include "stack.h"

void createStack(Stack &S){
    S.top = -1;
};
bool isEmpty(Stack S){
    return S.top == -1;
};
bool isFull(Stack S){
    return S.top == 4;
};
void push(Stack &S, infotype x){
    if(isFull(S)){
        cout << "Tidak bisa dimasukkan, karena Stack penuh";
    }else {
        S.top++;
        S.arr[S.top] = x;
        cout << x << " Sukses dimasukkan kedalam Stack" << endl;
    }
};
void pop(Stack &S){
    if(isEmpty(S)){
        cout << "Stack kosong, tidak dapat mengeluarkan isi!";
    }else {
        cout << S.arr[S.top] << "Sukses Dikeluarkan" << endl;
        S.top--;
    }
};
int peek(Stack S){
    if(isEmpty(S)){
        cout << "Stack kosong!" << endl;
        return -1;
    }
    return S.arr[S.top];
};
void display(Stack S){
    if(isEmpty(S)){
        cout << "Stack Kosong!" << endl;
    }else {
        cout << "Elemen Stack (Dari atas sampai Bawah): " << endl;
        for(int i = S.top; i >= 0; i--){
            cout << S.arr[i] << " ";
        }
        cout << endl;
    }
};
void createCharStack(CharStack &S){
    S.top = -1;
};
bool isCharStackEmpty(CharStack S){
    return S.top == -1;
};
bool isCharStackFull(CharStack S){
    return S.top == 99;
};
void pushChar(CharStack &S, char c){
    if(isCharStackFull(S)){
        cout << "Stack Penuh!" << endl;
    }else {
        S.top++;
        S.arr[S.top] = c;
    }
};
char popChar(CharStack &S){
    if(isCharStackEmpty(S)){
        cout << "Stack Kosong!" << endl;
    }else{
        char c = S.arr[S.top];
        S.top--;
        return c;
    }
};
