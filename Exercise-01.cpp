/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise-01
Tahun           : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang
{
	int umur;
	char nama[30];
	char goldar[2];
	char JK[1];
};

int main() 
{
	Orang orang;
	
	orang.umur=10;
	strcpy(orang.nama, "Fahmi");
	strcpy(orang.goldar,"O");
	strcpy(orang.JK,"L");
	 
	/*
	cout << "Umur: "; cin >> orang.umur;
	cout << "Nama: "; cin >> orang.nama;
	cout << "Goldar: "; cin >> orang.goldar;
	cout << "JK: "; cin >> orang.JK;
	
	
	cout << endl;
	*/
	cout << orang.umur << endl;
	cout << orang.nama << endl;
	cout << orang.goldar << endl;
	cout << orang.JK << endl;
	return 0;
}
