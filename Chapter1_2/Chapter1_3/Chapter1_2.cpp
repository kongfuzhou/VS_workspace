// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"


void trace()
{
	std::cout<<"trace....";
}

//���붨����main����֮ǰ��C����һ��
void outPutNum()
{
	printf("enter two number will print all number between them!");
	std::cout<<std::endl;
	int min,max;
	int lineNum=0;
	int maxLine=10;
	if(std::cin>>min>>max==false)
	{
		//���벻�Ϸ����������� ��ֹ��ѭ��
		return;
	}
	if (min>max)
	{
		min=max;
	}
	for (int i = min; i <= max; i++)
	{		
		std::cout<<i<<" ";
		lineNum++;
		if(lineNum%maxLine==0)
		{
			std::cout<<std::endl;
		}
	}
	trace();
	outPutNum();

}




int _tmain(int argc, _TCHAR* argv[])
{
	//outPutNum();
	unsigned int k=10;
	const int bufSize=512;
	std::cout<<k<<" ss "<<bufSize;
	short h;
	//std::cout<<sizeof(h);
	std::string str="ann,h,y,e";

	//���� ���ñ������������ͬ���͵Ķ����ʼ����
	int ival=100;
	int &refVal=ival;
	
	int i=ival;
	i=200;
	std::cout<<"����="<<refVal<<" "<<ival<<" "<<i<<std::endl;

	//typedef�Ƕ�����һ�����͵��±���
	typedef int My_int; //����int���͵ı�������My_int
	My_int valB;
	valB=12000;
	std::cout<<"valB="<<valB;
	//ö�� Ĭ�ϵ�һ����0 ֮���ۼ�
	enum fileStatus {input,output,append};

	//Ҳ���Ը�ö�ٸ�Ĭ��ֵ ����ֵֵ���ܻ��ǰһ����һ
	enum MyEnum
	{
		enum1=10,
		enum2,
		enum3=20,
		enum4
	};
	MyEnum e4 = enum4;
	std::cout<<"xx MyEnum=="<<MyEnum::enum4<<e4<<std::endl;
	//���������
	extern int myVal_0; //����: ʹ��extern ���Ҳ��ܳ�ʼ����������Ȼ��������extern�ؼ���Ҳ�Ƕ���
	int myVal_1; //����,vs�����ʹ����extern�ؼ��־Ͳ��ܳ�ʼ����
	//C++�г�ʼ�����Ǹ�ֵ
	std::cout<< "Hello C++ program." ;
	std::cout<< std::endl;

	std::cout<< "pleaese enter two numbers.";

	int inV1,inV2;
	//std::cin>>inV1>>inV2;
	//std::cout<<"inV1="<<inV1<<" inV2="<<inV2;
	
	return 0;
}




