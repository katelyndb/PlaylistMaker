#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Song.h"

using namespace std;
class Playlist
{
private:
	string name;
	string author;
	string description;
	int numSongs;
	list<Song>songList;
public:
	Playlist();
	Playlist(const Playlist& copy);
	void setPlaylistName(string name) { this->name = name; }
	void setPlaylistAuthor(string author) { this->author = author; }
	void setPlaylistDescription(string description) { this->description = description; }
	string getPlaylistName() { return name; }
	string getPlaylistAuthor() { return author; }
	string getPlaylistDescription() { return description; }
	void addSong();
	bool hasSongs() { return songList.size() > 0; }
	void displaySongList();
	/*list<Song>songList;*/
};
