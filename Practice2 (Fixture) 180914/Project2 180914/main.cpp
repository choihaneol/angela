//fixture ����, fixture ��ȣ, Pallet���� �ö� fixture ����   �� ������ : fixure type�� 0���� ��µǰ� part�� �ö� fixture �� �� �ڿ���µ� 

#include "stdafx.h"
#include <iostream>
#include <tchar.h>                    //tmain
#include <stdlib.h>                   //srand(), sprintf()
#include <time.h>                     //time()

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int instances = 1;                      //instance�� 

	int Part_type = 5;                      //����ǰ�� ��(part)
	int Num_part_dependency = Part_type * 0.2;                   //repalletizing�ִ� ����ǰ�� �� 
	 
	int Fixture = Part_type + Num_part_dependency;               //�� fixture type ���� = ����ǰ�� + repalletizing�ִ� ����ǰ��
	int Num_Fixture = 2;                    //�� pallet�� �ø� fixture ���� ���

	int Pallet = 5;                         //Pallet ����


	for (int i = 0; i < Pallet; i++)
	{
		 
		cout << Num_Fixture << " " ;       //�� pallet�� �ø� fixture ���� ���

		for (int j = 0; j < Num_Fixture; j++)
		{
			cout << rand() % Fixture + 1 << " ";                 //�� pallet���� �ö� fixture type
		}
		cout << endl;

	}
}
