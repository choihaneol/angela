//Machine, Part type(+dependent part type)����, Pallet(type)����, fixture type ����  Data file 

#include "stdafx.h"
#include <iostream>
#include <tchar.h>                    //tmain
#include <stdlib.h>                   //srand(), sprintf()
#include <time.h>                     //time()

using namespace std;

int _tmain(int argc, _TCHAR* argv[])                     //tmain : mainȮ���� ,tchar : char Ȯ����
{
	srand(time(0));                                        // ���� ���� �ð� �ʱ�ȭ ? time(0)����? 

	int instances = 1;


	int Machine = 3;                                       //Machine ��� 


	int Part_type = 5;                                     //Part_type(����ǰ��) �� 
	int temp = Part_type * 0.2;
	int Num_part_dependency = 1;                               //Dependent part ������ part ���� ��ü part�� 20% ???? dependent part�� ��ü part ������ 20%��? ������ 20%��?   


	int Pallet = 8;


	int Fixture = Part_type + Num_part_dependency;                                         //Part_type = Part_type + Num_part_dependency �� ����


	int Num_operation = 2;

	Part_type = Part_type + Num_part_dependency;             // part�� part dependent ���� ���� ǥ�õǵ���


	for (int T = 0; T < instances; T++)
	{
		cout << Machine << " " << Part_type << " " << Pallet << " " << Fixture << " " << Num_operation <<endl;  	//sprintf(filename,".\\Machine_%d\\DATA_%d_%d_%d_%d.txt",Machine,Machine,Part_type,Operation_Level,T);
	}
}

