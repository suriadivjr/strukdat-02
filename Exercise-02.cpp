/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise-02
Tahun           : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater
{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main()
{
	Theater x;
	
	x.room=7;
	strcpy(x.seat,"J9");
	strcpy(x.movieTitle,"Adit & Jarwo");
	
	cout << "Room: " << x.room << endl;
	cout << "Seat: " << x.seat << endl;
	cout << "Movie Title: " << x.movieTitle << endl;
	return 0;
}
