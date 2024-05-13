
#include <iostream>
using namespace std;

class angka
{
public:
	angka(int);
	~angka();
	void cetakData();
	void isiData();
private:
	int* arr;
	int panjang;
};

angka::angka(int i) {
	panjang = 1;
	arr = new int[1];
	isiData();
}

angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat array sudah dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++)
	{
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++)
	{
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}


int main()
{
	angka belajarcpp(3);
	angka* ptrbelajarcpp = new angka(5);
	delete ptrbelajarcpp;
}
