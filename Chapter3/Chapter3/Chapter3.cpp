// Chapter3.cpp : �������̨Ӧ�ó������ڵ㡣
//������

#include "stdafx.h"
#include "string"
#include <vector>
#include <iostream>
#include <cctype>
#include <bitset>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::getline;
using std::vector;
using std::bitset;

void operateBitSet()
{
	string str1("1100");
	bitset<32> b1(1010);
	cout<<b1[3]<<endl;

	size_t b1Size=b1.size(); //����
	size_t oneNum=b1.count();

	bitset<32> b2(str1);


	cout<<"b1Size="<<b1Size<<" oneNum="<<oneNum<<" "<<b1.to_ulong()<<endl<<"b2="<<b2.to_ulong()<<endl;

}

void operateVector()
{
	//vector�Ĺ��캯��(��string����)
	vector<int> ivec1; //Ĭ�Ϲ��캯��,���ǿ����� ���ֵҲ������nullֵ
	vector<int> ivec2(ivec1);//ivec1�ĸ���
	vector<int> ivec3;
	vector<int> ivec4(10); //���10��int
	ivec1.push_back(100);
	cout<<"ivec1="<<ivec1[0]<<endl;

	for (int i = 0; i < 20; i++)
	{
		cout<<i<<endl;
		ivec3.push_back(i+1);
	}

	vector<string> vecStr1;
	vecStr1.push_back("happy");
	vector<string>::size_type len1=vecStr1.size(); //�����������
	cout<<"len1="<<len1<<endl;

	//ͨ���±겻�����Ԫ��,�����޸���ȷʵ���ڵ�Ԫ��

	//������
	vector<int>::iterator iter=ivec3.begin();
	//�����÷��ʵ�������ָ���Ԫ��
	cout<<"iter1="<<*iter<<endl; //ͨ�� *iter ��ȡ����������ָ���Ԫ��
	//�����������������ǻ�ȡ����һ��Ԫ��
	++iter;
	cout<<"iter2 55 ="<<*iter<<endl;
	//iter=ivec3.end();
	//cout<<"end()="<<*iter;
	return;
	//vector<string>::const_iterator //ͨ�������õõ����ǳ���

	const vector<int>::iterator it1=ivec3.begin();
	*it1=0;
	//++it1;// ����ᱨ����Ϊϵ���� �����޸ĵ�����
	//����������������

	vector<int> nums;
	vector<int>::size_type i;
	vector<int>::size_type length=10;
	for (i = 0; i < length; i++)
	{
		nums.push_back(i+1);
	}
	//���������������� size_typeȥ����
	vector<int>::iterator it2=nums.begin()+nums.size()/2;

	cout<<"xx it2="<<*it2<<endl;
	nums.push_back(100);
	cout<<"push_back��it2="<<*it2<<endl;

	return;
	cout<<"myIntVect"<<endl;

	vector<int> ivec5(ivec3);
	for (vector<int>::size_type ix=0;ix!=ivec5.size();ix++)
	{
		ivec5[ix]=0; //��Ϊix�±��Ԫ��ȷʵ����,���Կ����޸ĸ�ֵ
		cout<<"ivec5["<<ix<<"]"<<"="<<ivec5[ix]<<endl;
	}





}

/**�����ַ���**/
void operateStr()
{
	cout<<"please enter a char"<<std::endl;
	string str;
	//cin >> str;
	//cout<<str<<std::endl;

	//string�Ķ�����ع��캯��
	string s1;
	string s2(s1);
	string s3("cc");
	string s4(2,'w');//�õ�2��������w�ַ���
	cout << s4<<endl;
	int i=0;
	while (getline(cin,s1))
	{
		cout << s1<<endl;
		i++;
		if(i>=5)
		{
			break;
		}
	}
	string::size_type length=s1.size();//���ص�������string::size_type ����int
	cout<<"s1�ĸ��� "<<length<<endl; //�ַ����ĳ���
	for (string::size_type i = 0; i < length; i++)
	{
		s1[i]=toupper(s1[i]);
		//cout<<"s1��"<<(i+1)<<"��:"<<s1[i]<<endl;
		string ts; //ֱ��string ts=toupper(s1[i]);��ʼ����ֵ�ᱨ��??
		ts=toupper(s1[i]); //���︳ֵȴ������ ??
		cout<<"ts="<<ts<<endl;

	}
}

int _tmain(int argc, _TCHAR* argv[])
{	
	//operateStr();
	//operateVector();
	operateBitSet();
	return 0;
}

