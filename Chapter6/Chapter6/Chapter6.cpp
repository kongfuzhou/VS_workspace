// Chapter6.cpp : �������̨Ӧ�ó������ڵ㡣
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
	while (int i=getNum()) //iֻ��ѭ��������Ч
	{
		j++;
		if(j>=2)
		{
			break;
		}
		
	}
	//i=100; //iδ���� 

	std::cout<<j<<std::endl;

	int flag=100;
	switch (flag)
	{
		case 1:
			break;
		default:
			//ֻ�������һ��case����default�����������
		break;
	}

	//ֻ�ڵ�ʽģʽ��ִ�еĴ���
	#ifndef NDEBUG
	std::cerr << "starting main" << std::endl;
	#endif

	return 0;
}

