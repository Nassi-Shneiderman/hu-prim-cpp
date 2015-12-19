#include <cstdlib>
#include <iostream>
using namespace std;

int zahl;

void clean();
void menu();
void eingabe();
void prim();
void mirp();

int main() {
    menu();
}

bool IstPrim (int zahl){
    int teiler;

    if (zahl <= 0) {
        return false;
    }

    if (zahl == 2) {
        return true;
    }
    else {
        teiler = 2;
        while (teiler < zahl) {

            if (zahl % teiler == 0) {
                return false;
                break;
            }
            else {
                teiler = teiler + 1;
            }
        }
        if (teiler == zahl) {
            return true;
        }
    }
}


void prim() {
    clean();
    cout << "Primzahlen\n\n";
    eingabe();
    clean();
    if (IstPrim(zahl)==true) {
        cout << zahl << " ist eine Primzahl" << endl;
    }
    else {
        cout << zahl << " ist keine Primzahl" << endl;
    }
    system("PAUSE");
    menu();
};

void mirp() {
    clean();
    cout << "Mirpzahlen\n\n";
    eingabe();
    clean();
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
