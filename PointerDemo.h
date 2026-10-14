#pragma once
#include <iostream>
class PointerDemo
{
public:
	void DoDemo();
	private:
		void PassByValueDemo(int, int);
		void PassByRefDemo();
		void UsePointersDemo();
		void MemLeakDemo();
};

