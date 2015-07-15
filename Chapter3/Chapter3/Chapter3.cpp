// Chapter3.cpp : 定义控制台应用程序的入口点。
//第三章

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

	size_t b1Size=b1.size(); //长度
	size_t oneNum=b1.count();

	bitset<32> b2(str1);


	cout<<"b1Size="<<b1Size<<" oneNum="<<oneNum<<" "<<b1.to_ulong()<<endl<<"b2="<<b2.to_ulong()<<endl;

}

void operateVector()
{
	//vector的构造函数(和string类似)
	vector<int> ivec1; //默认构造函数,但是可以用 这个值也不会是null值
	vector<int> ivec2(ivec1);//ivec1的副本
	vector<int> ivec3;
	vector<int> ivec4(10); //最多10个int
	ivec1.push_back(100);
	cout<<"ivec1="<<ivec1[0]<<endl;

	for (int i = 0; i < 20; i++)
	{
		cout<<i<<endl;
		ivec3.push_back(i+1);
	}

	vector<string> vecStr1;
	vecStr1.push_back("happy");
	vector<string>::size_type len1=vecStr1.size(); //好神奇的类型
	cout<<"len1="<<len1<<endl;

	//通过下标不能添加元素,可以修改已确实存在的元素

	//迭代器
	vector<int>::iterator iter=ivec3.begin();
	//解引用访问迭代器所指向的元素
	cout<<"iter1="<<*iter<<endl; //通过 *iter 获取到迭代器所指向的元素
	//迭代器自增操作就是获取到下一个元素
	++iter;
	cout<<"iter2 55 ="<<*iter<<endl;
	//iter=ivec3.end();
	//cout<<"end()="<<*iter;
	return;
	//vector<string>::const_iterator //通过解引用得到的是常量

	const vector<int>::iterator it1=ivec3.begin();
	*it1=0;
	//++it1;// 这里会报错以为系常量 不能修改迭代器
	//迭代器的算术操作

	vector<int> nums;
	vector<int>::size_type i;
	vector<int>::size_type length=10;
	for (i = 0; i < length; i++)
	{
		nums.push_back(i+1);
	}
	//迭代器的算术操作 size_type去操作
	vector<int>::iterator it2=nums.begin()+nums.size()/2;

	cout<<"xx it2="<<*it2<<endl;
	nums.push_back(100);
	cout<<"push_back后it2="<<*it2<<endl;

	return;
	cout<<"myIntVect"<<endl;

	vector<int> ivec5(ivec3);
	for (vector<int>::size_type ix=0;ix!=ivec5.size();ix++)
	{
		ivec5[ix]=0; //因为ix下标的元素确实存在,所以可以修改赋值
		cout<<"ivec5["<<ix<<"]"<<"="<<ivec5[ix]<<endl;
	}





}

/**操作字符串**/
void operateStr()
{
	cout<<"please enter a char"<<std::endl;
	string str;
	//cin >> str;
	//cout<<str<<std::endl;

	//string的多个重载构造函数
	string s1;
	string s2(s1);
	string s3("cc");
	string s4(2,'w');//得到2个连续的w字符串
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
	string::size_type length=s1.size();//返回的类型是string::size_type 不是int
	cout<<"s1的个数 "<<length<<endl; //字符串的长度
	for (string::size_type i = 0; i < length; i++)
	{
		s1[i]=toupper(s1[i]);
		//cout<<"s1第"<<(i+1)<<"个:"<<s1[i]<<endl;
		string ts; //直接string ts=toupper(s1[i]);初始化赋值会报错??
		ts=toupper(s1[i]); //这里赋值却不报错 ??
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

