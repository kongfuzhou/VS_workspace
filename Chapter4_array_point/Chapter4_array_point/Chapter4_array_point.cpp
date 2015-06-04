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

	//指针和引用的区别比较
	int val_1=1024,val_2=2048;
	int *p1=&val_1,*p2=&val_2; //定义两个指针
	p1=p2; //这个时候p1和p2指向同一个地址 val_1,val_2的值不变

	//引用就是某一变量（目标）的一个别名，对引用的操作与对变量直接操作完全一样。
	int &ref1=val_1,&ref2=val_2; //定义引用，&在此不是求地址运算，而是起标识作用。
	ref1=ref2; //这个时候 val_1的值==val_2的值
	cout<<"val_1="<<val_1<<",val_2="<<val_2<<endl;

	//指针的指针 
	int *myP1=&val_1; //myP1是val_1的内存地址
	int **pmyP1=&myP1;//pmyP1是myP1的内存地址
	cout<<"myP1="<<myP1<<",pmyP1="<<pmyP1<<endl;
	//通过对pmyP1两次解引用可以获得val_1的值
	cout<<"pmyP1="<<**pmyP1<<endl;

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

	int ia2[6]={0,2,3,54,5,6};
	cout<<"ia2="<<ia2<<endl; // ia2是一个指向ia2[0]地址的指针
	//通过数组初始化vector
	vector<int> ivec(ia2,ia2+6);

}
void pontArray()
{
	//使用指针访问数组元素
	int ia[]={1,2,3,4,5};
	int *ip=ia; //指向ia[0]的地址
	ip=&ia[1];
	//通过指针算术操作获取指定数组内容
	int *ip2=ip+2; //指向ia[3]的地址
	
	cout<<"ip2="<<*ip2<<endl;

	int last =*(ia+4); //这个好神奇.获得最后一个元素
	cout<<"last="<<last<<endl;

	//通常，在指针上加上（或减去）一个整型数值 n 等效于获得一个新指针，
//该新指针指向指针原来指向的元素之后（或之前）的第 n 个元素。

	//对数组指针进行下标操作
	int *ip3=&ia[1];
	int j=ip3[1]; //ia[2]
	cout<<"j="<<j<<endl;

	double dval=3.14;
	const double  *dp1;
	dp1=&dval; //可以把非const对象的地址赋值给const指针
	dval=3.15;
	//*dp1=3.16; //错误: 不能通过const指针修改指向的对象的值
	cout<<"dval="<<dval<<endl;
	
	int cint1=100;
	int cint2=200;
	const int cint3=300;
	const int *cp1; //总是把指向的对象看做是常量,所以不能通过*cp1=n操作 会报错
	cp1=&cint1;
	cp1=&cint2; //可以不断改变cp1的指针值
	int *const ccp1=&cint2; //指针常量,定义时必须初始化(只能指向变量的地址,不能指向常量),而且之后不能再改下指针的地址
	//ccp1=&cint1; //错误
	*ccp1=200; //但是可以通过解引用修改变量值
	cout<<"ccp1="<<*ccp1<<endl;

	double pi = 3.14159;
	const double pi2 = 3.14159;
	// pi_ptr is const and points to a const object
	const double *const pi_ptr = &pi; //这个代表pi_ptr所指向的对象的值以及它的地址本身都不能被改变
	
	pi=5.455;
	
	cout<<"pi="<<pi<<"pi_ptr="<<pi_ptr<<endl;

	/*
	typedef string *pstring;
	const pstring cstr;
	等价于
	string *const cstr; */





}

void dynamicArray()
{
	//动态数组 
	int *pia1=new int[10]; //无初始化
	int *pia2=new int[10](); //有初始化,每个元素都是int的默认值0
	string *psa=new string[10]; //有初始化,调用默认构造函数初始化

	//释放动态数组内存
	delete [] psa;

	char *errorTxt="errorTxt";

	size_t len=strlen(errorTxt)+1; //多加1预留结束符(null)的储存空间
	cout<<len<<endl;
	
	char *errMsg=new char[len];
	size_t arrLen=len;
	//strncpy_s(errMsg,arrLen,errorTxt,len); //arrLen的值必须大于等于len才行 arrLen表示分配给errMsg的储存空间
	strncpy(errMsg,errorTxt,len);
	char *end=errMsg+len-1; //
	cout<<"end="<<end<<endl;
	while (errMsg!=end)
	{
		cout<<"errMsg="<<*errMsg<<endl;
		errMsg++;
	}
	vector<int> vi;
	int input;
	while (cin>>input)
	{
		vi.push_back(input);
	}
	vector<int>::size_type size=vi.size();
	int *pia3=new int[size];
	int i=0;
	for (vector<int>::iterator iiter=vi.begin(); iiter!=vi.end(); iiter++,i++)
	{
		cout<<"iiter="<<*iiter<<endl;
		pia3[i]=*iiter; //把vector的值赋给数组
	}	
	cout<<"--11*** --- pia3="<<*pia3<<endl;
	int *iEnd=pia3+size;
	cout<<"--22*** --- pia3="<<*pia3<<endl;
	cout<<"iEnd="<<iEnd<<",val iEnd="<<*iEnd<<endl;
	while (pia3!=iEnd)
	{
		cout<<"-------- pia3="<<*pia3<<endl;
		pia3++;
	}


} 

//多维数组
void mutiArray()
{
	int marr1[3][2]={
		{1,2},
		{3,4},
		{5,6}
	}; //等价于 int marr[3][2]={1,2,3,4,5,6}

	cout<<"marr1="<<marr1[0][0]<<endl;
	int marr2[2][2]={{1},{2}};//根据数组数据类型初始化默认值
	cout<<"marr2="<<marr2[0][1]<<endl;
	int marr3[3][4]={110,3,6,9,121}; //省略内嵌的话会把每四个作为一行初始化，其余不足四个的0作初始化
	cout<<"marr3="<<marr3[1][0]<<endl;
	 int (*ip)[4]=marr3; //多维数组指针
	 cout<<"ip="<<ip[0][0]<<endl;

	 typedef int int_ary[4]; //定义一个长度为4的数组类型
	 int_ary my_int_a={11,12,13,14};
	 int_ary *intP=marr3; //定义一个二维的数组指针,可以根据一维指针数组的定义理解 int *p=new int[4];
	// int *p=new int[4]; //p指向数组第一个元素的地址
	 cout<<"intP="<<intP[0][0]<<endl;
}

//第四章 数组和指针
int _tmain(int argc, _TCHAR* argv[])
{
	//aboutArray();
	//aboutPoint();
	//pontArray();
	//dynamicArray();
	mutiArray();
	return 0;
}

