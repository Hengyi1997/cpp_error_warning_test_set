#include <iostream>
#include <string>
bool DoSomething(int input){
  std::string input_str(input, 'a');
  std::cout<<input_str<<std::endl;
  return true;
}

void Demo(int a, int b, bool c, bool d)
{
	// if-else分支的代码相同
	if (a == b)
	{
		c = DoSomething(1);
	} 
	else
	{
		c = DoSomething(1);
	}
}
