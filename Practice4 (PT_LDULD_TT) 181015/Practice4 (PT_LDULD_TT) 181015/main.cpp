//LD/ULD_Time(머신불가용시간), Machine_Processing_Time(머신가용시간)

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

	//===========================================  Machine_Processing_Time(머신가용시간) : 특정 범위내에서 랜덤하게 발생 
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
			//fout << carlender[j] << " "; //로딩언로딩 가능 시간
		}
		cout << endl;
	}

	cout << endl;

}