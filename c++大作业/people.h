#pragma once
//people��ͷ�ļ� 
#include<iostream>
#include<iomanip>   //���ڱ�׼��� 
using namespace std;
class people   //����people 
{
public:    //���нӿ� 
	people();  //Ĭ�Ϲ��캯�� 
	people(int tid, string tname, string tsex, int tage, string tphone);  //���캯�� 
	~people();     //�������� 
	string get_name() {   //����Ա������ 
		return name;   //��ʽ����Ϊ�������� 
	};
	string get_sex() {   //����Ա���Ա� 
		return sex;    //����������߳����������� 
	};
	int get_id() {    //����Ա������ 
		return id;
	};
	int get_age() {    //����Ա������ 
		return age;
	};
	string get_phone() {   //����Ա����ϵ�绰 
		return phone;
	}
	void set_name(string t); //����Ա������ 
	void set_sex(string t);  //����Ա���Ա� 
	void set_id(int t);   //����Ա������ 
	void set_age(int t);  //����Ա������ 
	void set_phone(string t); //����Ա����ϵ�绰 
private:      //˽�����ݳ�Ա 
	string name;    //Ա������ 
	string sex;     //Ա���Ա� 
	int id;      //Ա������ 
	int age;     //Ա������ 
	string phone;    //Ա����ϵ�绰 
};
people::people(int tid, string tname, string tsex, int tage, string tphone) :id(tid), name(tname), sex(tsex), age(tage), phone(tphone) {
}
people::~people() {

}
void people::set_age(int t)
{
	age = t;
	cout << "�޸�Ա������ɹ���\n";
}
void people::set_id(int t)
{
	id = t;
	cout << "�޸�Ա�����ųɹ���\n";
}
void people::set_name(string t)
{
	name = t;
	cout << "�޸�Ա�������ɹ���\n";
}
void people::set_sex(string t)
{
	sex = t;
	cout << "�޸�Ա���Ա�ɹ���\n";
}
void people::set_phone(string t)
{
	phone = t;
	cout << "����Ա����ϵ�绰�ɹ���\n";
}
