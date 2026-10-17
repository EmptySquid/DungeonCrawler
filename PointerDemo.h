#pragma once
#include <iostream>

using namespace std;

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

