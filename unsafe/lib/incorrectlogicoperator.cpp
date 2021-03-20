#include<iostream>
void Demo(int a)
{
	if((a != 1) || (a != 3)) //表达式始终为true 
	{ 
		std::cout<<"touch here"<<std::endl;
	}
}