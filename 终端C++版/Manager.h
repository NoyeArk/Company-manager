#pragma once
#include "Array.h"
class Manager
{
public:
	Manager();
	void Init(); //系统初始化
	void ShowMenu(); //显示主菜单
	void Add(); //添加人员
	void Search(); //查询人员
	void Display(int); //显示人员
	void Edit(); //编辑人员
	void Delete(); //删除人员
	void Stats(); //统计人员
	void End(); //销毁动态分配的内存
	void Save(); //保存人员
	void Read(); //读取人员
private:
	int Num;
};

