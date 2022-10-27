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




