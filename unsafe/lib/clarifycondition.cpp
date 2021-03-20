#include <iostream>
void Demo(int x,int a)
{
	// 赋值运算和比较运算的优先级不清晰
	if (x = a < 0)
	{
		std::cout<<"touch here"<<std::endl;
	}
	
}