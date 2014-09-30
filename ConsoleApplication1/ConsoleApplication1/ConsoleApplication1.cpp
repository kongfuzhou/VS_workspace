// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "Sales_item.h";

void trace()
{
	std::cout<<"trace....";
}

//必须定义在main函数之前和C语言一样
void outPutNum()
{
	printf("enter two number will print all number between them!");
	std::cout<<std::endl;
	int min,max;
	int lineNum=0;
	int maxLine=10;
	if(std::cin>>min>>max==false)
	{
		//输入不合法的数字跳出 防止死循环
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

	//引用 引用必须用与该引用同类型的对象初始化：
	int ival=100;
	int &refVal=ival;
	
	int i=ival;
	i=200;
	std::cout<<"引用="<<refVal<<" "<<ival<<" "<<i<<std::endl;

	//typedef是定义了一种类型的新别名
	typedef int My_int; //这里int类型的别名就是My_int
	My_int valB;
	valB=12000;
	std::cout<<"valB="<<valB;
	//枚举 默认第一个是0 之后累加
	enum fileStatus {input,output,append};
	
	//定义和声明
	extern int myVal_0; //声明: 使用extern 并且不能初始化变量，不然就算用了extern关键字也是定义
	int myVal_1; //定义,vs中如果使用了extern关键字就不能初始化了
	
	return 0;
}




