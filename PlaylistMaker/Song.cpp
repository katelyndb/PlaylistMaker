#include "Song.h"

Song::Song()
{
	name = "";
	artist = "";
	lengthSec = 0;
	genre = "";
	album = "";
}

void Song::displaySong()
{
	cout << "\nName: " << name << endl;
	cout << "Artist: " << artist << endl;
	cout << "Genre: " << genre << endl;
	cout << "Album: " << album << endl;
}
