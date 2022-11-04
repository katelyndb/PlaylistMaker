// PlaylistMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Playlist.h"
#include "Song.h"
#include <algorithm>
#include <string>
#include <list>
using namespace std;

int main()
{
   int user_choice = -1;
   list<Playlist>musicList;
	string userText;
	int userInt;
   while (user_choice != 0) {
      cout << "\nMENU \n"
         << "0. QUIT\n"
         << "1. Add new Playlist\n"
         << "2. Delete a Playlist\n"
         << "3. Add new Song to Playlist\n"
         << "4. View a specific Playlist\n"
			<< "5. View all playlists\n"
         << "6. View the entire music library\n"
         << "Please select a menu item:\n";
         cin >> user_choice;

			if (user_choice == 0)
			{
				return 0;
			}
			if (user_choice == 1)
			{
				cout << "----------" << endl;
				Playlist new_playlist;
				cout << "Enter Name of Playlist: ";
				cin >> userText;
				new_playlist.setPlaylistName(userText);
				cout << "Enter Name of Author: ";
				cin >> userText;
				new_playlist.setPlaylistAuthor(userText);
				cout << "Enter Mood of Playlist (One word): ";
				cin >> userText;
				new_playlist.setPlaylistDescription(userText);
				musicList.push_back(new_playlist);
				cout << "The Playlist -" << new_playlist.getPlaylistName() << "- has been created" << endl;
				cout << "----------" << endl;
			}
			if (user_choice == 2)
			{
				cout << "---PLAYLISTS---" << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
				cout << "---------------" << endl;
				cout << "Enter name of playlist to Delete : " << endl;
				cin >> userText;
				string playlistName;
				for (Playlist item : musicList)
				{
					playlistName = item.getPlaylistName();
					//transform(userText.begin(),
					//	userText.end(),
					//	userText.begin(),
					//	::tolower);
					musicList.erase(remove_if(musicList.begin(), musicList.end(), [userText](Playlist p) {return p.getPlaylistName() == userText; }), musicList.end());
					//cout << "Yep it's not deleted yet. But it should be" << endl;
					/*if (userText == playlistName) {
						musicList.remove(item<Playlist>);
						cout << "Yep it's not deleted yet. But it should be" << endl;
					//}*/
					//else {
					//	cout << "Playlist '" << userText << "' was not found." << endl;
					//	break;
					//	
					//}
				}
			}
			if (user_choice == 3)
			{
				cout << "Enter name of playlist to add a song to : ";
				cin >> userText;
				string playlistName;
				for (Playlist item : musicList)
				{
					playlistName = item.getPlaylistName();
					transform(userText.begin(),
						userText.end(),
						userText.begin(),
						::tolower);
					transform(playlistName.begin(),
						playlistName.end(),
						playlistName.begin(),
						::tolower);
					if (userText == playlistName) {
						item.addSong();
					}
				}
			}
			if (user_choice == 4)
			{
				// Display Playlists with numbers with Function
				cout << "---PLAYLISTS---" << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
				cout << "---------------" << endl;
				cout << "Enter name of playlist to view : ";
				cin >> userText;
				string playlistName;
				for (Playlist item : musicList)
				{
					playlistName = item.getPlaylistName();
					transform(userText.begin(),
						userText.end(),
						userText.begin(),
						::tolower);
					transform(playlistName.begin(),
						playlistName.end(),
						playlistName.begin(),
						::tolower);
					if (userText == playlistName) {
						cout << "##################" << endl;
						cout << " Name: " << item.getPlaylistName() << endl;
						cout << " Author: " << item.getPlaylistAuthor() << endl;
						cout << " Mood: " << item.getPlaylistDescription() << endl;
						if (true){
							cout << "---Songs---" << endl;
							item.displaySongList();
							cout << "__________________" << endl;
						}
						cout << "##################" << endl;
					}
					
				}
				
			}
			if (user_choice == 5)
			{
				cout << " -All Playlists-"  << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
			}
			if (user_choice == 6)
			{
				for (Playlist item : musicList)
				{
					cout << "******************" << endl;
					cout << " Name: " << item.getPlaylistName() << endl;
					cout << " Author: " << item.getPlaylistAuthor() << endl;
					cout << " Mood: " << item.getPlaylistDescription() << endl;
					cout << "******************" << endl;
				}
			}

   }
}
