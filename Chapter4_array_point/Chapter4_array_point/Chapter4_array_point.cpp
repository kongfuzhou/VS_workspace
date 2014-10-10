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
	//什么是指针:指针保存的是另一个对象的地址
	//指针初始化或赋值时必须保证类型匹配
	//C++ 提供了一种特殊的指针类型 void*，它可以保存任何类型对象的地址：
	string str1("hell word");
	string *pstr1=&str1;
	cout<<*pstr1<<endl;
	string str2="你好";
	pstr1=&str2;
	cout<<*pstr1<<endl;

	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;
	pi = pi2; // pi 和 pi2都是指向同一个地址（&ival2引用的地址）

	cout<<"ival="<<ival<<" ival2="<<ival2<<" pi="<<pi<<" *pi="<<*pi<<" pi2="<<pi2<<" *pi2="<<*pi2<<endl;

	//修改指针的值可以让指针指向另一对象 然后再解引用修改值 不会影响指针原来指向的值

	int i_1=10;
	int i_2=20;

	int *p_1=&i_1;
	int *p_2=&i_2;

	p_1=p_2;//给指针重新赋值
	*p_2=101;//给指针指向的对象重新赋值

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
		cout<<stra[i]<<endl;
	}




}


//第四章 数组和指针
int _tmain(int argc, _TCHAR* argv[])
{
	//aboutArray();

	aboutPoint();
	return 0;
}

