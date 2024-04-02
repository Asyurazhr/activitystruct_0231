#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};


int main()
{
	Mahasiswa mhs;
	cout << "nomor mahasiswa :";
	cin >> mhs.nim;
	cout << "nama mahasiswa :";
	cin >> mhs.nama;

	cout << " alamat mahasiswa :";
	cout << "/t nama desa :";
	cin >> mhs.alamat.desa;
	cout << "/t nama kota :";
	cin >> mhs.alamat.kota;

}