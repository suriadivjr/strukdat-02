/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise-03
Tahun           : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Pegawai
{
	long nip;
	char nama [30];
	int gol;
	int gaji;
};

Pegawai x[100];

void inputPegawai (Pegawai (&x)[100], int& n)
{
	cout << "Masukkan Jumlah Pegawai: "; cin >> n;
	cout << endl;
	for (int i=0; i<n; i++)
	{
		cout << "Data Pegawai ke " << i+1 << ":" << endl;
		cout << "NIP: "; cin >> x[i].nip;
		cout << "Nama: "; cin >> x[i].nama;
		cout << "Gol: "; cin >> x[i].gol;
		cout << endl;
	}
}

void cetakDaftar(Pegawai x[], int n)
{
	cout << "***DAFTAR PEGAWAI***" << endl;
	for (int i=0; i<n; i++)
	{
		cout << "NIP: " << x[i].nip << endl;
		cout << "Nama: " << x[i].nama << endl;
		cout << "Gol: " << x[i].gol << endl;
		cout << endl;
	}
}

void cariGaji(Pegawai x[], int& n)
{
	for (int i=0; i<n; i++)
	{
		if (x[i].gol==1) x[i].gaji=2000000;
		else if (x[i].gol==2) x[i].gaji=3000000;
		else if (x[i].gol==3) x[i].gaji=5000000;
		else if (x[i].gol==4) x[i].gaji=8000000;
	}
	for(int i=0; i<n; i++)
	{
		cout << "Nama Pegawai " << x[i].nama << endl;
		cout << "Gaji Pegawai: " << x[i].gaji << endl;
	}
}

void rataGaji(Pegawai x[], int& n)
{
	int gajiTotal=0;
	int rataG;
	for (int i=0; i<n; i++)
	{
		gajiTotal+=x[i].gaji;
	}
	rataG=gajiTotal/n;
	cout << "Rata Gaji Pegawai: Rp" << rataG;
}

void gajiTerendah(Pegawai x[], int n)
{
	int i;
	int mini=x[0].gaji;
	for (i=0; i<n; i++)
	{
		if (x[i].gaji<mini)
		mini=x[i].gaji;
	}
	cout << "Gaji terendah Rp" << x[0].gaji << endl;
}

void gajiTertinggi(Pegawai x[], int n)
{
	int i;
	int maks=x[0].gaji;
	for (i=0; i<n; i++)
	{
		if (x[i].gaji>maks)
		maks=x[i].gaji;
	}
	cout << "Gaji tertinggi Rp" << x[n-1].gaji << endl;
}

void sortingNIP(Pegawai x[], int &n)
{
	int index;  
	Pegawai val;
    for(int i=1; i<n; i++){  
        val = x[i];  
        index = i;  
        while(index>0 && x[index-1].nip>val.nip)
		{  
            x[index] = x[index-1];  
            index = index-1;  
        }  
        x[index]=val;  
    }  
    cout<<"\nUrutan Ascending NIP pegawai\n";  
    for (int i=0; i<n;i++)
	{  
        cout<<i+1<<". "<<x[i].nama<<endl;  
    }
}

int main() 
{
	int pilihan, n;
	Pegawai x[100];
	inputPegawai(x,n);
	
	while (1)
	{
		cout << "Pilih Menu: \n1. Cetak Daftar Pegawai \n2. Cari Gaji Pegawai \n3. Rata Gaji \n4. Gaji Terendah \n5. Gaji Tertinggi \n6. Sorting Ascending NIP \nPilihan: ";
		cin >> pilihan;
		cout<< endl;
		switch(pilihan)
		{
			case 1: cetakDaftar(x,n); break;
			case 2: cariGaji(x,n); break;
			case 3: rataGaji(x,n); break;
			case 4: gajiTerendah(x,n); break;
			case 5: gajiTertinggi(x,n); break;
			case 6: sortingNIP(x,n); break;
			default: "Pilihan anda tidak terdaftar."; break;
		};
		 cout << endl;
	}
	
	return 0;
}
