// Chapter6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int getNum()
{
	return 1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int j=0;
	while (int i=getNum()) //i只在循环体内有效
	{
		j++;
		if(j>=2)
		{
			break;
		}
		
	}
	//i=100; //i未定义 

	std::cout<<j<<std::endl;

	int flag=100;
	switch (flag)
	{
		case 1:
			break;
		default:
			//只能在最后一个case或者default单独定义变量
		break;
	}

	//只在调式模式中执行的代码
	#ifndef NDEBUG
	std::cerr << "starting main" << std::endl;
	#endif

	return 0;
}

