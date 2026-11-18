#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;

struct Stack{
    infotype arr[5];
    int top;
};

struct CharStack{
    char arr[100];
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
void pop(Stack &S);
int peek(Stack S);
void display(Stack S);
void createCharStack(CharStack &S);
bool isCharStackEmpty(CharStack S);
bool isCharStackFull(CharStack S);
void pushChar(CharStack &S, char c);
char popChar(CharStack &S);
#endif // STACK_H_INCLUDED
