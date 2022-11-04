#pragma once
#include <string>
#include <iostream>
using namespace std;
class Song
{
private:
	string name;
	string artist;
	int lengthSec;
	string genre;
	string album;
public:
	Song();
	void setSongName(string name) { this->name = name; }
	void setSongArtist(string artist) { this->artist = artist; }
	void setSongLengthSec(int length) { lengthSec = length; };
	void setSongGenre(string genre) { this->genre = genre; }
	void setSongAlbum(string album) { this->album = album; }
	string getSongName() { return name; }
	string getSongArtist() { return artist; }
	int getSongLengthSec() { return lengthSec; }
	string getSongGenre() { return genre; }
	string getSongAlbum() { return album; }
	void displaySong();

};

