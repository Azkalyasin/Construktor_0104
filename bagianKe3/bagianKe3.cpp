
#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    int nim;
    string nama;
public:
    mahasiswa()
    {
        nim = 0;
        nama = "";

    };

    mahasiswa(int inim) {
        nim = inim;
    };

    mahasiswa(string inama) {
        nama = inama;
    };
    mahasiswa(int inim, string inama) {
        nama = inama;
        nim = inim;
    };


    void cetak() {
        cout << "Nama: " << nama << endl;
        cout << "Nim: " <<  nim << endl;
    };
};


int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("indra");
    mahasiswa mhs4( 30 ,"bili");


    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();


}
