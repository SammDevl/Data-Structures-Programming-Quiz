#ifndef CIRCULARQUEUE_H_INCLUDED
#define CIRCULARQUEUE_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;

struct CircularQueue{
    infotype arr[5];
    int frontIdx;
    int rearIdx;
    int count;
};

void createQueue(CircularQueue &Q);
bool isEmpty(CircularQueue Q);
bool isFull(CircularQueue &Q, infotype x);
void enqueue(CircularQueue &Q, infotype x);
void dequeue(CircularQueue &Q);
void display(CircularQueue Q);

#endif // CIRCULARQUEUE_H_INCLUDED
