
#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void PrintAll();

    mahasiswa(string pnama) 
    {
        nama = pnama;
        setID();
    }

};

int mahasiswa::nim = 10;

void mahasiswa::setID() {
    id = ++nim;
}

void mahasiswa::PrintAll() {
    cout << "ID = " << id << endl;
    cout << "Nama= " << nama << endl;
    cout << endl;
}

int main()
{
    
}


