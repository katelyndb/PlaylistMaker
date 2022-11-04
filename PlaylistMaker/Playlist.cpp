#include "Playlist.h"
Playlist::Playlist()
{
	name = "";
	author = "";
	description = "";
	numSongs = 0;

}




Playlist::Playlist(const Playlist& copy)
{
	name = copy.name;
	author = copy.author;
	description = copy.description;
	numSongs = copy.numSongs;
}

void Playlist::addSong()
{// Gets user input for the song and sets each attribute
	string songName;
	string songArtist;
	string songGenre;
	string songAlbum;
	cout << "Name: "  << endl;
	cin >> songName;
	cout << "Artist: " << endl;
	cin >> songArtist;
	cout << "Genre: " << endl;
	cin >> songGenre;
	cout << "Album: " << endl;
	cin >> songAlbum;
	Song newSong;
	newSong.setSongName(songName);
	newSong.setSongArtist(songArtist);
	newSong.setSongGenre(songGenre);
	newSong.setSongAlbum(songAlbum);
	// Adds the song to the songlist of the playlist
	this->songList.push_back(newSong);


	
}

void Playlist::displaySongList()
{
	// Loops through each song and displays it to the user
	for (Song item : songList) {
		item.displaySong();
	}
}




