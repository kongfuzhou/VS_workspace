// Chapter4_array_point.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include "string"
#include <vector>
#include <iostream>
#include <cctype>
#include <bitset>
#include <array>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::getline;
using std::vector;
using std::bitset;
using std::array;

void aboutPoint()
{
	string str1("hell word");
	string *pstr1=&str1;
	cout<<*pstr1<<endl;
	string str2="你好";
	pstr1=&str2;
	cout<<*pstr1<<endl;

}

void aboutArray()
{
	//C++中 数组是定长的 数组元素是不能动态添加的 必须在初始化的时候为数据赋值;
	//如果没有显式提供元素初值，则数组元素会像普通变量一样初始化

	int ia[]={0,1,2,3};
	//char类型的数组可以有两种初始化的方式的
	char chra1[]="aaaa";
	char chra2[]={'a','ee','tt'};
	//不允许数组直接复制和赋值
	const size_t SIZE_1=2;
	string stra[SIZE_1]={"b","c"};
	
	for (size_t i = 0; i < SIZE_1; i++)
	{
		cout<<stra[i];
	}

}


//第四章 数组和指针
int _tmain(int argc, _TCHAR* argv[])
{
	//aboutArray();

	aboutPoint();
	return 0;
}

