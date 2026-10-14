#include "PointerDemo.h"

void PointerDemo::DoDemo()
{
	int N1 = 5;
	int N2 = 10;
	std::cout << "Is this working?\n";
	PassByValueDemo(N1, N2);
	PassByRefDemo();
}

void PointerDemo::PassByValueDemo(int number1, int number2)
{
	int N1;
	int N2;
	std::cout << "Enter a funny number ";
	//std::cin >> N1 << std::endl;
	std::cout << "Now enter a serious number ";
	std::cin >> N2;
	std::cout << number1 + number2;
}

void PointerDemo::PassByRefDemo()
{
}

void PointerDemo::UsePointersDemo()
{
}

void PointerDemo::MemLeakDemo()
{
}
