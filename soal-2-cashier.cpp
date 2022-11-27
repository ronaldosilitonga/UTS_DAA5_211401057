#include <iostream>
#include <conio.h>
using namespace std;

struct angkringan{
    string name;
    int price, quantity, identify;
};

angkringan menu[11];

void list_menu(){
    cout << "|========================================|\n";
    cout << "|===               MENU              ====|\n";
    cout << "|===        ANGKRINGAN SIMPANG 4     ====|\n";
    cout << "|===              MEDAN              ====|\n";
    cout << "+========================================+\n";
    cout << "|      Nama          |       Harga       |\n";
    cout << "+========================================+\n";
    cout << "| [1]     Nasi       |     Rp.3000       |\n";
    cout << "| [2]  Ayam Goreng   |     Rp.5000       |\n";
    cout << "| [3]  Tahu Goreng   |     Rp.1500       |\n";
    cout << "| [4] Tempe Goreng   |     Rp.1500       |\n";
    cout << "| [5] Sate - Satean  |     Rp.2000       |\n";
    cout << "| [6]  Telur Dadar   |     Rp.3000       |\n";
    cout << "| [7]  Teh Manis     |     Rp.4000       |\n";
    cout << "| [8]  Teh Tarik     |     Rp.5000       |\n";
    cout << "| [9]  Jus Jeruk     |     Rp.6000       |\n";
    cout << "| [10] Bandrek Susu  |     Rp.5000       |\n";
    cout << "| [11] Kopi Susu     |     Rp.5000       |\n";
    cout << "|========================================|\n";
    
}
int main () {

    int opsi_makanan,jmlh_menu,validator;
    int total_harga = 0;
    string opsi;
    char yn;
    
    //To Set The Price List 
    menu[1].price = 3000;
    menu[2].price = 5000;
    menu[3].price = 1500;
    menu[4].price = 1500;
    menu[5].price = 2000;
    menu[6].price = 3000;
    menu[7].price = 4000;
    menu[8].price = 5000;
    menu[9].price = 6000;
    menu[10].price = 5000;
    menu[11].price = 5000;

    home:
        system("cls");
        list_menu();
        cout << "|========================================|\n";
        cout << "| 1. Tambah Menu                         |\n";
        cout << "| 2. Cek Struk                           |\n";
        cout << "| 3. Exit                                |\n";
        cout << "|========================================|\n";
        cout << "Pilih Opsi [1-3] : "; cin >> opsi;

        if (opsi == "1") {
            system("cls");
            validator = 1;
            list_menu();
            
            pilih_menu:
            cout << "Silahkan pilih menu anda [1-11]    : "; cin >> opsi_makanan;
            cout << "Jumlah menu yang dipilih           : "; cin >> jmlh_menu;
            
            /*
            menu[].name = untuk mendefinisikan nama menu
            menu[].quantity = untuk mendefinisikan banyak tiap unit
            menu[].identify = sebagai penanda bahwa menu tersebut sudah dipesan
                            dan dapat dibaca dlm struk pembayaran nanti
            */
            if (opsi_makanan == 1) {
                menu[1].name = "Nasi";
                menu[1].quantity += jmlh_menu;
                total_harga += menu[1].price * jmlh_menu;
                menu[1].identify = 1;
            } else if (opsi_makanan == 2){
                menu[2].name = "Ayam Goreng";
                menu[2].quantity += jmlh_menu;
                total_harga += menu[2].price * jmlh_menu;
                menu[2].identify = 1;
            } else if (opsi_makanan == 3){
                menu[3].name = "Tahu Goreng";
                menu[3].quantity += jmlh_menu;
                total_harga += menu[3].price * jmlh_menu;
                menu[3].identify = 1;
            } else if (opsi_makanan == 4){
                menu[4].name = "Tempe Goreng";
                menu[4].quantity += jmlh_menu;
                total_harga += menu[4].price * jmlh_menu;
                menu[4].identify = 1;
            } else if (opsi_makanan == 5){
                menu[5].name = "Sate - Satean";
                menu[5].quantity += jmlh_menu;
                total_harga += menu[5].price * jmlh_menu;
                menu[5].identify = 1;
            } else if (opsi_makanan == 6){
                menu[6].name = "Telur Dadar";
                menu[6].quantity += jmlh_menu;
                total_harga += menu[6].price * jmlh_menu;
                menu[6].identify = 1;
            } else if (opsi_makanan == 7){
                menu[7].name = "Teh Manis";
                menu[7].quantity += jmlh_menu;
                total_harga += menu[7].price * jmlh_menu;
                menu[7].identify = 1;
            } else if (opsi_makanan == 8){
                menu[8].name = "Teh Tarik";
                menu[8].quantity += jmlh_menu;
                total_harga += menu[8].price * jmlh_menu;
                menu[8].identify = 1;
            } else if (opsi_makanan == 9){
                menu[9].name = "Jus Jeruk";
                menu[9].quantity += jmlh_menu;
                total_harga += menu[9].price * jmlh_menu;
                menu[9].identify = 1;
            } else if (opsi_makanan == 10){
                menu[10].name = "Bandrek Susu";
                menu[10].quantity += jmlh_menu;
                total_harga += menu[10].price * jmlh_menu;
                menu[10].identify = 1;
            } else if (opsi_makanan == 11){
                menu[11].name = "Kopi Susu";
                menu[11].quantity += jmlh_menu;
                total_harga += menu[11].price * jmlh_menu;
                menu[11].identify = 1;
            } else {
                system("cls");
                list_menu();
                cout << "Menu Tidak Tersedia :(\nSilahkan Pilih Kembali\n\n";
                goto pilih_menu;
            }
            
            cout << "Total harga yang akan dibayar      : " << total_harga <<endl;
            cout << "Ingin menambah menu lagi ? [Y/N]   : "; cin >> yn;
            if (yn =='Y' or yn =='y') {
                system("cls");
                list_menu();
                goto pilih_menu;
            } else {
                goto home;
            }

        } else if (opsi == "2") {
            system("cls");
            if (validator == 1) {
                cout << "|========================================|\n";
                cout << "|===         STRUK PEMBAYARAN        ====|\n";
                cout << "|----------------------------------------|\n";
                cout << "               Pesanan Anda\n";
                
                for (int i = 1; i < 11; i++ ) {
                    if (menu[i].identify == 1  ) {
                        cout << "\n  " <<menu[i].name << "\n  Jumlah : " << menu[i].quantity << endl;
                    }
                    
                }

                cout << "\n  Total yang harus dibayar : Rp." << total_harga << endl;
                cout << "\n  Silahkan menuju ke kasir \n  untuk proses pembayaran :)\n";
                cout << "+----------------------------------------+\n";
                cout << "|===       ANGKRINGAN SIMPANG 4      ====|\n";
                cout << "|===              MEDAN              ====|\n";
                cout << "+========================================+\n\n";

                cout << "0.Kembali \n->"; cin >> yn;
                system("cls");
                goto home; 
            } else {
                cout << "|========================================|\n";
                cout << "|=                                      =|\n";
                cout << "|=   MOHON MAAF PESANAN ANDA BELUM ADA  =|\n";
                cout << "|=     TAMBAHKAN PESANAN DULU YAA :)    =|\n";
                cout << "|=                                      =|\n";
                cout << "|========================================|\n";
                cout << "\nPress ENTER to return"; 
                getch();
                goto home;
            }          
            
        } else if (opsi == "3") {
            system("cls");
            cout << "|========================================|\n";
            cout << "|=                                      =|\n";
            cout << "|=      TERIMAKASIH SUDAH DATANG :)     =|\n";
            cout << "|=                                      =|\n";
            cout << "|========================================|\n";
            exit(0);
        } else {
            goto home;
        }

}
