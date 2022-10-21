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
	~Playlist();
	void setPlaylist();
	void getPlaylist();
};
