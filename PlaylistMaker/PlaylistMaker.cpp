// PlaylistMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Playlist.h"
#include "Song.h"
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
				cout << "The Playlist -" << new_playlist.getPlaylistName() << "- has been created";
			}
			if (user_choice == 2)
			{
			}
			if (user_choice == 3)
			{
			}
			if (user_choice == 4)
			{
			}
			if (user_choice == 5)
			{
				// Display PLaylists with numbers with Function
				cout << "Enter name of playlist to view : ";
				cin >> userInt;
				if ((userInt) == 0) {
					
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
			if (user_choice == 6)
			{

				/*for (Account a : accountList)
					a.displayBalance();*/
			}

   }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
