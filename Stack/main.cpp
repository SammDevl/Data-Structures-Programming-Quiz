#include "stack.h"


void menuStackInteger(Stack &S) {
    int choice, value;
    do {
        cout << "\n--- SUB-MENU STACK INTEGER ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Kembali ke Menu Utama\n";
        cout << "Pilih operasi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nilai integer: ";
                cin >> value;
                push(S, value);
                break;
            case 2:
                pop(S);
                break;
            case 3:
                value = peek(S);
                if (value != -1) {
                    cout << "Elemen teratas (top): " << value << endl;
                }
                break;
            case 4:
                display(S);
                break;
            case 5:
                cout << "Kembali ke menu utama..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (choice != 5);
}

void menuReverseWord() {
    CharStack s;
    char word[100];

    createCharStack(s);

    cout << "\n--- REVERSE WORD (CHAR STACK) ---\n";
    cout << "Masukkan kata: ";
    cin >> word;

    // Push setiap karakter dari kiri ke kanan ke dalam stack
    int length = 0;
    while (word[length] != '\0') {
        pushChar(s, word[length]);
        length++;
    }

    // Pop karakter dari stack untuk membalikkan urutan
    char reversed[100];
    int idx = 0;
    while (!isCharStackEmpty(s)) {
        reversed[idx] = popChar(s);
        idx++;
    }
    reversed[idx] = '\0';

    cout << "Kata asli: " << word << endl;
    cout << "Kata terbalik: " << reversed << endl;
}

int main() {
    Stack myStack;
    createStack(myStack);

    int mainChoice;

    do {
        cout << "\n====================================\n";
        cout << "       MENU UTAMA PROGRAM STACK     \n";
        cout << "====================================\n";
        cout << "1. Kelola Stack Integer (Soal 1)\n";
        cout << "2. Balik Kata / Reverse Word (Soal 2)\n";
        cout << "3. Keluar Program\n";
        cout << "Pilih menu: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                menuStackInteger(myStack);
                break;
            case 2:
                menuReverseWord();
                break;
            case 3:
                cout << "Terima kasih, program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (mainChoice != 3);

    return 0;
}
