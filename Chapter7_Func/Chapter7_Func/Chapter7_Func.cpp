// Chapter7_Func.cpp : 定义控制台应用程序的入口点。
//
//第七章函数
#include "stdafx.h"
#include <iostream>

int getAbs(int val)
{
	return val>0?val:-val;
}
//引用形参,传的时候还是传变量值 但是修改的是地址上的值
void swapAb(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
}

int gcd(int v1,int v2)
{
	while (v2)
	{
		int temp=v2;
		v2=v1%v2;
		std::cout<<"gcd v2="<<v2<<std::endl;
		v1=temp;
	}
	return v1;
}

//交换指针
void pswap(int *&v1,int *&v2)
{
	int *temp=v1;
	v1=v2;
	v2=temp;
}
//打印出一个数组的值
void printVal(const int *beg,const int *end)
{
	while (beg!=end)
	{
		std::cout<<"beg="<<*beg<<std::endl;
		beg++;
	}
	
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*	
	函数不能返回另一个函数或者内置数组类型，但可以返回指向函数的指针，或指
	向数组元素的指针的指针

	如果使用引用形参的唯一目的是避免复制实参，则应将形参定
	义为 const 引用。

	*/
	std::cout<<getAbs(-120)<<std::endl;
	
	int a=100,b=200;
	swap(a,b);
	std::cout<<"a="<<a<<",b="<<b<<std::endl;
	swapAb(a,b);
	std::cout<<"a="<<a<<",b="<<b<<std::endl;
	std::cout<<"gcd="<<gcd(4,6)<<std::endl;
	return 0;
}

