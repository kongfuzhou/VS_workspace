// Chapter7_Func.cpp : �������̨Ӧ�ó������ڵ㡣
//
//�����º���
#include "stdafx.h"
#include <iostream>

int getAbs(int val)
{
	return val>0?val:-val;
}
//�����β�,����ʱ���Ǵ�����ֵ �����޸ĵ��ǵ�ַ�ϵ�ֵ
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

//����ָ��
void pswap(int *&v1,int *&v2)
{
	int *temp=v1;
	v1=v2;
	v2=temp;
}
//��ӡ��һ�������ֵ
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
	�������ܷ�����һ���������������������ͣ������Է���ָ������ָ�룬��ָ
	������Ԫ�ص�ָ���ָ��

	���ʹ�������βε�ΨһĿ���Ǳ��⸴��ʵ�Σ���Ӧ���βζ�
	��Ϊ const ���á�

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

