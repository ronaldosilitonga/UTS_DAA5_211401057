#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

int main () {

    int validator;
    int max_data = 5;
    string list_antri,opsi;

    queue<string>b;

    home:
        system("cls");
        cout << "\n+===========================================+\n";
        cout << "|             Program Antrian               |\n";
        cout << "+===========================================+\n\n";
        cout << "1. Input List Antrian\n2. Urutan Atrian Yang Akan Diproses\n3. Exit\n" << endl;
        cout << "+===========================================+\n";
        cout << "Pilih fitur [1/2/3] : "; cin >> opsi;

        if (opsi == "1") {
            system("cls");
            cout << "\n+===========================================+\n";
            cout << "|           Maximum Capacity Is 5           |\n";
            cout << "+===========================================+\n";

            for (int i = 0; i < max_data; i++) {
                cout << "\nInput Antrian Ke - " << i+1 << " : "; cin >> list_antri;
                b.push(list_antri);

                b.size() != 0;
            }

            validator = 1;
            goto home;
        } else if (opsi == "2") {
            if (validator == 1) {
                system("cls");
                cout << "\n+===========================================+\n";
                cout << "|          Urutan Buku Yang Akan            |\n";
                cout << "|       Dikeluarkan Terlebih Dahulu         |\n";
                cout << "+===========================================+\n\n";
                
                for (int i = 0; i < max_data; i++) {
                    cout << i+1 << " " << b.front() << endl;
                    b.pop();
                }

                cout << "\nPress ENTER to return"; getch();
                goto home;

            } else {
                system("cls");
                cout << "\n+===========================================+\n";
                cout << "|             No Data Available             |\n";
                cout << "+===========================================+\n\n";
                cout << "Press ENTER to return"; getch();
                goto home;
            }

        } else if (opsi == "3") {
            system("cls");
            cout << "\n+===========================================+\n";
            cout << "|               Program Ended               |\n";
            cout << "+===========================================+\n\n";
            exit(0);
        } else {
            goto home;
        }
}