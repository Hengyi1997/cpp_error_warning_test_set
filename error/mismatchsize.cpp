#include <malloc.h>
#include <stdlib.h>
void Demo()
{
	//分配的内存空间不匹配
	int i = (int )malloc(3);
}
