// Chapter5.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//->��ͷ���������÷�,
	/*
	������һ������item ָ��p��ָ��item�ĵ�ַ item��һ����Ա����show
	��ô֮ǰ�ĵ�������ʷ�ʽ��:item.show(),(*p).show().
	���ڿ��� p->show();

	*/
	cout<<"float="<<sizeof(float)<<endl;
	
	return 0;
}

