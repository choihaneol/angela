//�ӽ��̸�, Machine_RT, �ӽŹ�ȣ  
#include <fstream>
#include "stdafx.h"        //�̸������ϵ� ������� �ٽþ��ڴ�
#include <iostream>        //�����
#include <tchar.h>         //���� Ȯ����?
#include <stdlib.h>        //ǥ�ض��̺귯��? 
#include <time.h>          //�ð���¥ 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int Machine = 3;          //�����

	int i, Machine_RT;
	char ** Machine_Name = new char *[Machine];  //Machine �̸�   �ڵ����޸��Ҵ�. �����޸� ���� �����ϰ� ����Ʈ �ٽø����� 
												 //machine name������ �ּҿ� [machine]���� �迭 ���� ���� 
	for (i = 0; i < Machine; i++)
	{
		Machine_Name[i] = new char[10];          //machine name�迭�� ��ĭ�� 10ũ���� �������迭 ����
	}

	{
		for (i = 0; i < Machine; i++)
		{
			sprintf(Machine_Name[i], "Mac%d", i + 1);              //machine name�迭�� �ӽ��̸��Ҵ�, sprint(�迭��, �����Һ���)
		}

		for (i = 0; i < Machine; i++)
		{
			cout << Machine_Name[i] << " ";                        //Machine �̸� ���
		}

		cout << endl;
		for (i = 0; i < Machine; i++)
		{
			Machine_RT = 0;
			cout << Machine_RT << " ";                                     //�ӽ� ready time =0 
		}
		cout << endl;

		for (i = 0; i < Machine; i++)
		{
			Machine_RT = i + 1;                                                // Machine ��ȣ ���.ready time 0�̴ϱ� �ӽż������ i+1
			cout << Machine_RT << " ";  // Machine ��ȣ ���
		}
		cout << endl; 
	}
	delete Machine_Name;
}