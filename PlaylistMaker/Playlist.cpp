#include "Playlist.h"
Playlist::Playlist()
{
	name = "";
	author = "";
	description = "";
	numSongs = 0;
	length = 0;

}


Playlist::Playlist(const Playlist& copy)
{
	name = copy.name;
	author = copy.author;
	description = copy.description;
	numSongs = copy.numSongs;
	length = copy.length;
}


void Playlist::createPlaylist()
{
	cout << "Enter Name of Playlist: ";
	cin >> name;
	cout << "Enter Name of Author: ";
	cin >> author;
	cout << "Enter Description of Playlist: ";
	cin >> description;

}

void Playlist::displayPlaylist()
{
	cout << ".--------." << endl;
	cout << name << endl;
	cout << "Author: " << author << endl;
	cout << "Description: " << author << endl;
	cout << "INSERT SONGS RIGHT HERE!!!!" << endl;
	cout << "Length: " << length << endl;
	cout << ".--------." << endl;
	
}

