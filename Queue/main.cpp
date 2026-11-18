#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    CircularQueue cq;
    int choice, value;

    createQueue(cq);

    do {
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(cq, value);
                break;
            case 2:
                dequeue(cq);
                break;
            case 3:
                display(cq);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
