#include <stdlib.h>
#include <iostream>
bool Rand()
{
	return rand() > 10;
}

void Demo()
{
	// Rand()返回的是bool变量
	if (Rand() > 3)
		std::cout<<"touch here"<<std::endl;
}