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
	//ʲô��ָ��:ָ�뱣�������һ������ĵ�ַ
	//ָ���ʼ����ֵʱ���뱣֤����ƥ��
	//C++ �ṩ��һ�������ָ������ void*�������Ա����κ����Ͷ���ĵ�ַ��
	string str1("hell word");
	string *pstr1=&str1;
	cout<<*pstr1<<endl;
	string str2="���";
	pstr1=&str2;
	cout<<*pstr1<<endl;

	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;
	pi = pi2; // pi �� pi2����ָ��ͬһ����ַ��&ival2���õĵ�ַ��

	cout<<"ival="<<ival<<" ival2="<<ival2<<" pi="<<pi<<" *pi="<<*pi<<" pi2="<<pi2<<" *pi2="<<*pi2<<endl;

	//�޸�ָ���ֵ������ָ��ָ����һ���� Ȼ���ٽ������޸�ֵ ����Ӱ��ָ��ԭ��ָ���ֵ

	int i_1=10;
	int i_2=20;

	int *p_1=&i_1;
	int *p_2=&i_2;

	p_1=p_2;//��ָ�����¸�ֵ
	*p_2=101;//��ָ��ָ��Ķ������¸�ֵ

	//ָ������õ�����Ƚ�
	int val_1=1024,val_2=2048;
	int *p1=&val_1,*p2=&val_2; //��������ָ��
	p1=p2; //���ʱ��p1��p2ָ��ͬһ����ַ val_1,val_2��ֵ����

	//���þ���ĳһ������Ŀ�꣩��һ�������������õĲ�����Ա���ֱ�Ӳ�����ȫһ����
	int &ref1=val_1,&ref2=val_2; //�������ã�&�ڴ˲������ַ���㣬�������ʶ���á�
	ref1=ref2; //���ʱ�� val_1��ֵ==val_2��ֵ
	cout<<"val_1="<<val_1<<",val_2="<<val_2<<endl;

	//ָ���ָ�� 
	int *myP1=&val_1; //myP1��val_1���ڴ��ַ
	int **pmyP1=&myP1;//pmyP1��myP1���ڴ��ַ
	cout<<"myP1="<<myP1<<",pmyP1="<<pmyP1<<endl;
	//ͨ����pmyP1���ν����ÿ��Ի��val_1��ֵ
	cout<<"pmyP1="<<**pmyP1<<endl;

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
		cout<<stra[i]<<endl;
	}

	int ia2[6]={0,2,3,54,5,6};
	cout<<"ia2="<<ia2<<endl; // ia2��һ��ָ��ia2[0]��ַ��ָ��
	//ͨ�������ʼ��vector
	vector<int> ivec(ia2,ia2+6);

}
void pontArray()
{
	//ʹ��ָ���������Ԫ��
	int ia[]={1,2,3,4,5};
	int *ip=ia; //ָ��ia[0]�ĵ�ַ
	ip=&ia[1];
	//ͨ��ָ������������ȡָ����������
	int *ip2=ip+2; //ָ��ia[3]�ĵ�ַ
	
	cout<<"ip2="<<*ip2<<endl;

	int last =*(ia+4); //���������.������һ��Ԫ��
	cout<<"last="<<last<<endl;

	//ͨ������ָ���ϼ��ϣ����ȥ��һ��������ֵ n ��Ч�ڻ��һ����ָ�룬
//����ָ��ָ��ָ��ԭ��ָ���Ԫ��֮�󣨻�֮ǰ���ĵ� n ��Ԫ�ء�

	//������ָ������±����
	int *ip3=&ia[1];
	int j=ip3[1]; //ia[2]
	cout<<"j="<<j<<endl;

	double dval=3.14;
	const double  *dp1;
	dp1=&dval; //���԰ѷ�const����ĵ�ַ��ֵ��constָ��
	dval=3.15;
	//*dp1=3.16; //����: ����ͨ��constָ���޸�ָ��Ķ����ֵ
	cout<<"dval="<<dval<<endl;
	
	int cint1=100;
	int cint2=200;
	const int cint3=300;
	const int *cp1; //���ǰ�ָ��Ķ������ǳ���,���Բ���ͨ��*cp1=n���� �ᱨ��
	cp1=&cint1;
	cp1=&cint2; //���Բ��ϸı�cp1��ָ��ֵ
	int *const ccp1=&cint2; //ָ�볣��,����ʱ�����ʼ��(ֻ��ָ������ĵ�ַ,����ָ����),����֮�����ٸ���ָ��ĵ�ַ
	//ccp1=&cint1; //����
	*ccp1=200; //���ǿ���ͨ���������޸ı���ֵ
	cout<<"ccp1="<<*ccp1<<endl;

	double pi = 3.14159;
	const double pi2 = 3.14159;
	// pi_ptr is const and points to a const object
	const double *const pi_ptr = &pi; //�������pi_ptr��ָ��Ķ����ֵ�Լ����ĵ�ַ�������ܱ��ı�
	
	pi=5.455;
	
	cout<<"pi="<<pi<<"pi_ptr="<<pi_ptr<<endl;

	/*
	typedef string *pstring;
	const pstring cstr;
	�ȼ���
	string *const cstr; */





}

void dynamicArray()
{
	//��̬���� 
	int *pia1=new int[10]; //�޳�ʼ��
	int *pia2=new int[10](); //�г�ʼ��,ÿ��Ԫ�ض���int��Ĭ��ֵ0
	string *psa=new string[10]; //�г�ʼ��,����Ĭ�Ϲ��캯����ʼ��

	//�ͷŶ�̬�����ڴ�
	delete [] psa;

	char *errorTxt="errorTxt";

	size_t len=strlen(errorTxt)+1; //���1Ԥ��������(null)�Ĵ���ռ�
	cout<<len<<endl;
	
	char *errMsg=new char[len];
	size_t arrLen=len;
	//strncpy_s(errMsg,arrLen,errorTxt,len); //arrLen��ֵ������ڵ���len���� arrLen��ʾ�����errMsg�Ĵ���ռ�
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
		pia3[i]=*iiter; //��vector��ֵ��������
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

//��ά����
void mutiArray()
{
	int marr1[3][2]={
		{1,2},
		{3,4},
		{5,6}
	}; //�ȼ��� int marr[3][2]={1,2,3,4,5,6}

	cout<<"marr1="<<marr1[0][0]<<endl;
	int marr2[2][2]={{1},{2}};//���������������ͳ�ʼ��Ĭ��ֵ
	cout<<"marr2="<<marr2[0][1]<<endl;
	int marr3[3][4]={110,3,6,9,121}; //ʡ����Ƕ�Ļ����ÿ�ĸ���Ϊһ�г�ʼ�������಻���ĸ���0����ʼ��
	cout<<"marr3="<<marr3[1][0]<<endl;
	 int (*ip)[4]=marr3; //��ά����ָ��
	 cout<<"ip="<<ip[0][0]<<endl;

	 typedef int int_ary[4]; //����һ������Ϊ4����������
	 int_ary my_int_a={11,12,13,14};
	 int_ary *intP=marr3; //����һ����ά������ָ��,���Ը���һάָ������Ķ������ int *p=new int[4];
	// int *p=new int[4]; //pָ�������һ��Ԫ�صĵ�ַ
	 cout<<"intP="<<intP[0][0]<<endl;
}

//������ �����ָ��
int _tmain(int argc, _TCHAR* argv[])
{
	//aboutArray();
	//aboutPoint();
	//pontArray();
	//dynamicArray();
	mutiArray();
	return 0;
}

