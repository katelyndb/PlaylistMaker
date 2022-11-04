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
	// Sets up the menu options, list of music and the variables that hold user input
   int user_choice = -1;
   list<Playlist>musicList;
	string userText;
	int userInt;
	// Loop that holds the menu options
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
			// Quits and ends the software
			if (user_choice == 0)
			{
				return 0;
			}
			// Creates a new instance of Playlist and adds it to the list
			if (user_choice == 1)
			{
				// Gets input from user about playlist
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
				// Adds the Playlist to the musicList
				musicList.push_back(new_playlist);
				cout << "The Playlist -" << new_playlist.getPlaylistName() << "- has been created" << endl;
				cout << "----------" << endl;
			}
			// Deletes a specified Playlist from the list
			if (user_choice == 2)
			{
				// Displays all the playlists
				cout << "---PLAYLISTS---" << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
				// Takes in user input of the playlist to delete
				cout << "---------------" << endl;
				cout << "Enter name of playlist to Delete : " << endl;
				cin >> userText;
				string playlistName;
				// Checks all the playlists and if a name match is found it is deleted
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
			// Adds a new song to a Playlist 
			if (user_choice == 3)
			{
				// Displays all the playlists
				cout << "---PLAYLISTS---" << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
				// Takes in user input of which playlist to add a song to
				cout << "Enter name of playlist to add a song to : ";
				cin >> userText;
				string playlistName;
				// Loops through each playlist
				for (Playlist &item : musicList)
				{
					// Converts userinput and playlist name to lowercase 
					playlistName = item.getPlaylistName();
					transform(userText.begin(),
						userText.end(),
						userText.begin(),
						::tolower);
					transform(playlistName.begin(),
						playlistName.end(),
						playlistName.begin(),
						::tolower);
					// Checks if user input matches playlist name
					if (userText == playlistName) {
						// Creates a song using user input
						item.addSong();
					}
				}
			}
			// Views information about a specified playlist
			if (user_choice == 4)
			{
				// Displays all the playlists
				cout << "---PLAYLISTS---" << endl;
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
				cout << "---------------" << endl;
				// Takes in user input of which playlist to display information
				cout << "Enter name of playlist to view : ";
				cin >> userText;
				string playlistName;
				/*for (Playlist item : musicList)
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
					
				}*/
				// Loops through each playlist and if there is a match it displays the information
				for_each(musicList.begin(), musicList.end(), [userText](Playlist& list) {
					if (userText == list.getPlaylistName()) {
						cout << "##################" << endl;
						cout << " Name: " << list.getPlaylistName() << endl;
						cout << " Author: " << list.getPlaylistAuthor() << endl;
						cout << " Mood: " << list.getPlaylistDescription() << endl;
						// Checks to see if the songlist is not empty and if so displays the songs as well
						if (list.hasSongs()) {
							cout << "---Songs---" << endl;
							// Function to loop and display each song information
							list.displaySongList();
							cout << "__________________" << endl;
						}
						cout << "##################" << endl;
					}
					});
				
			}
			// Displays the titles of each Playlist for reference
			if (user_choice == 5)
			{
				cout << " -All Playlists-"  << endl;
				// Loops through each Playlist and displays the names
				for (Playlist item : musicList)
				{
					cout << item.getPlaylistName() << endl;
				}
			}
			// Displays detailed information about every playlist
			if (user_choice == 6)
			{
				//Loops through each playlist and displays multiple attributes of each
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
