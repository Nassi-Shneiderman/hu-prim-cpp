#include <cstdlib>
#include <iostream>
using namespace std;

void clean();
void menu();
void eingabe();
void prim();
void mirp();

int zahl;

int main() {
    menu();
}

void prim() {
    clean();
    cout << "(1) Primzahl\n\n";
    eingabe();
    cout << zahl << endl;
    system("PAUSE");
    menu();
};

void mirp() {
    clean();
    cout << "(2) Mirpzahl\n\n";
    eingabe();
    cout << zahl << endl;
    system("PAUSE");
    menu();
};

void menu() {
    char auswahl;
    clean();
    cout << "---|Menu|---" << endl;
    cout << "(1) Primzahl" << endl;
    cout << "(2) Mirpzahl" << endl;
    cout << "(3) Ende" << endl;
    cout << "------------" << endl;
    cout << "Auswahl: "; cin >> auswahl;

    switch(auswahl){
        case '1':
        case 'p':
            prim();
        break;

        case '2':
        case 'm':
            mirp();
        break;

        case '3':
        case 'e':
            exit(EXIT_SUCCESS);
        break;
    }
}

void eingabe() {
    cout << "Bitte eine Zahl eingeben: ";
    cin >> zahl;
}

void clean() {
    system("cls");
}
