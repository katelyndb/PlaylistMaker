#pragma once
#include <iostream>
#include <string>

using namespace std;
class Playlist
{
private:
	string name;
	string author;
	string description;
	int numSongs;
	int length;
public:
	Playlist();
	Playlist(const Playlist& copy);
	void setPlaylistName(string name) { this->name = name; }
	void setPlaylistAuthor(string author) { this->author = author; }
	void setPlaylistDescription(string description) { this->description = description; }
	void setPlaylistLengthSec(int length) { this->length = length; };
	string getPlaylistName() { return name; }
	string getPlaylistAuthor() { return author; }
	string getPlaylistDescription() { return description; }
	int getPlaylistLengthSec() { return length; }
};
