#include <stdio.h>
//预编译指令是不需要分号的，加分号不影响执行
//.c和.cpp都是可以的
//不能重复声明

/*
#include "data.cpp"
//include可以包含任意类型 .c  .h  .cpp
*/


//一般情况下，函数的声明应该放在头文件(.h)，函数的实现与变量的定义，放在源文件(.cpp)

#include "data.h"



void main()
{
	add();
}