#include "ContainerDemo.h"

void ContainerDemo::DoDemo()
{
	std::cout << "Welcome to the container demo!\n" << std::endl;
	std::cout << "Press any key to begin Array Demo" << std::endl;
	std::cin.get();
	ArrayDemo();
}

void ContainerDemo::ArrayDemo()
{
	MyGames myGames[3];
	myGames[0].gameName = "Metal Gear Solid";
	myGames[0].gameDeveloper = "Kojimbo";
	myGames[0].timesPlayed = 4;

	myGames[1].gameName = "No More Heroes";
	myGames[1].gameDeveloper = "Suda51";
	myGames[1].timesPlayed = 5;

	myGames[2].gameName = "Yakuza 0";
	myGames[2].gameDeveloper = "Nagoshi";
	myGames[2].timesPlayed = 6;

	std::cout << "I have " << std::size(myGames);
}