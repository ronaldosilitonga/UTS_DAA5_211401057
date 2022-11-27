#include <iostream>
#include <conio.h>
using namespace std;

void decoration () {
    cout << "|==============================|\n";
}

int main () {

    string opsi,nama[255], prodi[255];
    int n,nim[255];
    int data_filled = 0;
    
    system("cls");
    decoration();
    cout << "  Input Total Mahasiswa : "; cin >> n;
    
    home :
        system("cls");
        decoration();
        cout << "|  Total Mahasiswa = " << n << " Orang\n";
        decoration();
        cout << "\n[1]. Input Data\n";
        cout << "[2]. Data Sorting\n";
        cout << "[3]. Exit\n\n";
        decoration();
        cout << "\nSelect [1-3] : "; cin >> opsi;

        

        if (opsi == "1") {

            data_filled = 1;
            for (int i = 0; i < n; i++) {
                cout << "Mahasiswa Ke - " << i+1 << endl;
                cin.ignore();
                cout << "Nama       : "; getline(cin, nama[i]);
                cout << "NIM        : "; cin >> nim[i];
            }

            for (int i = 0; i < n - 1 ; i++){
                for (int j = 0; j < n - 1 ; j++){
                    if (nim[j] > nim[j + 1]){
                        swap (nama[j], nama[j + 1]);
                        swap (nim[j], nim[j + 1]);
                    }
                }
            }

            goto home;

        } else if (opsi == "2") {
            if (data_filled == 1) {
                system("cls");
                cout << "Sorted Data\n";
                decoration();
                for(int i = 0; i<n; i++) {
                    cout << "\n[" << i+1 << "]. Nama    : " << nama[i] << "\n     NIM     : " << nim[i] << endl;
                }
                

            } else {
                system("cls");
                cout << "\nTidak Ada Ada";
                cout << "\nPress ENTER to return"; 
                getch();
                goto home;
            }
        } else if (opsi == "3") {

            cout << "\n+===========================================+\n";
            cout << "|               Program Ended               |\n";
            cout << "+===========================================+\n\n";
            exit(0);

        } else {

            goto home;
        }

    
}