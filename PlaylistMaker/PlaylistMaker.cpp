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
   while (user_choice != 0) {
      cout << "MENU \n"
         << "0. QUIT"
         << "1. Add new Playlist"
         << "2. Delete a Playlist"
         << "3. Add new Song to Playlist"
         << "4. Remove a Song from a Playlist"
         << "5. View a playlist"
         << "6. View the entire music library"
         << "Please select a menu item:";
         cin >> user_choice;

			if (user_response == 0)
			{
				exit();
			}
			if (user_response == 1)
			{
				Playlist new_playlist;
				cout << "Enter Name of Playlist: ";
				cin >> name;
				this.setPlaylistName(name);
				cout << "Enter Name of Author: ";
				cin >> author;
				this.setPlaylistAuthor(author);
				cout << "Enter Description of Playlist: ";
				cin >> description;
				this.setPlaylistDescription(description);
				musicList.push_back(new_playlist);
				cout << "The Playlist -" << this->name << "- has been created";
			}
			if (user_response == 2)
			{
			
			}
			if (user_response == 3)
			{
				for (Account a : accountList)
					a.displayBalance();
			}
			if (user_response == 4)
			{
				for (Account a : accountList)
					a.displayBalance();
			}
			if (user_response == 5)
			{
				for (Account a : accountList)
					a.displayBalance();
			}
			if (user_response == 6)
			{
				for (Account a : accountList)
					a.displayBalance();
			}

   }
}







void Playlist::createPlaylist()
{
	

}

void Playlist::displayPlaylist()
{
	cout << ".--------." << endl;
	cout << name << endl;
	cout << "Author: " << author << endl;
	cout << "Description: " << author << endl;
	cout << "INSERT SONGS RIGHT HERE!!!!" << endl;
	cout << "Length: " << length << endl;
	cout << ".--------." << endl;

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
