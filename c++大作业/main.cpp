#include<iostream> 
#include<vector>     //����vectorͷ�ļ� 
#include"employee.h"    //����employeeͷ�ļ����ڶ�Ա����Ϣ���в��� 
#include<stdio.h>
using namespace std;
//���ܺ��������� 
void add_employee();    //����Ա����Ϣ    
void del_employee();   //ɾ��Ա����Ϣ
void modify_information();  //�޸�Ա����Ϣ
void search_information();  //����Ա����Ϣ
void import_local_data();  //���뱾������ 
void save_data();    //����ϵͳ���� 
void search_all();    //��ѯȫ����Ϣ 
void help();     //ʹ�ð��� 
void about_us();    //��������  
void quit();     //�˳����� 
void set_up();     //���Ի�����  
void sign();
void em_modify_information();
void em_search_information();
//����vector�����Ͷ�Ӧ�ĵ�������Ϊȫ�ֱ��������ڸ������ܺ�����ĵ��� 
extern vector<employee*> database;
extern  vector<employee*>::iterator it;
//�����û����Ի���ɫ�����еı��� 
char order[20] = "color ";
char a[2] = "F", b[2] = "1";
int j = 0;    //�����ж��û��Ƿ��Ѿ����й����Ի����� 
int main()
{
    int choice=0;    //�û�ѡ�� 
    while (1)
    {
        system("cls");    //�������� 
        if (j == 0) {     //���û�δ���и��Ի����� 
            system("color F1");   //Ĭ�ϸ��Ի����� 
        }
        else {
            system(order);    //�����û��ĸ��Ի����� 
        }
        //���˵�
        cout << "+-----------��ӭʹ��Ա����Ϣ����ϵͳ3.1.2-------------+\n";
        cout << "|*             ->  1.Ա��ϵͳ  <-                *|\n";
        cout << "|*             ->  2.����Աϵͳ  <-                *|\n";
        while (choice != 1 && choice != 2)
        {
            cout << "ѡ������������������룺 ";
            cin >> choice;
        }
        try {        //�쳣������� 
            switch (choice)     //switch�������û�ѡ�������Ӧ�Ĺ��ܺ��� 
            {
            case 1:
                //Ա���˵�
                cout << "+-----------��ӭʹ��Ա����Ϣ����ϵͳ3.1.2-------------+\n";
                cout << "|*             ->  1.��ѯ��Ϣ  <-                *|\n";
                cout << "|*             ->  2.������Ϣ  <-                *|\n";
                cout << "|*             ->  3.ǩ��  <-                *|\n";
                cout << "����������ѡ��";
                cin >> choice;
                //�����û������ѡ������ж� 
                while (choice != 1 && choice != 2 && choice != 3)
                {
                    cout << "ѡ������������������룺 ";
                    cin >> choice;
                }
                try {        //�쳣������� 
                    switch (choice)     //switch�������û�ѡ�������Ӧ�Ĺ��ܺ��� 
                    {
                    case 1:
                        em_search_information();  //�� 
                        break;
                    case 2:
                        em_modify_information();  //ɾ 
                        break;
                    case 3:
                        sign();//�� 
                        break;

                    }
                }
                catch (int error)    //�����쳣���� 
                {
                    cout << "catch(int)" << error << endl;
                    cout << "�����쳣��ֹ��\n";
                }
                break;
            case 2:
                //���˵� 
                cout << "+-----------��ӭʹ��Ա����Ϣ����ϵͳ3.1.2-------------+\n";
                cout << "|*             ->  1.����Ա����Ϣ  <-                *|\n";
                cout << "|*             ->  2.ɾ��Ա����Ϣ  <-                *|\n";
                cout << "|*             ->  3.�޸�Ա����Ϣ  <-                *|\n";
                cout << "|*             ->  4.��ѯԱ����Ϣ  <-                *|\n";
                cout << "|*             ->  5.�鿴ȫ����Ϣ  <-                *|\n";
                cout << "|*             ->  6.���뱾������  <-                *|\n";
                cout << "|*             ->  7.����ϵͳ����  <-                *|\n";
                cout << "|*             ->  8.ϵͳʹ�ð���  <-                *|\n";
                cout << "|*             ->  9.��������      <-                *|\n";
                cout << "|*             ->  10.���Ի�����   <-                *|\n";
                cout << "|*             ->  0.�˳�ϵͳ      <-                *|\n";
                cout << "|*            ��Ȩ����           ����ؾ�            *|\n";
                cout << "|*---------------------------------------------------*|\n";
                cout << "����������ѡ��";
                cin >> choice;
                //�����û������ѡ������ж� 
                while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 0)
                {
                    cout << "ѡ������������������룺 ";
                    cin >> choice;
                }
                try {        //�쳣������� 
                    switch (choice)     //switch�������û�ѡ�������Ӧ�Ĺ��ܺ��� 
                    {
                    case 1:
                        add_employee();  //�� 
                        break;
                    case 2:
                        del_employee();  //ɾ 
                        break;
                    case 3:
                        modify_information();//�� 
                        break;
                    case 4:
                        search_information();//�� 
                        break;
                    case 5:
                        search_all();    //�� 
                        break;
                    case 6:
                        import_local_data();//���뱾������ 
                        break;
                    case 7:
                        save_data();  //����ϵͳ���� 
                        break;
                    case 8:
                        help();    //ʹ�ð��� 
                        break;
                    case 9:
                        about_us();   //�������� 
                        break;
                    case 0:
                        quit();    //�˳�ϵͳ 
                        break;
                    case 10:
                        set_up();
                        break;

                    }
                }
                catch (int error)    //�����쳣���� 
                {
                    cout << "catch(int)" << error << endl;
                    cout << "�����쳣��ֹ��\n";
                }
            }
            break;

        }
        catch (int error)    //�����쳣���� 
        {
            cout << "catch(int)" << error << endl;
            cout << "�����쳣��ֹ��\n";
        }
        //���˵� 
        cout << "+-----------��ӭʹ��Ա����Ϣ����ϵͳ3.1.2-------------+\n";
        cout << "|*             ->  1.����Ա����Ϣ  <-                *|\n";
        cout << "|*             ->  2.ɾ��Ա����Ϣ  <-                *|\n";
        cout << "|*             ->  3.�޸�Ա����Ϣ  <-                *|\n";
        cout << "|*             ->  4.��ѯԱ����Ϣ  <-                *|\n";
        cout << "|*             ->  5.�鿴ȫ����Ϣ  <-                *|\n";
        cout << "|*             ->  6.���뱾������  <-                *|\n";
        cout << "|*             ->  7.����ϵͳ����  <-                *|\n";
        cout << "|*             ->  8.ϵͳʹ�ð���  <-                *|\n";
        cout << "|*             ->  9.��������      <-                *|\n";
        cout << "|*             ->  10.���Ի�����   <-                *|\n";
        cout << "|*             ->  0.�˳�ϵͳ      <-                *|\n";
        cout << "|*            ��Ȩ����           ����ؾ�            *|\n";
        cout << "|*---------------------------------------------------*|\n";
        cout << "����������ѡ��";
        cin >> choice;
        //�����û������ѡ������ж� 
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 0)
        {
            cout << "ѡ������������������룺 ";
            cin >> choice;
        }
        try {        //�쳣������� 
            switch (choice)     //switch�������û�ѡ�������Ӧ�Ĺ��ܺ��� 
            {
            case 1:
                add_employee();  //�� 
                break;
            case 2:
                del_employee();  //ɾ 
                break;
            case 3:
                modify_information();//�� 
                break;
            case 4:
                search_information();//�� 
                break;
            case 5:
                search_all();    //�� 
                break;
            case 6:
                import_local_data();//���뱾������ 
                break;
            case 7:
                save_data();  //����ϵͳ���� 
                break;
            case 8:
                help();    //ʹ�ð��� 
                break;
            case 9:
                about_us();   //�������� 
                break;
            case 0:
                quit();    //�˳�ϵͳ 
                break;
            case 10:
                set_up();
                break;

            }
        }
        catch (int error)    //�����쳣���� 
        {
            cout << "catch(int)" << error << endl;
            cout << "�����쳣��ֹ��\n";
        }
    }
}
double attendance(const employee& v)
{
    double rate;
    int n = 0;//������
    int a[35];
    int size = v.attendance.size();
    if (size >= 30)
    {
        for (int i = 0; i < 30; i++)  
            a[i] = v.attendance.at(size - 30 + i);
        for (int i = 0; i < 30; i++)
            if (a[i] == 1) n++;
        rate = n / 30;
    }
    else
    {
        for (int i = 0; i < size; i++)
            a[i] = v.attendance.at(i);
        for (int i = 0; i < size; i++)
            if (a[i] == 1) n++;
        rate = n / size;
    }
    return rate;
}

int performance()
{
    int performance;
    if (attendance(**it) >= 0.9)
        performance = 1000;
    else if (attendance(**it) >= 0.8 && attendance(**it) < 0.9)
        performance = 600;
    else if (attendance(**it) >= 0.7 && attendance(**it) < 0.8)
        performance = 200;
    else performance = 0;

    return performance;
}
void add_employee()    //����Ա����Ϣ 
{
    cout << "������������Ա����Ϣ���ܣ�\n";  //���ù���ѡ�񣬷�ֹ���û��󴥶�����Ա����Ϣ 
    while (1) {         //whileѭ�������ڶ������Ա����Ϣ 
        cout << "1.����Ա����Ϣ   0.�˳�\n";  //ѡ��˵� 
        cout << "����������ѡ��";
        int choice;
        cin >> choice;
        while (choice != 1 && choice != 0)   //�û�ѡ���ж� 
        {
            cout << "����ѡ��������������룺";
            cin >> choice;
        }
        if (choice == 1)       //ʵ������Ա����Ϣ���� 
        {
            string tname, tsex, tphone, tjob, tdepartment;//������ʱ���������ڴ����û����� 
            int tage, tid;
            cout << "������Ա�����ţ�\n";
            cin >> tid;
            int p = 0;       //�ж�Ա�����ŵ��ظ� 
            while (p != 1) {     //����Ա�����Ų����ظ����ڴ˽��ж�Ա�������Ƿ����ظ� 
                p = 1;
                for (it = database.begin(); it != database.end(); it++)
                {
                    if ((**it).get_id() == tid)
                    {
                        p = 0;		//�����ظ���Ա�����ţ����++
                        break;			//����ѭ��
                    }
                }
                if (p == 0)
                {
                    cout << "��Ա�������Ѵ��ڣ�����������Ա�����ţ�";
                    cin >> tid;
                }
            }
            cout << "������Ա��������";
            cin >> tname;
            cout << "������Ա���Ա�,(��/Ů)��";
            cin >> tsex;
            while (tsex != "��" && tsex != "Ů")  //������Ա����Ϣ���м��ж� 
            {
                cout << "����Ա���Ա�������������룺\n";
                cin >> tsex;
            }
            cout << "������Ա�����䣺";
            cin >> tage;
            while (tage <= 0 || tage >= 100)  //������Ա����Ϣ���м��ж� 
            {
                cout << "����Ա������������������룺\n";
                cin >> tage;
            }
            cout << "������Ա���������ţ�";
            cin >> tdepartment;
            cout << "������Ա��ְλ��";
            cin >> tjob;
            cout << "������Ա����ϵ�绰��";
            cin >> tphone;
            //employee new_employee(tid,tname,tsex,tage,tphone,tdepartment,tjob);
            database.push_back(new employee(tid, tname, tsex, tage, tphone, tdepartment, tjob));  //ʹ��new �����µ�Ա����Ϣ 
            cout << "����Ա����Ϣ�ɹ���\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
        else {
            break;
        }
    }
    cout << "����س��Լ���......\n";
    getchar();
    getchar();

}
void del_employee()   //ɾ��Ա����Ϣ 
{
    cout << "��������ɾ��Ա����Ϣ���ܣ�\n";
    cout << "��ѡ��ɾ����ʽ��1.��Ա������ɾ��  2.��Ա������ɾ��  0.�˳�";
    int choice, p = 0;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 0)
    {
        cout << "����ѡ��������������룺";
        cin >> choice;
    }
    if (choice == 1)
    {
        cout << "��������Ҫɾ����Ա�����ţ�";    //���ݹ���ɾ��Ա����Ϣ
        int n;        //����n���ڴ�������Ա�����ţ�p�����ж��Ƿ��ѯ����Ӧ��Ա����Ϣ 
        cin >> n;
        for (it = database.begin(); it != database.end(); it++)   //ʹ�õ���������Ա����Ϣ 
        {
            if ((**it).get_id() == n)         //Ѱ�ҷ��ϵ�Ա����Ϣ 
            {
                p++;         //����ѯ����Ӧ��Ա����Ϣ����p++; 
                cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰      ����ʮ�������       ��Ч\n";
                cout.setf(ios::fixed);
                //               cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << setw(15) << attendance(**it) << setw(8)<< performance()<<endl;
                cout << "�Ƿ�ȷ��ɾ��Ա����Ϣ��1:YES  2:NO";    //ѡ��������ʾ ȷ����ʾ 
                int c;
                cin >> c;
                while (c != 1 && c != 2)       //���û�����������ƺ��ж� 
                {
                    cout << "����ѡ��������������룺";
                    cin >> choice;
                }
                if (c == 1)
                {
                    database.erase(it);        //����vector�������ɾ������ 
                    cout << "ɾ��Ա����Ϣ�ɹ���\n";     //���سɹ���ʾ�� 
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                    break;
                }
                else {
                    cout << "ȡ��ɾ��Ա����Ϣ������";     //����ȡ����ʾ�� 
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                    break;
                }

            }
        }
        if (p == 0) {   //��δ��ѯ����Ӧ��Ա����Ϣ������û�������ʾ 
            cout << "δ��ѯ����Ӧ��Ա����Ϣ�������������Ա�������Ƿ���ȷ\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();

        }
    }
    else if (choice == 2)
    {
        cout << "��������Ҫɾ����Ա��������";    //��������ɾ��Ա����Ϣ
        string name;        //����n���ڴ�������Ա��������p�����ж��Ƿ��ѯ����Ӧ��Ա����Ϣ 
        cin >> name;
        for (it = database.begin(); it != database.end(); it++)   //ʹ�õ���������Ա����Ϣ 
        {
            if ((**it).get_name() == name)         //Ѱ�ҷ��ϵ�Ա����Ϣ 
            {
                p++;         //����ѯ����Ӧ��Ա����Ϣ����p++; 
                cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                cout << (**it);
                /*
                ���´����е���������������cout<<(**it);
                cout.setf(ios::fixed);
                cout<<std::right<<setw(4)<<setfill('0')<<(**it).get_id()<<setfill(' ')<<setw(11)<<(**it).get_name()<<setw(9)<<(**it).get_sex()<<setw(9)<<(**it).get_age()<<setw(12)<<(**it).get_department()<<setw(10)<<(**it).get_job()<<setw(15)<<(**it).get_phone()<<endl;
                */
                cout << "�Ƿ�ȷ��ɾ��Ա����Ϣ��1:YES  2:NO";    //ѡ��������ʾ ȷ����ʾ 
                int c;
                cin >> c;
                while (c != 1 && c != 2)       //���û�����������ƺ��ж� 
                {
                    cout << "����ѡ��������������룺";
                    cin >> choice;
                }
                if (c == 1)
                {
                    database.erase(it);        //����vector�������ɾ������ 
                    cout << "ɾ��Ա����Ϣ�ɹ���\n";     //���سɹ���ʾ�� 
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                    break;
                }
                else {
                    cout << "ȡ��ɾ��Ա����Ϣ������";     //����ȡ����ʾ�� 
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                    break;
                }

            }
        }
        if (p == 0) {   //��δ��ѯ����Ӧ��Ա����Ϣ������û�������ʾ 
            cout << "δ��ѯ����Ӧ��Ա����Ϣ�������������Ա�������Ƿ���ȷ\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();

        }
    }
    else {
        cout << "�˳�ɾ��Ա����Ϣ���ܣ�\n"; //�˳�������ʾ 
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }
}
void modify_information()     //�޸�Ա����Ϣ 
{
    cout << "�����޸�Ա����Ϣ���ܣ�\n";
    cout << "��������Ҫ�޸ĵ�Ա������(����-1���˳�)��";  //����-1���˳������ܣ���ֹ�����û��󴥶�ɾ��Ա����Ϣ�������û����� 
    int n, p = 0;   //p�����ж��Ƿ���ڸ�Ա����n���ڱ����û����� 
    cin >> n;
    if (n == -1)   //�˳�������ʾ 
    {
        cout << "�˳��޸�Ա����Ϣ����\n";
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }
    else    //ִ��ɾ��Ա����Ϣ���� 
    {
        for (it = database.begin(); it != database.end(); it++) //�������� 
        {
            if ((**it).get_id() == n)    //�ҵ��û���Ҫɾ����Ա�� 
            {
                p++;       //�޸��жϱ�־ 
                cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "�޸�ѡ��1.�޸�����  2.�޸��Ա�  3.�޸�����  4.�޸Ĳ���  5.�޸�ְλ  6.�޸���ϵ�绰\n";  //�ṩ��ͬ���޸�ѡ�� 
                cout << "��������Ҫ�޸ĵ���Ϣ��";
                int choice;    //�����û�ѡ�� 
                cin >> choice;
                if (choice == 1)   //�޸Ĺ��ܵľ���ʵ�� 
                {
                    cout << "�������޸ĺ��Ա��������";
                    string c_name;
                    cin >> c_name;
                    (**it).set_name(c_name);   //����employee���е�set_xxx���������޸������Ϣ 
                    break;
                }
                else if (choice == 2) {
                    cout << "�������޸ĺ��Ա���Ա�";
                    string c_sex;
                    cin >> c_sex;
                    (**it).set_sex(c_sex);    //(**it)����employee����� 
                    break;
                }
                else if (choice == 3) {
                    cout << "�������޸ĺ��Ա�����䣺";
                    int c_age;
                    cin >> c_age;
                    (**it).set_age(c_age);
                    break;        //�޸Ľ������˳�ϵͳ 
                }
                else if (choice == 4) {
                    cout << "�������޸ĺ��Ա�����ţ�";
                    string c_department;
                    cin >> c_department;
                    (**it).change_department(c_department);
                    break;
                }
                else if (choice == 5) {
                    cout << "�������޸ĺ��Ա��ְλ��";
                    string c_job;
                    cin >> c_job;
                    (**it).change_job(c_job);
                    break;
                }
                else if (choice == 5) {
                    cout << "�������޸ĺ��Ա����ϵ�绰��";
                    string c_phone;
                    cin >> c_phone;
                    (**it).set_phone(c_phone);
                    break;
                }

            }
            else {         //��δ��ѯ��Ա����Ϣ���򵯳���ʾ 
                cout << "δ��ѯ�����Ա����Ϣ��\n";
                cout << "����س��Լ���......\n";
                getchar();
                getchar();
                break;
            }
        }
    }
}
void search_information()       //��ѯԱ����Ϣ��ʵ�� 
{
    cout << "�������ò�ѯԱ����Ϣ���ܣ�\n";
    cout << "����������Ҫ�Ĳ�ѯ��ʽ��\n1.�����Ų�ѯ  2.��������ѯ  3.�����Ų�ѯ  4.��ְλ��ѯ  0.�˳���ѯ\n";  //�ṩ��ͬ�Ĳ�ѯ��ʽ 
    int choice, p = 0;    //p�����ж��Ƿ�Ѱ�ҵ���Ӧ��Ա����Ϣ 
    cin >> choice;    //�ṩѡ��0�����˳�����ֹ�û����󴥶����Ȳ�ѯ 
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0)  //�����û���������ж� 
    {
        cout << "����ѡ�����\n";        //��ʾ������� 
        cin >> choice;
    }
    if (choice == 1) {
        int n;
        cout << "���������ѯ��Ա�����ţ�";    //����Ա�����Ų�ѯ��ʽ��ʵ�� 
        cin >> n;
        for (it = database.begin(); it != database.end(); it++)  //ʹ�õ�����it���������б��� 
        {
            if ((**it).get_id() == n)        //����ѯ����Ӧ��Ա����Ϣ 
            {
                p++;            //�жϱ�־λ++ 
                cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";     //���ϵͳ����Ӧ��Ա����Ϣ 
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ    ��ϵ�绰\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "����س��Լ���......\n";
                getchar();
                getchar();
                break;     //����Ա��������Ψһ�ģ���ѯ���Ժ��˳�ѭ�� 
            }
        }
        if (p == 0)    //��δ��ѯ����Ӧ��Ա����Ϣ������û�������ʾ��Ϣ 
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 2)   //����Ա�����������û���Ϣ��ѯ 
    {
        string sname;
        cout << "���������ѯ��Ա��������";
        cin >> sname;
        for (it = database.begin(); it != database.end(); it++)   //������it�������� 
        {
            if ((**it).get_name() == sname)    //����ѯ������������Ա����Ϣ 
            {
                p++;   //�жϱ�־λ++ 
                cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ    ��ϵ�绰\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
            }
            cout << "����س��Լ���......\n";  //���ǵ�Ա�������������ģ����������������б���������break�˳�ѭ�� 
            getchar();
            getchar();
        }
        if (p == 0)
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 3)       //��������Ҫ���ڲ�ѯ��ͬ���ŵ�Ա����Ϣ 
    {
        string sdepartment;
        cout << "���������ѯ�Ĳ������ƣ�";
        cin >> sdepartment;      //���ڴ�������Ĳ������� 
        for (it = database.begin(); it != database.end(); it++) //�������ı��� 
        {
            if ((**it).get_department() == sdepartment)   //����ѯ����Ӧ��Ա����Ϣ 
            {
                if (p == 0)   //��־λ���ж� 
                {
                    cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                    cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                }
                p++;       //��־λ++ 
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
            }            // 
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
        if (p == 0)   //��δ��ѯ����Ӧ��Ա����Ϣ�����ظ��û���ʾ 
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 4)    //���������ڲ�ѯ������ְͬλ��Ա����Ϣ 
    {
        string sjob;
        cout << "���������ѯ��ְλ���ƣ�";
        cin >> sjob;
        for (it = database.begin(); it != database.end(); it++)
        {
            if ((**it).get_department() == sjob)   //����ְλ��ͬ 
            {
                if (p == 0)   //��־λ���ж� 
                {
                    cout << "�Ѳ�ѯ����Ա����Ϣ���£�\n";
                    cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                }
                p++;
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "����س��Լ���......\n";
                getchar();
                getchar();
            }
        }
        if (p == 0)  //δ��ѯ��Ա����Ϣ����ʾ 
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else {   //�˳���ʾ 
        cout << "�˳���ѯԱ����Ϣ���ܣ�\n";
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }
}
void search_all()    //��ѯȫ��Ա����Ϣ 
{
    cout << "ϵͳ��ͬ�� " << database.size() << " ��Ա����Ϣ\n";  //��ʾԱ����Ϣ������ 
    if (database.size() != 0)      //����Ա����Ϣ 
    {
        cout << "ϵͳ���Ѵ����Ա����Ϣ���£�\n";
        cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
        for (it = database.begin(); it != database.end(); it++)   //��Ա����Ϣ���б������ 
        {
            cout.setf(ios::fixed);
            cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
        }
    }
    else {  //��ϵͳ��û��Ա����Ϣ��������ʾ 
        cout << "ϵͳ����ʱû��Ա����Ϣ��\n";
        cout << "������ͨ�����˵��е����Ա����Ϣ���뱾��Ա����Ϣ����Ա����Ϣ��\n";
    }
    cout << "����س��Լ���......\n";  //������ʾ 
    getchar();
    getchar();
}
void import_local_data()    //���뱾��Ա����Ϣ 
{
    cout << "�������õ��뱾���ļ����ܣ�\n";    //���빦�ܵ���ʾ 
    cout << "��ע�⣬���뱾���ļ����밴�ճ���涨�ĸ�ʽ�����򽫵��µ��뱾���ļ�ʧ�ܣ�\n"; //�涨�ĸ�ʽ����ʹ�ð����н���˵�� 
    cout << "�赼���txt�ļ��Ƿ��뱾ϵͳexe�ļ�λ��ͬһĿ¼�£�������0���˳������ܣ�1:YES  2:NO\n"; //�ṩ�˳�����Ա����Ϣ����ѡ�񣬷�ֹ�����û��󴥶�ǿ�Ƶ�����Ϣ 
    int choice;
    cin >> choice;  //����ѡ�� 
    while (choice != 1 && choice != 2 && choice != 0)  //�û�ѡ���ж� 
    {
        cout << "����������������룺";
        cin >> choice;
    }
    struct {     //ʹ�ýṹ��������ʱ������Ҫ�����Ա����Ϣ 
        char name[20];
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
    }temp[100];     //���һ�ε���100��Ա����Ϣ����Ҫ��ʹ�ð�����˵�� 
    if (choice == 1)
    {
        cout << "�������赼��txt���������ļ���������:data.txt\n";   //˵���ļ��ĸ�ʽ 
        char filename[30];   //�����ļ��� 
        cin >> filename;
        FILE* fp = NULL;
        fp = fopen(filename, "r");  //���ļ� 
        if (fp != NULL)    //���ļ��ɹ��� 
        {
            int m = 0, i = 0, p;
            cout << "���ļ��ɹ���\n";
            if (feof(fp))   //���ļ�Ϊ�գ��򷵻���ʾ 
            {
                cout << "δ��⵽�κ�Ա����Ϣ��\n";
                cout << "�����¼������txt�ļ����ݻ��ļ�����\n";
                cout << "����س��Լ���......";
                getchar();
                getchar();
            }
            else {  //���ļ���Ϊ�� 
                cout << "�Ѽ�⵽����ѧ����Ϣ���Ƿ���ϵͳ��1��YES  2:NO\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                while (!feof(fp))  //���ļ��е���Ϣ��ʱ������temp�ṹ���в��������Ļ�� 
                {
                    fscanf(fp, "%d%s%s%d%s%s%s\n", &temp[i].id, &temp[i].name, &temp[i].sex, &temp[i].age, &temp[i].department, &temp[i].job, &temp[i].phone);
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << temp[i].id << setfill(' ') << setw(11) << temp[i].name << setw(9) << temp[i].sex << setw(9) << temp[i].age << setw(12) << temp[i].department << setw(10) << temp[i].job << setw(15) << temp[i].phone << endl;
                    i++;
                    m++;
                }
                cin >> p; //�Ƿ���Ҫ����ϵͳ 
                if (p == 1)  //����ϵͳ���� 
                {
                    for (i = 0; i < m; i++)  //����ϵͳ 
                    {
                        database.push_back(new employee(temp[i].id, temp[i].name, temp[i].sex, temp[i].age, temp[i].phone, temp[i].department, temp[i].job));
                    }
                    cout << "����Ա����Ϣ�ɹ���\n";
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                }
                else {  //��������ϵͳ��temp�ṹ�彫�溯���˳����ͷ��ڴ� 
                    cout << "��������Ա����Ϣ��\n";
                    cout << "����س��Լ���......";
                    getchar();
                    getchar();
                }
            }

        }
        else {    //���ļ�ʧ�ܣ������û���ʾ 
            cout << "���ļ�ʧ�ܣ�\n";
            cout << "��������txt�ļ�����·����\n";
            cout << "����س��Լ���......";
            getchar();
            getchar();
        }

    }
    else if (choice == 2) {
        cout << "�������赼���ļ�������·�������磺C:\\Users\\DELL\\Desktop\\data.txt \n";   //���û���Ҫ������·���´� 
        char path[45];       //����·��ʾ��   
        cin >> path;
        FILE* fp = NULL;
        fp = fopen(path, "r");
        if (fp != NULL)    //�����ļ��ɹ� 
        {
            int m = 0, i = 0, p;
            cout << "���ļ��ɹ���\n";
            if (feof(fp))    //���ļ�Ϊ�� 
            {
                cout << "δ��⵽�κ�Ա����Ϣ��\n";
                cout << "�����¼������txt�ļ����ݻ��ļ�����\n";
                cout << "����س��Լ���......";
                getchar();
                getchar();
            }
            else {     //���ļ���Ϊ�� 
                cout << "�Ѽ�⵽����ѧ����Ϣ���Ƿ���ϵͳ��1��YES  2:NO\n";
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                while (!feof(fp))  //�ýṹ��temp��ʱ������Ϣ�������Ϣ����Ļ�� 
                {
                    fscanf(fp, "%d%s%s%d%s%s%s\n", &temp[i].id, &temp[i].name, &temp[i].sex, &temp[i].age, &temp[i].department, &temp[i].job, &temp[i].phone);
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << temp[i].id << setfill(' ') << setw(11) << temp[i].name << setw(9) << temp[i].sex << setw(9) << temp[i].age << setw(12) << temp[i].department << setw(10) << temp[i].job << setw(15) << temp[i].phone << endl;
                    i++;
                    m++;
                }
                cin >> p;  //��ѡ����ϵͳ 
                if (p == 1)
                {
                    for (i = 0; i < m; i++)
                    {
                        database.push_back(new employee(temp[i].id, temp[i].name, temp[i].sex, temp[i].age, temp[i].phone, temp[i].department, temp[i].job));
                    }
                    cout << "����Ա����Ϣ�ɹ���\n";
                    cout << "����س��Լ���......\n";
                    getchar();
                    getchar();
                }
                else {  //����������ϵͳ 
                    cout << "��������Ա����Ϣ��\n";
                    cout << "����س��Լ���......";
                    getchar();
                    getchar();
                }
            }

        }
        else {  //�����ļ�ʧ�� 
            cout << "���ļ�ʧ�ܣ�\n";
            cout << "��������txt�ļ�����·����\n";
            cout << "����س��Լ���......";
            getchar();
            getchar();
        }
    }
    else {  //�˳�����Ա����Ϣ���� 
        cout << "�˳����뱾�����ݹ��ܣ�\n";
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }

}
void save_data()   //����Ա����Ϣ 
{
    cout << "�������ñ���ϵͳ���ݹ��ܣ�";
    int i = 0;
    int m = 0;
    cout << "ϵͳ���Ѵ����Ա����Ϣ���£�\n";
    cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
    for (it = database.begin(); it != database.end(); it++)
    {
        cout.setf(ios::fixed);
        cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
    }
    cout << "���� " << database.capacity() << " ����Ϣ\n";    //��ʾ�ܹ���Ϣ 
    cout << "�Ƿ���Ҫ�����ڱ�ϵͳexe��ǰĿ¼�£�(����0���˳�)  1.YES  2.NO";  //����0���˳�ϵͳ 
    /*
    for(i=0,it=database.begin();it!=database.end();i++,it++)
    {
     temp[i].id=(**it).get_id();
     strcpy(temp[i].name,(**it).get_name());
    }
    */
    int choice;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 0)
    {
        cout << "����ѡ��������������룺";
        cin >> choice;
    }
    if (choice == 1)   //����Ա����Ϣ����ǰĿ¼�� 
    {
        char filename[20];
        cout << "��������Ҫ�������ݵ��ļ��������磺data.txt \n";  //�ļ��� 
        char name[20];     //��ʱ�ַ������ڴ�����Ϣ 
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
        cin >> filename;
        FILE* fp = NULL;
        fp = fopen(filename, "w");    //���ļ���Ϣ 
        if (fp != NULL)
        {
            for (it = database.begin(); it != database.end(); it++)  //����ִ�������Ϣ���� 
            {
                id = (**it).get_id();
                age = (**it).get_age();
                strcpy(name, (**it).get_name().c_str());    //c_str()�������ڽ�string���͵Ķ���ת��Ϊc���ַ��� 
                strcpy(sex, (**it).get_sex().c_str());
                strcpy(department, (**it).get_department().c_str());
                strcpy(job, (**it).get_job().c_str());
                strcpy(phone, (**it).get_phone().c_str());
                cout << name << sex;
                fprintf(fp, "%d %s %s %d %s %s %s\n", id, name, sex, age, department, job, phone);  //fprintf���������Ϣ���ļ�  
            }
            fclose(fp);
            cout << "����Ա����Ϣ�ɹ���\n";   //�ɹ���ʾ 
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
        else {    //���ļ�ʧ����ʾ 
            cout << "��txt�ı�ʧ�ܣ�\n";
            cout << "����Ա����Ϣʧ�ܣ�\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 2)   //���浽��һ��Ŀ¼�� 
    {
        char path[45];
        cout << "�����������Ĵ���·�����ļ��������磺���磺C:\\Users\\DELL\\Desktop\\data.txt \n";//������Ŀ¼·�� 
        char name[20];
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
        cin >> path;  //·�� 
        FILE* fp = NULL;
        fp = fopen(path, "w+");  //��w+����ʽ�� 
        if (fp != NULL)
        {
            for (it = database.begin(); it != database.end(); it++)
            {
                id = (**it).get_id();
                age = (**it).get_age();
                strcpy(name, (**it).get_name().c_str());
                strcpy(sex, (**it).get_sex().c_str());
                strcpy(department, (**it).get_department().c_str());
                strcpy(job, (**it).get_job().c_str());
                strcpy(phone, (**it).get_phone().c_str());
                //fprintf(fp,"%4d %s %s %d %s %s %s\n",(**it).get_id(),(**it).get_name().c_str(),(**it).get_sex().c_str(),(**it).get_age(),(**it).get_department().c_str(),(**it).get_job().c_str(),(**it).get_phone().c_str());    
                fprintf(fp, "%4d %s %s %d %s %s %s\n", id, name, sex, age, department, job, phone);
            }
            fclose(fp);
            cout << "����Ա����Ϣ�ɹ���\n";  //�ɹ���ʾ 
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
        else {  //ʧ����ʾ 
            cout << "��txt�ı�ʧ�ܣ�\n";
            cout << "����Ա����Ϣʧ�ܣ�\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
    else {  //�˳�ϵͳ 
        cout << "����س����˳�����ϵͳ���ݹ��ܣ�\n";
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }
}
void help()  //�������� 
{
    printf("���Ƿ���Ҫ�򿪰����ļ�readme.txt��1��YES 2:NO����\n");  //�����ļ�����������ʹ�û�ֱ�Ӵ�readme.txt����ǿ�û����� 
    int p;
    cin >> p;
    if (p == 1)
    {
        system("start readme.txt");  //���ļ���ʽ�� 
    }
    else {               //Ҳ����ֱ���ڱ���������ʾ�������� 
        printf("��ӭʹ��Ա����Ϣ����ϵͳ3.1.2\n");
        printf("��ϵͳΪԱ����Ϣ����ϵͳ3.1.2����Ҫ����ʵ�ֶ���ҵԱ����Ϣ�Ĺ���\n");
        printf("��ϵͳ�ṩ�Ĺ����У�\n1.����Ա����Ϣ��2.ɾ��Ա����Ϣ��3.�޸�Ա����Ϣ��4.��ѯԱ����Ϣ��5.�鿴ȫ����Ϣ��6.���뱾�����ݡ�7.����ϵͳ���ݡ�8.�û����Ի����õȹ���\n");
        printf("��������Ҫ��ѯ�Ĺ�����ţ�����0���˳���������");
        int choice;
        cin >> choice;
        while (choice < 0 || choice >8) {
            cout << "����ѡ�����\n";
            cout << "��������������ѡ��";
            cin >> choice;
        }
        switch (choice)
        {
        case 1: cout << "��ʹ������Ա����Ϣ����ʱ���밴����Ļ��ʾ����������Ա������Ӧ��Ϣ����ע�⣬Ա�����Ž���Ψһ�ģ���������ͬ��Ա�����Ž���ϵͳ��ʾ����������Ա����Ϣ������\n";
            cout << "�ڱ�ϵͳ�У���û�д洢�����ļ��������ϵͳ������Ҫ����Ա����Ϣ�����أ��������˵�ѡ�񱣴�Ա����Ϣ����\n";
            cout << "������ϵͳ��ʾ���в�����\n";
            break;
        case 2: cout << "��ʹ��ɾ��Ա����Ϣ����ʱ����������ɾ����Ա�����Ż�������������ʾ������Ӧ������ɾ����Ա����Ϣ��Ϊ��ϵͳ\n";
            cout << "�д����Ա����Ϣ������Ӱ�������ص�Ա����Ϣ\n";
            break;
        case 3: cout << "��ʹ���޸�Ա����Ϣʱ������Ҫ�ṩ���޸ĵ�Ա�����ţ���������ʾѡ��������޸ĵ����ݣ��޸ĵ�Ա��\n";
            cout << "��ϢΪ��ϵͳ�д����Ա����Ϣ��������Ҫ���ڱ��棬��ѡ���ڿ�ʼ�˵�ѡ�񱣴�Ա����Ϣ����\n";
            cout << "������ϵͳ��ʾ���в���\n";
            break;
        case 4: cout << "��ʹ�ò�ѯԱ����Ϣ���ܵĹ���ʱ�������Ը�����ʾ���ղ�ͬ�ķ�ʽ���в�ѯ����ע�⣺��ֻ�ܲ�ѯ����ϵͳ�д����Ա����Ϣ��\n";
            cout << "�޷���ѯ��δ����ϵͳ��Ա����Ϣ��������Ҫ����Ա����Ϣ�����ڲ˵���ѡ����Ա����Ϣ������ϵͳ��ʾ���в���\n";
            break;
        case 5: cout << "��ʹ�ò鿴Ա����Ϣʱ����ֻ�ܲ鿴��ϵͳ�д����Ա����Ϣ�����赼�������ص�Ա����Ϣ�����ڿ�ʼ�˵���\n";
            cout << "ѡ����Ա����Ϣ��������ʾ����\n";
            break;
        case 6: cout << "��ʹ�õ��뱾��Ա����Ϣʱ���밴����ʾ������ȷ��txt����·�����ļ�������ע�⣬�������ص�Ա����Ϣtxt�ļ���\n";
            cout << "��ȷ���������Ա����Ϣ�ĸ�ʽΪ������ ���� �Ա� ���� ְλ ��ϵ��ʽ��txt�ļ��ı����ʽ�����ǣ�ANSI��UTF-8��BOM��ʽ�����򽫿����޷�����������Ϣ��ÿ������Ϣ���Կո�ָ���ÿ�н�����һ��Ա����Ϣ\n";
            cout << "��ÿ����ർ��100��Ա����Ϣ�����򽫿��ܵ���ϵͳ�޷���ȷ�ĵ���Ա����Ϣ������\n";
            break;
        case 7: cout << "��ʹ�ñ���Ա����Ϣ�Ĺ���ʱ��������Ҫ�����������ļ��У���ȷ��������ȷ���ļ�·�������򽫿��ܵ���ϵͳ�޷�Ϊ������Ա����Ϣ\n";
            cout << "�������أ�����\n";
            break;
        case 8: cout << "��ʹ�ø��Ի����õĹ���ʱ�������԰�����ʾѡ����ϲ���ı�����ɫ��������ɫ��Ҳ����ȡ����ѡ�����ɫ���ָ�Ĭ������\n";
            break;
        }

    }
    printf("����س��Լ���......\n");
    getchar();
    getchar();
}
void about_us()     //�������� 
{
    cout << "�ǳ���л��ʹ�ñ���Ʒ��\n";   //��л 
    cout << "������ʹ�õ���Ա����Ϣ����ϵͳ3.1.2\n";  //�汾��Ϣ 
    cout << "�������������£�\n";       //�����Ŷ����� 
    cout << "1\n";
    cout << "2\n";
    cout << "3\n";
    cout << "�������κ����ʻ��뷨����ӭ��ϵ���Ͽ�����Ա\n";  //�ɻ�  
    cout << "�����ŶӶԱ�ϵͳ�������ս���Ȩ��δ�������Ͻ������κ���ҵ��;������\n";//��Ȩ���� 
    cout << "����س��Լ���......\n";
    getchar();
    quit();   //�˳�ϵͳ tchar(); 
}
void quit()   //�˳�ϵͳ 
{
    cout << "��ȷ��Ҫ�˳�ϵͳ��1��ȷ���˳�  2:ȡ���˳�\n";
    cout << "����������ѡ��\n";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        system("taskkill -f -im Ա����Ϣ����ϵͳ3.1.2.exe");
    }

}
void set_up()   //���Ի��������� Ҳ���������޸�����ڴ�ĸ��Ի����ã�������ɷ���
{
    cout << "��ӭ�����û����Ի���������\n";
    cout << "1.��������屳����ɫ���ã�2.�ָ�Ĭ������0.�˳�";  //�ṩ������������ɫ���ã�����ӻָ�Ĭ�����õĹ��� 
    cout << "����������ѡ��";
    int choice;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 0) {   //���û�ѡ������ж� 
        cout << "����ѡ�������������������ѡ��";
        cin >> choice;
    }
    if (choice == 1)   //���û���Ҫ������ɫ 
    {
        cout << "��ɫ�˵����£�\n";
        cout << "0 = ��ɫ       8 = ��ɫ\n";
        cout << "1 = ��ɫ       9 = ����ɫ\n";
        cout << "2 = ��ɫ       A = ����ɫ\n";
        cout << "3 = ǳ��ɫ     B = ��ǳ��ɫ\n";
        cout << "4 = ��ɫ       C = ����ɫ\n";
        cout << "5 = ��ɫ       D = ����ɫ\n";
        cout << "6 = ��ɫ       E = ����ɫ\n";
        cout << "7 = ��ɫ       F = ����ɫ\n";
        cout << "����������Ҫ�ı�����ɫ��";
        cin >> a;   //aΪ��cpp��ͷ�����ȫ�ֱ��� 
        while (a[0] < '0' || a[0]>'F') //���û���������ж� 
        {
            cout << "����ѡ�������������������ѡ��";
            cin >> a;
        }
        cout << "����������Ҫ��������ɫ(���������뱳����ɫ��ͬ����ɫ����)��";
        cin >> b;   //bΪ��cpp��ͷ�����ȫ�ֱ��� 
        while (b[0] < '0' || b[0]>'F')    //���û���������ж� 
        {
            cout << "����ѡ�������������������ѡ��";
            cin >> b;
        }
        strcat(order, a);  //ִ���ַ���ƴ�Ӳ��� 
        strcat(order, b);
        system(order);  //���Ի��޸Ĵ��ڱ�����ɫ��������ɫ 
        j++;   //�޸ĸ��Ի����ñ�־λ��jΪ��cpp��ͷ�����ȫ�ֱ���
        cout << "�޸Ľ����������ɫ�ɹ���\n";  //������ʾ 
        printf("����س��Լ���......\n");
        getchar();
        getchar();
    }
    else if (choice == 2)  //�ָ�Ĭ������ 
    {
        j = 0;
        strcpy(order, "color ");
        strcpy(a, "F");
        strcpy(b, "1");
        cout << "�ָ�Ĭ�����óɹ���\n";
    }
    else {  //�˳����Ի����� 
        cout << "����س����˳�......";
        getchar();
        getchar();
    }

}
void sign()
{
    cout << "�������ò�ѯԱ��ǩ�����ܣ�\n";
    cout << "���������Ĺ��š�\n";
    int  p = 0;    //p�����ж��Ƿ�Ѱ�ҵ���Ӧ��Ա����Ϣ 
    int n;
    string pw;
    cin >> n;
    for (it = database.begin(); it != database.end(); it++)  //ʹ�õ�����it���������б��� 
    {
        if ((**it).get_id() == n)        //����ѯ����Ӧ��Ա����Ϣ 
        {
            p++;            //�жϱ�־λ++ 
            cout << "�������������룺\n";
            cin >> pw;
            if (pw.compare((**it).get_password()))
            {
                (**it).attendance.push_back(1);
            }
            else
            {
                cout << "�������\n";
                cout << "����س��Լ���......\n";
            }
        }

        if (p == 0)    //��δ��ѯ����Ӧ��Ա����Ϣ������û�������ʾ��Ϣ 
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
}

void em_modify_information()     //�޸�Ա����Ϣ 
{
    cout << "�����޸�Ա����Ϣ���ܣ�\n";
    cout << "��������Ĺ��ź�����(����-1���˳�)��";  //����-1���˳������ܣ���ֹ�����û��󴥶�ɾ��Ա����Ϣ�������û����� 
    int n, p = 0;   //p�����ж��Ƿ���ڸ�Ա����n���ڱ����û����� 
    cout << "���������Ĺ��š�\n";
    string pw;
    cin >> n;
    if (n == -1)   //�˳�������ʾ 
    {
        cout << "�˳��޸�Ա����Ϣ����\n";
        cout << "����س��Լ���......\n";
        getchar();
        getchar();
    }

    else    //ִ��ɾ��Ա����Ϣ���� 
    {
        for (it = database.begin(); it != database.end(); it++)  //ʹ�õ�����it���������б��� 
        {
            if ((**it).get_id() == n)        //����ѯ����Ӧ��Ա����Ϣ 
            {
                p++;            //�жϱ�־λ++ 
                cout << "�������������룺\n";
                cin >> pw;
                if (pw.compare((**it).get_password()))
                {
                    cout << "Ա����Ϣ���£�\n";
                    cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ      ��ϵ�绰\n";
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                    cout << "�޸�ѡ��1.�޸�����  2.�޸��Ա�  3.�޸�����  4.�޸���ϵ�绰  5.�޸�����\n";  //�ṩ��ͬ���޸�ѡ�� 
                    cout << "��������Ҫ�޸ĵ���Ϣ��";
                    int choice;    //�����û�ѡ�� 
                    cin >> choice;
                    if (choice == 1)   //�޸Ĺ��ܵľ���ʵ�� 
                    {
                        cout << "�������޸ĺ��Ա��������";
                        string c_name;
                        cin >> c_name;
                        (**it).set_name(c_name);   //����employee���е�set_xxx���������޸������Ϣ 
                        break;
                    }
                    else if (choice == 2) {
                        cout << "�������޸ĺ��Ա���Ա�";
                        string c_sex;
                        cin >> c_sex;
                    }
                }
            }
        }
    }
}
void em_search_information()       //��ѯԱ����Ϣ��ʵ�� 
{
    cout << "�������ò�ѯԱ����Ϣ���ܣ�\n";
    cout << "���������Ĺ��š�\n";
    int  p = 0;    //p�����ж��Ƿ�Ѱ�ҵ���Ӧ��Ա����Ϣ 
    int n;
    string pw;
    cin >> n;
    for (it = database.begin(); it != database.end(); it++)  //ʹ�õ�����it���������б��� 
    {
        if ((**it).get_id() == n)        //����ѯ����Ӧ��Ա����Ϣ 
        {
            p++;            //�жϱ�־λ++ 
            cout << "�������������룺\n";
            cin >> pw;
            if (pw.compare((**it).get_password()))
            {
                cout << "Ա����Ϣ���£�\n";     //���ϵͳ����Ӧ��Ա����Ϣ 
                cout << "�� ��    ��  ��     ��  ��   ��  ��    ��  ��    ְ  λ    ��ϵ�绰    ����\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << setw(15) << (**it).get_password() << endl;
                cout << "����س��Լ���......\n";
                getchar();
                getchar();
                break;     //����Ա��������Ψһ�ģ���ѯ���Ժ��˳�ѭ�� 
            }
        }
        else
        {
            cout << "�������\n";
            cout << "����س��Լ���......\n";
        }

        if (p == 0)    //��δ��ѯ����Ӧ��Ա����Ϣ������û�������ʾ��Ϣ 
        {
            cout << "δ��ѯ�����Ա����Ϣ��\n";
            cout << "����س��Լ���......\n";
            getchar();
            getchar();
        }
    }
}