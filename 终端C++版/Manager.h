#pragma once
#include "Array.h"
class Manager
{
public:
	Manager();
	void Init(); //ϵͳ��ʼ��
	void ShowMenu(); //��ʾ���˵�
	void Add(); //�����Ա
	void Search(); //��ѯ��Ա
	void Display(int); //��ʾ��Ա
	void Edit(); //�༭��Ա
	void Delete(); //ɾ����Ա
	void Stats(); //ͳ����Ա
	void End(); //���ٶ�̬������ڴ�
	void Save(); //������Ա
	void Read(); //��ȡ��Ա
private:
	int Num;
};

