// Chapter4_array_point.cpp : �������̨Ӧ�ó������ڵ㡣
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
	string str2="���";
	pstr1=&str2;
	cout<<*pstr1<<endl;

}

void aboutArray()
{
	//C++�� �����Ƕ����� ����Ԫ���ǲ��ܶ�̬��ӵ� �����ڳ�ʼ����ʱ��Ϊ���ݸ�ֵ;
	//���û����ʽ�ṩԪ�س�ֵ��������Ԫ�ػ�����ͨ����һ����ʼ��

	int ia[]={0,1,2,3};
	//char���͵�������������ֳ�ʼ���ķ�ʽ��
	char chra1[]="aaaa";
	char chra2[]={'a','ee','tt'};
	//����������ֱ�Ӹ��ƺ͸�ֵ
	const size_t SIZE_1=2;
	string stra[SIZE_1]={"b","c"};
	
	for (size_t i = 0; i < SIZE_1; i++)
	{
		cout<<stra[i];
	}

}


//������ �����ָ��
int _tmain(int argc, _TCHAR* argv[])
{
	//aboutArray();

	aboutPoint();
	return 0;
}

