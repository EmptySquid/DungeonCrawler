#pragma once
#include <iostream>

using namespace std;

class ContainerDemo
{
    public:

		void DoDemo();

    private:

		struct MyGamesStruct
		{
			string gameName;
			string gameDirector;
			int releaseYear;
		};
		
		void ArrayDemo();

		void ListDemo();
};

