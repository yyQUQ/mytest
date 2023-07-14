#include<iostream> 
#include<vector>     //导入vector头文件 
#include"employee.h"    //导入employee头文件用于对员工信息进行操作 
#include<stdio.h>
using namespace std;
//功能函数的声明 
void add_employee();    //增添员工信息    
void del_employee();   //删除员工信息
void modify_information();  //修改员工信息
void search_information();  //查找员工信息
void import_local_data();  //导入本地数据 
void save_data();    //保存系统数据 
void search_all();    //查询全部信息 
void help();     //使用帮助 
void about_us();    //关于我们  
void quit();     //退出程序 
void set_up();     //个性化设置  
void sign();
void em_modify_information();
void em_search_information();
//声明vector容器和对应的迭代器作为全局变量，便于各个功能函数间的调用 
extern vector<employee*> database;
extern  vector<employee*>::iterator it;
//关于用户个性化颜色设置中的变量 
char order[20] = "color ";
char a[2] = "F", b[2] = "1";
int j = 0;    //用于判断用户是否已经进行过个性化设置 
int main()
{
    int choice=0;    //用户选择 
    while (1)
    {
        system("cls");    //清屏操作 
        if (j == 0) {     //若用户未进行个性化设置 
            system("color F1");   //默认个性化设置 
        }
        else {
            system(order);    //启用用户的个性化设置 
        }
        //主菜单
        cout << "+-----------欢迎使用员工信息管理系统3.1.2-------------+\n";
        cout << "|*             ->  1.员工系统  <-                *|\n";
        cout << "|*             ->  2.管理员系统  <-                *|\n";
        while (choice != 1 && choice != 2)
        {
            cout << "选项输入错误，请重新输入： ";
            cin >> choice;
        }
        try {        //异常处理代码 
            switch (choice)     //switch语句根据用户选择调用相应的功能函数 
            {
            case 1:
                //员工菜单
                cout << "+-----------欢迎使用员工信息管理系统3.1.2-------------+\n";
                cout << "|*             ->  1.查询信息  <-                *|\n";
                cout << "|*             ->  2.更改信息  <-                *|\n";
                cout << "|*             ->  3.签到  <-                *|\n";
                cout << "请输入您的选择：";
                cin >> choice;
                //对于用户输入的选择进行判断 
                while (choice != 1 && choice != 2 && choice != 3)
                {
                    cout << "选项输入错误，请重新输入： ";
                    cin >> choice;
                }
                try {        //异常处理代码 
                    switch (choice)     //switch语句根据用户选择调用相应的功能函数 
                    {
                    case 1:
                        em_search_information();  //增 
                        break;
                    case 2:
                        em_modify_information();  //删 
                        break;
                    case 3:
                        sign();//改 
                        break;

                    }
                }
                catch (int error)    //程序异常处理 
                {
                    cout << "catch(int)" << error << endl;
                    cout << "程序异常终止！\n";
                }
                break;
            case 2:
                //主菜单 
                cout << "+-----------欢迎使用员工信息管理系统3.1.2-------------+\n";
                cout << "|*             ->  1.增添员工信息  <-                *|\n";
                cout << "|*             ->  2.删除员工信息  <-                *|\n";
                cout << "|*             ->  3.修改员工信息  <-                *|\n";
                cout << "|*             ->  4.查询员工信息  <-                *|\n";
                cout << "|*             ->  5.查看全部信息  <-                *|\n";
                cout << "|*             ->  6.导入本地数据  <-                *|\n";
                cout << "|*             ->  7.保存系统数据  <-                *|\n";
                cout << "|*             ->  8.系统使用帮助  <-                *|\n";
                cout << "|*             ->  9.关于我们      <-                *|\n";
                cout << "|*             ->  10.个性化设置   <-                *|\n";
                cout << "|*             ->  0.退出系统      <-                *|\n";
                cout << "|*            版权所有           翻版必究            *|\n";
                cout << "|*---------------------------------------------------*|\n";
                cout << "请输入您的选择：";
                cin >> choice;
                //对于用户输入的选择进行判断 
                while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 0)
                {
                    cout << "选项输入错误，请重新输入： ";
                    cin >> choice;
                }
                try {        //异常处理代码 
                    switch (choice)     //switch语句根据用户选择调用相应的功能函数 
                    {
                    case 1:
                        add_employee();  //增 
                        break;
                    case 2:
                        del_employee();  //删 
                        break;
                    case 3:
                        modify_information();//改 
                        break;
                    case 4:
                        search_information();//查 
                        break;
                    case 5:
                        search_all();    //查 
                        break;
                    case 6:
                        import_local_data();//导入本地数据 
                        break;
                    case 7:
                        save_data();  //保存系统数据 
                        break;
                    case 8:
                        help();    //使用帮助 
                        break;
                    case 9:
                        about_us();   //关于我们 
                        break;
                    case 0:
                        quit();    //退出系统 
                        break;
                    case 10:
                        set_up();
                        break;

                    }
                }
                catch (int error)    //程序异常处理 
                {
                    cout << "catch(int)" << error << endl;
                    cout << "程序异常终止！\n";
                }
            }
            break;

        }
        catch (int error)    //程序异常处理 
        {
            cout << "catch(int)" << error << endl;
            cout << "程序异常终止！\n";
        }
        //主菜单 
        cout << "+-----------欢迎使用员工信息管理系统3.1.2-------------+\n";
        cout << "|*             ->  1.增添员工信息  <-                *|\n";
        cout << "|*             ->  2.删除员工信息  <-                *|\n";
        cout << "|*             ->  3.修改员工信息  <-                *|\n";
        cout << "|*             ->  4.查询员工信息  <-                *|\n";
        cout << "|*             ->  5.查看全部信息  <-                *|\n";
        cout << "|*             ->  6.导入本地数据  <-                *|\n";
        cout << "|*             ->  7.保存系统数据  <-                *|\n";
        cout << "|*             ->  8.系统使用帮助  <-                *|\n";
        cout << "|*             ->  9.关于我们      <-                *|\n";
        cout << "|*             ->  10.个性化设置   <-                *|\n";
        cout << "|*             ->  0.退出系统      <-                *|\n";
        cout << "|*            版权所有           翻版必究            *|\n";
        cout << "|*---------------------------------------------------*|\n";
        cout << "请输入您的选择：";
        cin >> choice;
        //对于用户输入的选择进行判断 
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 0)
        {
            cout << "选项输入错误，请重新输入： ";
            cin >> choice;
        }
        try {        //异常处理代码 
            switch (choice)     //switch语句根据用户选择调用相应的功能函数 
            {
            case 1:
                add_employee();  //增 
                break;
            case 2:
                del_employee();  //删 
                break;
            case 3:
                modify_information();//改 
                break;
            case 4:
                search_information();//查 
                break;
            case 5:
                search_all();    //查 
                break;
            case 6:
                import_local_data();//导入本地数据 
                break;
            case 7:
                save_data();  //保存系统数据 
                break;
            case 8:
                help();    //使用帮助 
                break;
            case 9:
                about_us();   //关于我们 
                break;
            case 0:
                quit();    //退出系统 
                break;
            case 10:
                set_up();
                break;

            }
        }
        catch (int error)    //程序异常处理 
        {
            cout << "catch(int)" << error << endl;
            cout << "程序异常终止！\n";
        }
    }
}
double attendance(const employee& v)
{
    double rate;
    int n = 0;//计数器
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
void add_employee()    //增添员工信息 
{
    cout << "正在启用增添员工信息功能！\n";  //启用功能选择，防止因用户误触二增添员工信息 
    while (1) {         //while循环，便于多次增添员工信息 
        cout << "1.增添员工信息   0.退出\n";  //选择菜单 
        cout << "请输入您的选择";
        int choice;
        cin >> choice;
        while (choice != 1 && choice != 0)   //用户选择判断 
        {
            cout << "输入选择错误，请重新输入：";
            cin >> choice;
        }
        if (choice == 1)       //实现增添员工信息功能 
        {
            string tname, tsex, tphone, tjob, tdepartment;//创建临时变量，用于储存用户输入 
            int tage, tid;
            cout << "请输入员工工号：\n";
            cin >> tid;
            int p = 0;       //判断员工工号的重复 
            while (p != 1) {     //由于员工工号不能重复，在此将判断员工工号是否有重复 
                p = 1;
                for (it = database.begin(); it != database.end(); it++)
                {
                    if ((**it).get_id() == tid)
                    {
                        p = 0;		//发现重复的员工工号，标记++
                        break;			//跳出循环
                    }
                }
                if (p == 0)
                {
                    cout << "该员工工号已存在，请重新输入员工工号：";
                    cin >> tid;
                }
            }
            cout << "请输入员工姓名：";
            cin >> tname;
            cout << "请输入员工性别,(男/女)：";
            cin >> tsex;
            while (tsex != "男" && tsex != "女")  //对输入员工信息进行简单判断 
            {
                cout << "输入员工性别错误，请重新输入：\n";
                cin >> tsex;
            }
            cout << "请输入员工年龄：";
            cin >> tage;
            while (tage <= 0 || tage >= 100)  //对输入员工信息进行简单判断 
            {
                cout << "输入员工年龄错误，请重新输入：\n";
                cin >> tage;
            }
            cout << "请输入员工所属部门：";
            cin >> tdepartment;
            cout << "请输入员工职位：";
            cin >> tjob;
            cout << "请输入员工联系电话：";
            cin >> tphone;
            //employee new_employee(tid,tname,tsex,tage,tphone,tdepartment,tjob);
            database.push_back(new employee(tid, tname, tsex, tage, tphone, tdepartment, tjob));  //使用new 保存新的员工信息 
            cout << "增添员工信息成功！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
        else {
            break;
        }
    }
    cout << "输入回车以继续......\n";
    getchar();
    getchar();

}
void del_employee()   //删除员工信息 
{
    cout << "正在启用删除员工信息功能！\n";
    cout << "请选择删除方式：1.按员工工号删除  2.按员工姓名删除  0.退出";
    int choice, p = 0;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 0)
    {
        cout << "输入选择错误，请重新输入：";
        cin >> choice;
    }
    if (choice == 1)
    {
        cout << "请输入您要删除的员工工号：";    //跟据工号删除员工信息
        int n;        //变量n用于储存输入员工工号，p用于判断是否查询到相应的员工信息 
        cin >> n;
        for (it = database.begin(); it != database.end(); it++)   //使用迭代器遍历员工信息 
        {
            if ((**it).get_id() == n)         //寻找符合的员工信息 
            {
                p++;         //若查询到相应的员工信息，则p++; 
                cout << "已查询到的员工信息如下：\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话      近三十天出勤率       绩效\n";
                cout.setf(ios::fixed);
                //               cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << setw(15) << attendance(**it) << setw(8)<< performance()<<endl;
                cout << "是否确认删除员工信息？1:YES  2:NO";    //选择输入提示 确认提示 
                int c;
                cin >> c;
                while (c != 1 && c != 2)       //对用户输入进行限制和判断 
                {
                    cout << "输入选项错误！请重新输入：";
                    cin >> choice;
                }
                if (c == 1)
                {
                    database.erase(it);        //调用vector容器类的删除函数 
                    cout << "删除员工信息成功！\n";     //返回成功提示！ 
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                    break;
                }
                else {
                    cout << "取消删除员工信息操作！";     //返回取消提示！ 
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                    break;
                }

            }
        }
        if (p == 0) {   //若未查询到相应的员工信息，则给用户返回提示 
            cout << "未查询到相应的员工信息，请检查您输入的员工工号是否正确\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();

        }
    }
    else if (choice == 2)
    {
        cout << "请输入您要删除的员工姓名：";    //跟据姓名删除员工信息
        string name;        //变量n用于储存输入员工姓名，p用于判断是否查询到相应的员工信息 
        cin >> name;
        for (it = database.begin(); it != database.end(); it++)   //使用迭代器遍历员工信息 
        {
            if ((**it).get_name() == name)         //寻找符合的员工信息 
            {
                p++;         //若查询到相应的员工信息，则p++; 
                cout << "已查询到的员工信息如下：\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                cout << (**it);
                /*
                以下代码中的这段输出都可以用cout<<(**it);
                cout.setf(ios::fixed);
                cout<<std::right<<setw(4)<<setfill('0')<<(**it).get_id()<<setfill(' ')<<setw(11)<<(**it).get_name()<<setw(9)<<(**it).get_sex()<<setw(9)<<(**it).get_age()<<setw(12)<<(**it).get_department()<<setw(10)<<(**it).get_job()<<setw(15)<<(**it).get_phone()<<endl;
                */
                cout << "是否确认删除员工信息？1:YES  2:NO";    //选择输入提示 确认提示 
                int c;
                cin >> c;
                while (c != 1 && c != 2)       //对用户输入进行限制和判断 
                {
                    cout << "输入选项错误！请重新输入：";
                    cin >> choice;
                }
                if (c == 1)
                {
                    database.erase(it);        //调用vector容器类的删除函数 
                    cout << "删除员工信息成功！\n";     //返回成功提示！ 
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                    break;
                }
                else {
                    cout << "取消删除员工信息操作！";     //返回取消提示！ 
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                    break;
                }

            }
        }
        if (p == 0) {   //若未查询到相应的员工信息，则给用户返回提示 
            cout << "未查询到相应的员工信息，请检查您输入的员工工号是否正确\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();

        }
    }
    else {
        cout << "退出删除员工信息功能！\n"; //退出功能提示 
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }
}
void modify_information()     //修改员工信息 
{
    cout << "启用修改员工信息功能！\n";
    cout << "请输入需要修改的员工工号(输入-1以退出)：";  //输入-1以退出本功能，防止由于用户误触而删除员工信息，便于用户操作 
    int n, p = 0;   //p用于判断是否存在改员工，n用于保存用户输入 
    cin >> n;
    if (n == -1)   //退出功能提示 
    {
        cout << "退出修改员工信息功能\n";
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }
    else    //执行删除员工信息功能 
    {
        for (it = database.begin(); it != database.end(); it++) //遍历容器 
        {
            if ((**it).get_id() == n)    //找到用户需要删除的员工 
            {
                p++;       //修改判断标志 
                cout << "已查询到的员工信息如下：\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "修改选择：1.修改姓名  2.修改性别  3.修改年龄  4.修改部门  5.修改职位  6.修改联系电话\n";  //提供不同的修改选择 
                cout << "请输入您要修改的信息：";
                int choice;    //输入用户选择 
                cin >> choice;
                if (choice == 1)   //修改功能的具体实现 
                {
                    cout << "请输入修改后的员工姓名：";
                    string c_name;
                    cin >> c_name;
                    (**it).set_name(c_name);   //调用employee类中的set_xxx函数进行修改相关信息 
                    break;
                }
                else if (choice == 2) {
                    cout << "请输入修改后的员工性别：";
                    string c_sex;
                    cin >> c_sex;
                    (**it).set_sex(c_sex);    //(**it)访问employee类对象 
                    break;
                }
                else if (choice == 3) {
                    cout << "请输入修改后的员工年龄：";
                    int c_age;
                    cin >> c_age;
                    (**it).set_age(c_age);
                    break;        //修改结束后退出系统 
                }
                else if (choice == 4) {
                    cout << "请输入修改后的员工部门：";
                    string c_department;
                    cin >> c_department;
                    (**it).change_department(c_department);
                    break;
                }
                else if (choice == 5) {
                    cout << "请输入修改后的员工职位：";
                    string c_job;
                    cin >> c_job;
                    (**it).change_job(c_job);
                    break;
                }
                else if (choice == 5) {
                    cout << "请输入修改后的员工联系电话：";
                    string c_phone;
                    cin >> c_phone;
                    (**it).set_phone(c_phone);
                    break;
                }

            }
            else {         //若未查询到员工信息，则弹出提示 
                cout << "未查询到相关员工信息！\n";
                cout << "输入回车以继续......\n";
                getchar();
                getchar();
                break;
            }
        }
    }
}
void search_information()       //查询员工信息的实现 
{
    cout << "正在启用查询员工信息功能！\n";
    cout << "请输入您需要的查询方式：\n1.按工号查询  2.按姓名查询  3.按部门查询  4.按职位查询  0.退出查询\n";  //提供不同的查询方式 
    int choice, p = 0;    //p用于判断是否寻找到对应的员工信息 
    cin >> choice;    //提供选择0用于退出，防止用户因误触而被迫查询 
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0)  //对于用户输入进行判断 
    {
        cout << "输入选择错误！\n";        //提示输入错误 
        cin >> choice;
    }
    if (choice == 1) {
        int n;
        cout << "请输入需查询的员工工号：";    //按照员工工号查询方式的实现 
        cin >> n;
        for (it = database.begin(); it != database.end(); it++)  //使用迭代器it对容器进行遍历 
        {
            if ((**it).get_id() == n)        //若查询到相应的员工信息 
            {
                p++;            //判断标志位++ 
                cout << "已查询到的员工信息如下：\n";     //输出系统中相应的员工信息 
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位    联系电话\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "输入回车以继续......\n";
                getchar();
                getchar();
                break;     //由于员工工号是唯一的，查询到以后退出循环 
            }
        }
        if (p == 0)    //若未查询到相应的员工信息，则给用户返回提示信息 
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 2)   //根据员工姓名进行用户信息查询 
    {
        string sname;
        cout << "请输入需查询的员工姓名：";
        cin >> sname;
        for (it = database.begin(); it != database.end(); it++)   //迭代器it遍历容器 
        {
            if ((**it).get_name() == sname)    //若查询到符合条件的员工信息 
            {
                p++;   //判断标志位++ 
                cout << "已查询到的员工信息如下：\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位    联系电话\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
            }
            cout << "输入回车以继续......\n";  //考虑到员工可能有重名的，将对整个容器进行遍历，不用break退出循环 
            getchar();
            getchar();
        }
        if (p == 0)
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 3)       //本功能主要用于查询相同部门的员工信息 
    {
        string sdepartment;
        cout << "请输入需查询的部门名称：";
        cin >> sdepartment;      //用于储存输入的部门名称 
        for (it = database.begin(); it != database.end(); it++) //迭代器的遍历 
        {
            if ((**it).get_department() == sdepartment)   //若查询到相应的员工信息 
            {
                if (p == 0)   //标志位的判读 
                {
                    cout << "已查询到的员工信息如下：\n";
                    cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                }
                p++;       //标志位++ 
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
            }            // 
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
        if (p == 0)   //若未查询到相应的员工信息，返回给用户提示 
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 4)    //本功能用于查询具有相同职位的员工信息 
    {
        string sjob;
        cout << "请输入需查询的职位名称：";
        cin >> sjob;
        for (it = database.begin(); it != database.end(); it++)
        {
            if ((**it).get_department() == sjob)   //若其职位相同 
            {
                if (p == 0)   //标志位的判读 
                {
                    cout << "已查询到的员工信息如下：\n";
                    cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                }
                p++;
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                cout << "输入回车以继续......\n";
                getchar();
                getchar();
            }
        }
        if (p == 0)  //未查询到员工信息的提示 
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else {   //退出提示 
        cout << "退出查询员工信息功能！\n";
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }
}
void search_all()    //查询全部员工信息 
{
    cout << "系统中同有 " << database.size() << " 条员工信息\n";  //显示员工信息的条数 
    if (database.size() != 0)      //若有员工信息 
    {
        cout << "系统中已储存的员工信息如下：\n";
        cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
        for (it = database.begin(); it != database.end(); it++)   //对员工信息进行遍历输出 
        {
            cout.setf(ios::fixed);
            cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
        }
    }
    else {  //若系统中没有员工信息，返回提示 
        cout << "系统中暂时没有员工信息！\n";
        cout << "您可以通过主菜单中的添加员工信息或导入本地员工信息增添员工信息！\n";
    }
    cout << "输入回车以继续......\n";  //返回提示 
    getchar();
    getchar();
}
void import_local_data()    //导入本地员工信息 
{
    cout << "正在启用导入本地文件功能！\n";    //进入功能的提示 
    cout << "请注意，导入本地文件必须按照程序规定的格式，否则将导致导入本地文件失败！\n"; //规定的格式将在使用帮助中进行说明 
    cout << "需导入的txt文件是否与本系统exe文件位于同一目录下？（输入0以退出本功能）1:YES  2:NO\n"; //提供退出导入员工信息功能选择，防止由于用户误触而强制导入信息 
    int choice;
    cin >> choice;  //输入选择 
    while (choice != 1 && choice != 2 && choice != 0)  //用户选择判断 
    {
        cout << "输入错误！请重新输入：";
        cin >> choice;
    }
    struct {     //使用结构体用于临时储存需要导入的员工信息 
        char name[20];
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
    }temp[100];     //最多一次导入100条员工信息！需要在使用帮助中说明 
    if (choice == 1)
    {
        cout << "请输入需导入txt的完整的文件名，例如:data.txt\n";   //说明文件的格式 
        char filename[30];   //储存文件名 
        cin >> filename;
        FILE* fp = NULL;
        fp = fopen(filename, "r");  //打开文件 
        if (fp != NULL)    //若文件成功打开 
        {
            int m = 0, i = 0, p;
            cout << "打开文件成功！\n";
            if (feof(fp))   //若文件为空，则返回提示 
            {
                cout << "未检测到任何员工信息！\n";
                cout << "请重新检查您的txt文件内容或文件名！\n";
                cout << "输入回车以继续......";
                getchar();
                getchar();
            }
            else {  //若文件不为空 
                cout << "已监测到如下学生信息，是否导入系统？1：YES  2:NO\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                while (!feof(fp))  //将文件中的信息临时储存在temp结构体中并输出到屏幕上 
                {
                    fscanf(fp, "%d%s%s%d%s%s%s\n", &temp[i].id, &temp[i].name, &temp[i].sex, &temp[i].age, &temp[i].department, &temp[i].job, &temp[i].phone);
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << temp[i].id << setfill(' ') << setw(11) << temp[i].name << setw(9) << temp[i].sex << setw(9) << temp[i].age << setw(12) << temp[i].department << setw(10) << temp[i].job << setw(15) << temp[i].phone << endl;
                    i++;
                    m++;
                }
                cin >> p; //是否需要导入系统 
                if (p == 1)  //导入系统操作 
                {
                    for (i = 0; i < m; i++)  //导入系统 
                    {
                        database.push_back(new employee(temp[i].id, temp[i].name, temp[i].sex, temp[i].age, temp[i].phone, temp[i].department, temp[i].job));
                    }
                    cout << "导入员工信息成功！\n";
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                }
                else {  //放弃导入系统，temp结构体将随函数退出而释放内存 
                    cout << "放弃导入员工信息！\n";
                    cout << "输入回车以继续......";
                    getchar();
                    getchar();
                }
            }

        }
        else {    //打开文件失败，返回用户提示 
            cout << "打开文件失败！\n";
            cout << "请检查您的txt文件名或路径！\n";
            cout << "输入回车以继续......";
            getchar();
            getchar();
        }

    }
    else if (choice == 2) {
        cout << "请输入需导入文件的完整路径，例如：C:\\Users\\DELL\\Desktop\\data.txt \n";   //若用户需要在其他路径下打开 
        char path[45];       //给出路径示例   
        cin >> path;
        FILE* fp = NULL;
        fp = fopen(path, "r");
        if (fp != NULL)    //若打开文件成功 
        {
            int m = 0, i = 0, p;
            cout << "打开文件成功！\n";
            if (feof(fp))    //若文件为空 
            {
                cout << "未检测到任何员工信息！\n";
                cout << "请重新检查您的txt文件内容或文件名！\n";
                cout << "输入回车以继续......";
                getchar();
                getchar();
            }
            else {     //若文件不为空 
                cout << "已监测到如下学生信息，是否导入系统？1：YES  2:NO\n";
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                while (!feof(fp))  //用结构体temp临时储存信息并输出信息到屏幕上 
                {
                    fscanf(fp, "%d%s%s%d%s%s%s\n", &temp[i].id, &temp[i].name, &temp[i].sex, &temp[i].age, &temp[i].department, &temp[i].job, &temp[i].phone);
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << temp[i].id << setfill(' ') << setw(11) << temp[i].name << setw(9) << temp[i].sex << setw(9) << temp[i].age << setw(12) << temp[i].department << setw(10) << temp[i].job << setw(15) << temp[i].phone << endl;
                    i++;
                    m++;
                }
                cin >> p;  //若选择导入系统 
                if (p == 1)
                {
                    for (i = 0; i < m; i++)
                    {
                        database.push_back(new employee(temp[i].id, temp[i].name, temp[i].sex, temp[i].age, temp[i].phone, temp[i].department, temp[i].job));
                    }
                    cout << "导入员工信息成功！\n";
                    cout << "输入回车以继续......\n";
                    getchar();
                    getchar();
                }
                else {  //若放弃导入系统 
                    cout << "放弃导入员工信息！\n";
                    cout << "输入回车以继续......";
                    getchar();
                    getchar();
                }
            }

        }
        else {  //若打开文件失败 
            cout << "打开文件失败！\n";
            cout << "请检查您的txt文件名或路径！\n";
            cout << "输入回车以继续......";
            getchar();
            getchar();
        }
    }
    else {  //退出导入员工信息功能 
        cout << "退出导入本地数据功能！\n";
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }

}
void save_data()   //保存员工信息 
{
    cout << "正在启用保存系统数据功能！";
    int i = 0;
    int m = 0;
    cout << "系统中已储存的员工信息如下：\n";
    cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
    for (it = database.begin(); it != database.end(); it++)
    {
        cout.setf(ios::fixed);
        cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
    }
    cout << "共有 " << database.capacity() << " 条信息\n";    //显示总共信息 
    cout << "是否需要保存在本系统exe当前目录下？(输入0以退出)  1.YES  2.NO";  //输入0以退出系统 
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
        cout << "输入选择错误！请重新输入：";
        cin >> choice;
    }
    if (choice == 1)   //保存员工信息到当前目录下 
    {
        char filename[20];
        cout << "请输入需要保存数据的文件名，例如：data.txt \n";  //文件名 
        char name[20];     //临时字符串用于储存信息 
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
        cin >> filename;
        FILE* fp = NULL;
        fp = fopen(filename, "w");    //打开文件信息 
        if (fp != NULL)
        {
            for (it = database.begin(); it != database.end(); it++)  //遍历执行输出信息操作 
            {
                id = (**it).get_id();
                age = (**it).get_age();
                strcpy(name, (**it).get_name().c_str());    //c_str()函数用于将string类型的对象转化为c类字符串 
                strcpy(sex, (**it).get_sex().c_str());
                strcpy(department, (**it).get_department().c_str());
                strcpy(job, (**it).get_job().c_str());
                strcpy(phone, (**it).get_phone().c_str());
                cout << name << sex;
                fprintf(fp, "%d %s %s %d %s %s %s\n", id, name, sex, age, department, job, phone);  //fprintf用于输出信息至文件  
            }
            fclose(fp);
            cout << "保存员工信息成功！\n";   //成功提示 
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
        else {    //打开文件失败提示 
            cout << "打开txt文本失败！\n";
            cout << "保存员工信息失败！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else if (choice == 2)   //保存到另一个目录下 
    {
        char path[45];
        cout << "请输入完整的储存路径和文件名，例如：例如：C:\\Users\\DELL\\Desktop\\data.txt \n";//完整的目录路径 
        char name[20];
        char sex[10];
        char department[20];
        char job[20];
        char phone[20];
        int id;
        int age;
        cin >> path;  //路径 
        FILE* fp = NULL;
        fp = fopen(path, "w+");  //“w+”方式打开 
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
            cout << "保存员工信息成功！\n";  //成功提示 
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
        else {  //失败提示 
            cout << "打开txt文本失败！\n";
            cout << "保存员工信息失败！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
    else {  //退出系统 
        cout << "输入回车以退出保存系统数据功能！\n";
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }
}
void help()  //帮助函数 
{
    printf("您是否需要打开帮助文件readme.txt（1：YES 2:NO）：\n");  //引入文件操作，可以使用户直接打开readme.txt，增强用户体验 
    int p;
    cin >> p;
    if (p == 1)
    {
        system("start readme.txt");  //以文件方式打开 
    }
    else {               //也可以直接在本程序中显示帮助内容 
        printf("欢迎使用员工信息管理系统3.1.2\n");
        printf("本系统为员工信息管理系统3.1.2，主要用于实现对企业员工信息的管理。\n");
        printf("本系统提供的功能有：\n1.增添员工信息、2.删除员工信息、3.修改员工信息、4.查询员工信息、5.查看全部信息、6.导入本地数据、7.保存系统数据、8.用户个性化设置等功能\n");
        printf("请输入您要查询的功能序号（输入0以退出帮助）：");
        int choice;
        cin >> choice;
        while (choice < 0 || choice >8) {
            cout << "输入选择错误！\n";
            cout << "请重新输入您的选择：";
            cin >> choice;
        }
        switch (choice)
        {
        case 1: cout << "在使用增添员工信息功能时，请按照屏幕提示，依次输入员工的相应信息，请注意，员工工号将是唯一的，若输入相同的员工工号将有系统提示错误，输入后的员工信息将储存\n";
            cout << "于本系统中，并没有存储到您的计算机磁盘系统，若需要保存员工信息到本地，请在主菜单选择保存员工信息功能\n";
            cout << "并根据系统提示进行操作！\n";
            break;
        case 2: cout << "在使用删除员工信息功能时，请输入需删除的员工工号或姓名，按照提示进行相应操作。删除的员工信息仅为本系统\n";
            cout << "中储存的员工信息，并不影响您本地的员工信息\n";
            break;
        case 3: cout << "在使用修改员工信息时，您需要提供待修改的员工工号，并根据提示选择和输入修改的内容，修改的员工\n";
            cout << "信息为本系统中储存的员工信息，若您需要长期保存，请选择在开始菜单选择保存员工信息功能\n";
            cout << "并根据系统提示进行操作\n";
            break;
        case 4: cout << "在使用查询员工信息功能的功能时，您可以根据提示按照不同的方式进行查询，请注意：您只能查询到本系统中储存的员工信息，\n";
            cout << "无法查询到未导入系统的员工信息，若您需要导入员工信息，请在菜单中选择导入员工信息并按照系统提示进行操作\n";
            break;
        case 5: cout << "在使用查看员工信息时，您只能查看本系统中储存的员工信息，如需导入您本地的员工信息，请在开始菜单中\n";
            cout << "选择导入员工信息并按照提示操作\n";
            break;
        case 6: cout << "在使用导入本地员工信息时，请按照提示输入正确的txt储存路径和文件名，请注意，在您本地的员工信息txt文件中\n";
            cout << "请确保您保存的员工信息的格式为：工号 姓名 性别 部门 职位 联系方式，txt文件的编码格式必须是：ANSI或UTF-8无BOM格式，否则将可能无法读入中文信息，每两项信息间以空格分隔，每行仅保存一个员工信息\n";
            cout << "，每次最多导入100条员工信息，否则将可能导致系统无法正确的导入员工信息！！！\n";
            break;
        case 7: cout << "在使用保存员工信息的功能时，若您需要保存于其他文件夹，请确保输入正确的文件路径，否则将可能导致系统无法为您保存员工信息\n";
            cout << "至您本地！！！\n";
            break;
        case 8: cout << "在使用个性化设置的功能时，您可以按照提示选择您喜欢的背景颜色和字体颜色，也可以取消您选择的颜色而恢复默认设置\n";
            break;
        }

    }
    printf("输入回车以继续......\n");
    getchar();
    getchar();
}
void about_us()     //关于我们 
{
    cout << "非常感谢您使用本产品！\n";   //感谢 
    cout << "您正在使用的是员工信息管理系统3.1.2\n";  //版本信息 
    cout << "开发者名单如下：\n";       //开发团队名单 
    cout << "1\n";
    cout << "2\n";
    cout << "3\n";
    cout << "如您有任何疑问或想法，欢迎联系以上开发人员\n";  //疑惑  
    cout << "开发团队对本系统保留最终解释权，未经允许严禁用于任何商业用途！！！\n";//版权声明 
    cout << "输入回车以继续......\n";
    getchar();
    quit();   //退出系统 tchar(); 
}
void quit()   //退出系统 
{
    cout << "您确认要退出系统吗？1：确认退出  2:取消退出\n";
    cout << "请输入您的选择：\n";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        system("taskkill -f -im 员工信息管理系统3.1.2.exe");
    }

}
void set_up()   //个性化界面设置 也可以增添修改命令窗口大的个性化设置，大家自由发挥
{
    cout << "欢迎来到用户个性化界面设置\n";
    cout << "1.界面和字体背景颜色设置，2.恢复默认设置0.退出";  //提供界面与字体颜色设置，并添加恢复默认设置的功能 
    cout << "请输入您的选择：";
    int choice;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 0) {   //对用户选择进行判断 
        cout << "输入选择错误！请重新输入您的选择：";
        cin >> choice;
    }
    if (choice == 1)   //若用户需要更改颜色 
    {
        cout << "颜色菜单如下：\n";
        cout << "0 = 黑色       8 = 灰色\n";
        cout << "1 = 蓝色       9 = 淡蓝色\n";
        cout << "2 = 绿色       A = 淡绿色\n";
        cout << "3 = 浅绿色     B = 淡浅绿色\n";
        cout << "4 = 红色       C = 淡红色\n";
        cout << "5 = 紫色       D = 淡紫色\n";
        cout << "6 = 黄色       E = 淡黄色\n";
        cout << "7 = 白色       F = 亮白色\n";
        cout << "请输入您想要的背景颜色：";
        cin >> a;   //a为本cpp开头定义的全局变量 
        while (a[0] < '0' || a[0]>'F') //对用户输入进行判断 
        {
            cout << "输入选择错误！请重新输入您的选择：";
            cin >> a;
        }
        cout << "请输入您想要的字体颜色(请勿输入与背景颜色相同的颜色类型)：";
        cin >> b;   //b为本cpp开头定义的全局变量 
        while (b[0] < '0' || b[0]>'F')    //对用户输入进行判断 
        {
            cout << "输入选择错误！请重新输入您的选择：";
            cin >> b;
        }
        strcat(order, a);  //执行字符串拼接操作 
        strcat(order, b);
        system(order);  //个性化修改窗口背景颜色和字体颜色 
        j++;   //修改个性化设置标志位，j为本cpp开头定义的全局变量
        cout << "修改界面和字体颜色成功！\n";  //返回提示 
        printf("输入回车以继续......\n");
        getchar();
        getchar();
    }
    else if (choice == 2)  //恢复默认设置 
    {
        j = 0;
        strcpy(order, "color ");
        strcpy(a, "F");
        strcpy(b, "1");
        cout << "恢复默认设置成功！\n";
    }
    else {  //退出个性化设置 
        cout << "输入回车以退出......";
        getchar();
        getchar();
    }

}
void sign()
{
    cout << "正在启用查询员工签到功能！\n";
    cout << "请输入您的工号。\n";
    int  p = 0;    //p用于判断是否寻找到对应的员工信息 
    int n;
    string pw;
    cin >> n;
    for (it = database.begin(); it != database.end(); it++)  //使用迭代器it对容器进行遍历 
    {
        if ((**it).get_id() == n)        //若查询到相应的员工信息 
        {
            p++;            //判断标志位++ 
            cout << "请输入您的密码：\n";
            cin >> pw;
            if (pw.compare((**it).get_password()))
            {
                (**it).attendance.push_back(1);
            }
            else
            {
                cout << "密码错误！\n";
                cout << "输入回车以继续......\n";
            }
        }

        if (p == 0)    //若未查询到相应的员工信息，则给用户返回提示信息 
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
}

void em_modify_information()     //修改员工信息 
{
    cout << "启用修改员工信息功能！\n";
    cout << "请输入你的工号和密码(输入-1以退出)：";  //输入-1以退出本功能，防止由于用户误触而删除员工信息，便于用户操作 
    int n, p = 0;   //p用于判断是否存在改员工，n用于保存用户输入 
    cout << "请输入您的工号。\n";
    string pw;
    cin >> n;
    if (n == -1)   //退出功能提示 
    {
        cout << "退出修改员工信息功能\n";
        cout << "输入回车以继续......\n";
        getchar();
        getchar();
    }

    else    //执行删除员工信息功能 
    {
        for (it = database.begin(); it != database.end(); it++)  //使用迭代器it对容器进行遍历 
        {
            if ((**it).get_id() == n)        //若查询到相应的员工信息 
            {
                p++;            //判断标志位++ 
                cout << "请输入您的密码：\n";
                cin >> pw;
                if (pw.compare((**it).get_password()))
                {
                    cout << "员工信息如下：\n";
                    cout << "工 号    姓  名     性  别   年  龄    部  门    职  位      联系电话\n";
                    cout.setf(ios::fixed);
                    cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << endl;
                    cout << "修改选择：1.修改姓名  2.修改性别  3.修改年龄  4.修改联系电话  5.修改密码\n";  //提供不同的修改选择 
                    cout << "请输入您要修改的信息：";
                    int choice;    //输入用户选择 
                    cin >> choice;
                    if (choice == 1)   //修改功能的具体实现 
                    {
                        cout << "请输入修改后的员工姓名：";
                        string c_name;
                        cin >> c_name;
                        (**it).set_name(c_name);   //调用employee类中的set_xxx函数进行修改相关信息 
                        break;
                    }
                    else if (choice == 2) {
                        cout << "请输入修改后的员工性别：";
                        string c_sex;
                        cin >> c_sex;
                    }
                }
            }
        }
    }
}
void em_search_information()       //查询员工信息的实现 
{
    cout << "正在启用查询员工信息功能！\n";
    cout << "请输入您的工号。\n";
    int  p = 0;    //p用于判断是否寻找到对应的员工信息 
    int n;
    string pw;
    cin >> n;
    for (it = database.begin(); it != database.end(); it++)  //使用迭代器it对容器进行遍历 
    {
        if ((**it).get_id() == n)        //若查询到相应的员工信息 
        {
            p++;            //判断标志位++ 
            cout << "请输入您的密码：\n";
            cin >> pw;
            if (pw.compare((**it).get_password()))
            {
                cout << "员工信息如下：\n";     //输出系统中相应的员工信息 
                cout << "工 号    姓  名     性  别   年  龄    部  门    职  位    联系电话    密码\n";
                cout.setf(ios::fixed);
                cout << std::right << setw(4) << setfill('0') << (**it).get_id() << setfill(' ') << setw(11) << (**it).get_name() << setw(9) << (**it).get_sex() << setw(9) << (**it).get_age() << setw(12) << (**it).get_department() << setw(10) << (**it).get_job() << setw(15) << (**it).get_phone() << setw(15) << (**it).get_password() << endl;
                cout << "输入回车以继续......\n";
                getchar();
                getchar();
                break;     //由于员工工号是唯一的，查询到以后退出循环 
            }
        }
        else
        {
            cout << "密码错误！\n";
            cout << "输入回车以继续......\n";
        }

        if (p == 0)    //若未查询到相应的员工信息，则给用户返回提示信息 
        {
            cout << "未查询到相关员工信息！\n";
            cout << "输入回车以继续......\n";
            getchar();
            getchar();
        }
    }
}