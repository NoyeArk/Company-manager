// C++课设.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "Array.h"
#include "Tool.h"
#include "Manager.h"
#include "Person.h"
#include "Executive.h"
#include "SalesManager.h"
#include "SalesPeople.h"
#include "Technical.h"
#include<windows.h>
#include "宏.h"
#include "FuncTemp.hpp"
#include <string>

Array paff[LSIZE];

void test();

void Main() {
    cout << "尊敬的用户，欢迎您的使用！" << endl;
    Manager manager;
    manager.Init();
    while (true) {
        int flag = 1;
        if(!flag) system("cls");
        flag = 0;
        manager.ShowMenu();
        string input;
        cin >> input;
        if (input == "0") {
            cout << endl << "您确定要退出系统嘛？(y/n)";
            char y_or_n;
            cin >> y_or_n;
            if (y_or_n == 'y') break;
            else continue;
        }
        int select = Tool::First(input);
        switch (select)
        {
        default:
            cout << endl << "Warning：您的输入超出范围，请重新输入！" << endl;
            Sleep(1500);
            system("cls");
            break;
        case 1:manager.Add(); break;
        case 2:manager.Search(); break;
        case 3:manager.Display(1); break;
        case 4:manager.Edit(); break;
        case 5:manager.Delete(); break;
        case 6:manager.Stats(); break;
        case 7:manager.Save(); break;
        case 8:manager.Read(); break;
        case 10:test(); break;
        }
    }
    manager.End();
    std::cout << endl << "期待您的下次使用！\n";
}

void test() {

    Technical t(1,"zql","男","erd",23);
    cout << t;
}
int main()
{
    Main();

}