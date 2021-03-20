#include <iostream>
void Demo(int a,int b)
{
	// if里面存在相同的表达式(a==b)
	if ((a == b) && (a == b))
	{
		std::cout<<"touch here"<<std::endl;
	}
}