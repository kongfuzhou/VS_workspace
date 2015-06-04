// Chapter5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int uu=100;

int _tmain(int argc, _TCHAR* argv[])
{
	int input;
	/*while (cin>>input)
	{
		if(input==42)
		{
			break;
		}else
		{
			cout<<"input="<<input<<endl;
		}
	}*/


	cout<<"uu="<<uu<<endl;
	//->箭头操作符的用法,
	/*
	加入有一个对象item 指针p是指向item的地址 item有一个成员函数show
	那么之前的点操作访问方式有:item.show(),(*p).show().
	现在可以 p->show();

	*/
	cout<<"float="<<sizeof(float)<<endl;
	
	return 0;
}

