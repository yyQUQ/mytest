#pragma once
//people类头文件 
#include<iostream>
#include<iomanip>   //用于标准输出 
using namespace std;
class people   //基类people 
{
public:    //公有接口 
	people();  //默认构造函数 
	people(int tid, string tname, string tsex, int tage, string tphone);  //构造函数 
	~people();     //析构函数 
	string get_name() {   //返回员工姓名 
		return name;   //隐式声明为内联函数 
	};
	string get_sex() {   //返回员工性别 
		return sex;    //内联函数提高程序运算速率 
	};
	int get_id() {    //返回员工工号 
		return id;
	};
	int get_age() {    //返回员工年龄 
		return age;
	};
	string get_phone() {   //返回员工联系电话 
		return phone;
	}
	void set_name(string t); //设置员工姓名 
	void set_sex(string t);  //设置员工性别 
	void set_id(int t);   //设置员工工号 
	void set_age(int t);  //设置员工年龄 
	void set_phone(string t); //设置员工联系电话 
private:      //私有数据成员 
	string name;    //员工姓名 
	string sex;     //员工性别 
	int id;      //员工工号 
	int age;     //员工年龄 
	string phone;    //员工联系电话 
};
people::people(int tid, string tname, string tsex, int tage, string tphone) :id(tid), name(tname), sex(tsex), age(tage), phone(tphone) {
}
people::~people() {

}
void people::set_age(int t)
{
	age = t;
	cout << "修改员工年龄成功！\n";
}
void people::set_id(int t)
{
	id = t;
	cout << "修改员工工号成功！\n";
}
void people::set_name(string t)
{
	name = t;
	cout << "修改员工姓名成功！\n";
}
void people::set_sex(string t)
{
	sex = t;
	cout << "修改员工性别成功！\n";
}
void people::set_phone(string t)
{
	phone = t;
	cout << "设置员工联系电话成功！\n";
}
