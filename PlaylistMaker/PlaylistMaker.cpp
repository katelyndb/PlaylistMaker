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
         << "4. Remove a Song from a Playlist\n"
         << "5. View a specific Playlist\n"
			<< "6. View all playlists\n"
         << "7. View the entire music library\n"
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
					transform(userText.begin(),
						userText.end(),
						userText.begin(),
						::tolower);
					transform(playlistName.begin(),
						playlistName.end(),
						playlistName.begin(),
						::tolower);
					if (userText == playlistName) {

						cout << "Yep it's not deleted yet. But it should be" << endl;
					}
					else {
						break;
						//cout << "Playlist '" << userText << "' was not found." << endl;
					}
				}
			}
			if (user_choice == 3)
			{
			}
			if (user_choice == 4)
			{
			}
			if (user_choice == 5)
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
						cout << "##################" << endl;
					}
					else {
						break;
						//cout << "Playlist '" << userText << "' was not found." << endl;
					}

					
				}
				
			}
			if (user_choice == 6)
			{
				cout << " -All Playlists-"  << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
			}
			if (user_choice == 7)
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
