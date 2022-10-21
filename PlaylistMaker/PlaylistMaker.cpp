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
