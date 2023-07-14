//employee类头文件
#include<iostream>
#include"people.h"
#include<iomanip>
#include<string.h>
#include<vector>
class employee :public people
{
public:
	vector<int> attendance;
	employee();
	~employee();
	employee(int tid, string name, string sex, int tage, string tphone, string tdepartment, string tjob);
	void operator=(employee& a);
	friend ostream& operator<<(ostream& cout, employee& p);
	string get_job() {
		return job;
	}
	string get_department() {
		return department;
	}
	string get_password() {
		return password;
	}
	void change_job(string t);
	void change_department(string t);
	void change_password(string t);
private:
	string department;
	string job;
	string password;
};
employee::employee(int tid, string tname, string tsex, int tage, string tphone, string tdepartment, string tjob) :people(tid, tname, tsex, tage, tphone), department(tdepartment), job(tjob) {

}
ostream& operator<<(ostream& cout, employee& p)
{
	cout.setf(ios::fixed);
	cout << std::right << setw(4) << setfill('0') << p.get_id() << setfill(' ') << setw(11) << p.get_name() << setw(9) << p.get_sex() << setw(9) << p.get_age() << setw(12) << p.get_department() << setw(10) << p.get_job() << setw(15) << p.get_phone() << endl;
	return cout;
}
void employee::operator=(employee& a)
{
	this->job = a.get_job();
	this->department = a.get_department();
}

void employee::change_job(string t)
{
	job = t;
	cout << "修改员工职位成功！\n";
}
void employee::change_department(string t)
{
	department = t;
	cout << "修改员工所属部门成功！\n";
}
void employee::change_password(string t)
{
	password = t;
	cout << "修改员工密码成功！\n";
}
