//LD/ULD_Time(�ӽźҰ���ð�), Machine_Processing_Time(�ӽŰ���ð�)

#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <tchar.h>
#include <stdlib.h>
#include <time.h>

using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));

	int Machine = 3; 

	//===========================================  Machine_Processing_Time(�ӽŰ���ð�) : Ư�� ���������� �����ϰ� �߻� 
	int i, j;
	int m = 0;

	for (i = 0; i<Machine; i++)       
	{
		m = 0;
		                              //for(j=0;j<cal_idx_num;j++)
		for (j = 0; j<1000; j++)
		{
			if (j % 2 == 1)
			{
				m += 60;
				cout << m << " ";
			}
			else
			{
				m += 480;
				cout << m << " ";
			}

			if (m >= 219000)
			{
				cout << -1;
				break;
			}
			//fout << carlender[j] << " "; //�ε���ε� ���� �ð�
		}
		cout << endl;
	}

	cout << endl;

}