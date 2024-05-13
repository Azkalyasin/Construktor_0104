
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
    mahasiswa mhs1("lisa kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Amdi kurniawan");
    mahasiswa mhs4("joko purbo");

    mhs1.PrintAll();
    mhs2.PrintAll();
    mhs3.PrintAll();
    mhs4.PrintAll();

    return 0;
}

