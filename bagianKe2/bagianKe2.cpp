
#include <iostream>
#include <string>
using namespace std;

class mahasiswa {

private:
    static int long nim;
public:
    int  long id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama) : nama(pnama) { setID(); }
};

long int mahasiswa::nim = 20230140104;

void mahasiswa::setID() {
    id = ++nim;
}

void mahasiswa::printAll() {
    cout << "ID= " << nim << endl;
    cout << "Nama= " << nama << endl;
}

int main()
{
    mahasiswa mhs1("Azkal Adzkia yassin");
    mahasiswa mhs2("eko saputra");


    mahasiswa::setNim(9);
    mahasiswa mhs3("andi janu");
    mahasiswa mhs4("joko wahono");


    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();


    cout << "akses dari luar objeck = " << mahasiswa::getNim() << endl;
    return 0;
    

}


