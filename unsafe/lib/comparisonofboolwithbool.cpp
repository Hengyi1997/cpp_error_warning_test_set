#include <stdio.h>
void Demo(){
	bool b = (2>6);
	bool a = (1<4);
	// bool变量之间不应该使用比较操作符
    if(b > a){
		printf("foo");
	}
}