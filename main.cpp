#include <cstdlib>
#include <iostream>
using namespace std;

void clean() {
    system("cls");
}

void prim(){
    clean();
    int inputNum;
    cout << "Zahl: ";
    cin >> inputNum;
};

void mirp(){
    clean();
    int inputNum;
    cout << "Zahl: ";
    cin >> inputNum;
};

void menu() {
    char auswahl;
    cout << "---|Menu|---" << endl;
    cout << "(1) Primzahl" << endl;
    cout << "(2) Mirpzahl" << endl;
    cout << "(3) Ende" << endl;
    cout << "------------" << endl;
    cout << "Auswahl: "; cin >> auswahl;

    switch(auswahl){
        case '1':
        case 'p':
        case 'P':
            prim();
        break;

        case '2':
        case 'm':
        case 'M':
            mirp();
        break;

        case '3':
        case 'e':
        case 'E':
            exit(EXIT_SUCCESS);
        break;
    }
}

int main() {
    menu();
}
