//预处理命令 防止多吃引入编译 头文件，预处理不需要分号
#ifndef SALESITEM_H 
#define SALESITEM_H
class Sales_item{
	/*class关键字可以用struct代替，
	它们的区别是：class默认数据成员是private的struct默认数据成员是public
	*/

public:
	std::string _name;

}; //定义类 这里必须要有一个分号结束


#endif
