#include "ContainerDemo.h"

void ContainerDemo::DoDemo()
{
	cout << "Welcome to my container demo!\n" << endl;
	cout << "First off, arrays.\n" << endl;
	cout << "Hit Enter to see how many games are in my collection. ";
	cin.get();
	cout << endl;
	ArrayDemo();
	cout << "Success!!! Hit Enter to start the list demo. " << endl;
	cin.get();
	cout << endl;
	ListDemo();
}

void ContainerDemo::ArrayDemo()
{
	int n;
	MyGamesStruct myGames[4];
	myGames[0].gameName = "Metal Gear Solid";
	myGames[0].gameDirector = "Kojimbo";
	myGames[0].releaseYear = 1998;

	myGames[1].gameName = "No More Heroes";
	myGames[1].gameDirector = "Suda51";
	myGames[1].releaseYear = 2007;

	myGames[2].gameName = "Yakuza 0";
	myGames[2].gameDirector = "Toshihiro Nagoshi";
	myGames[2].releaseYear = 2015;

	myGames[3].gameName = "Dark Souls 3";
	myGames[3].gameDirector = "Michael Zaki";
	myGames[3].releaseYear = 2016;

	cout << "I have " << size(myGames) << " games in my collection, hit Enter to reveal their titles. ";
	cin.get();
	cout << endl;

	for (int i = 0; i < size(myGames); i++)
	{
		cout << "Game " << i + 1 << "'s name is " << myGames[i].gameName << ", \n";
	}
	cout << endl;
	cout << "Enter a game's number to find out more info: ";
	cin >> n;
	cout << endl;
	cout << "Title: " << myGames[n-1].gameName << "\n" << "Director: " << myGames[n-1].gameDirector << "\n" << "Release Year: " << myGames[n-1].releaseYear << "\n" << endl;
}

void ContainerDemo::ListDemo()
{
	cout << "Hi I'm the list demo! ";
}