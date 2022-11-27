#include <iostream>
using namespace std;

#define max 5
string user[max];
int temp = 0;

bool isFull (){
    if (temp>=max){
        return true;
    }
    else {

        return false;
    }    
}

bool isEmpty (){
    if (temp == 0) {
        return true;
    }
    else {
        return false;
    }
}

void enqueue() {
    if (!isFull()) {
        cout<<"\nInput Nama User : "; cin>>user[temp];
        temp++;
    }
    else {
        cout<<"Data Sudah Penuh\n";
    }
}

void dequeue() {
    if (!isEmpty()) {
        for (int i = 0; i < temp-1; i++) {
            user[i] = user[i+1];
        }

        temp--;
    } 
}

void view (){
    if (!isEmpty()) {
        cout<<"+===========================================+\n\n";
        cout<<"Data Antrian : "<<endl;
        for (int i = temp-1; i >= 0; i--)
        {
            cout<<i+1<<". "<< user[i] << endl;
        }    
    }
    else {
        cout<<"+===========================================+\n\n";
        cout<<"Tidak Ada User Yang Mengantri\n";
    }

    if (isFull()) {
        cout<<"\nAntrian Sudah Penuh !! [Max 5]\n";
    }
}



int main (){
    
    string opsi;
    goto home;

    home :
        system("cls");
        view();
        cout << "\n+===========================================+\n";
        cout << "\nProgram Antrian\n1. Tambah user\n2. Akhiri User\n3. Exit\n" << endl;
        cout << "Pilih fitur [1/2/3] : "; cin >> opsi;

    if (opsi == "1") {
        enqueue();
        goto home;
    }
    else if (opsi == "2") {
        dequeue();
        goto home;
    }
    else if (opsi == "3") {
        system("cls");
        cout << "\n+===========================================+\n";
        cout << "|               Program Ended               |\n";
        cout << "+===========================================+\n\n";
        exit(0);
    }
    else {
        goto home;
    }
}