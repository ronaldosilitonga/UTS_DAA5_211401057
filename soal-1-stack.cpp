#include <iostream>
using namespace std;

#define max 5
string buku[max];
int top = 0;

bool isFull (){
    if (top>=max){
        return true;
    } else {

        return false;
    }    
}

bool isEmpty (){
    if (top == 0) {
        return true;
    } else {
        return false;
    }
}

void push() {
    if (!isFull()) {
        cout<<"\nInput Judul Buku : "; cin>>buku[top];
        top++;
    } else {
        cout<<"Data Sudah Penuh\n";
    }
}

void pop() {
    if (!isEmpty()) {
        top--;
    } 
}

void display (){
    if (!isEmpty()) {
        cout<<"+===========================================+\n\n";
        cout<<"Buku Yang Tersimpan : "<<endl;
        for (int i = 0; i < top; i++)
        {
            cout<<i+1<<". "<< buku[i] << endl;
        }    
    } else {
        cout<<"+===========================================+\n\n";
        cout<<"Tidak Ada Buku Yang Tersimpan\n";
    }

    if (isFull()) {
        cout<<"\nPenyimpanan Sudah Penuh !! [Max 5]\n";
    }
}

int main (){
    
    string opsi;

    home :
        system("cls");
        display();
        cout << "\n+===========================================+\n";
        cout << "\nProgram Penyimpanan Buku\n1. Simpan buku\n2. Keluarkan buku\n3. Exit\n" << endl;
        cout << "Pilih fitur [1/2/3] : "; cin >> opsi;

    if (opsi == "1") {
        push();
        goto home;
    } else if (opsi == "2") {
        pop();
        goto home;
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