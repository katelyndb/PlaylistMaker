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
	void setSongName(string name);
	void setSongArtist(string artist);
	void setSongLengthSec(int length);
	void setSongGenre(string genre);
	void setSongAlbum(string album);
	void getSongName();
	void getSongArtist();
	void getSongLengthSec();
	void getSongGenre();
	void getSongAlbum();

};

