//Machine, Part type(+dependent part type)개수, Pallet(type)개수, fixture type 개수  Data file 

#include "stdafx.h"
#include <iostream>
#include <tchar.h>                    //tmain
#include <stdlib.h>                   //srand(), sprintf()
#include <time.h>                     //time()

using namespace std;

int _tmain(int argc, _TCHAR* argv[])                     //tmain : main확장형 ,tchar : char 확장형
{
	srand(time(0));                                        // 난수 생성 시간 초기화 ? time(0)으로? 

	int instances = 1;


	int Machine = 3;                                       //Machine 댓수 


	int Part_type = 5;                                     //Part_type(가공품목) 수 
	int temp = Part_type * 0.2;
	int Num_part_dependency = 1;                               //Dependent part 가지는 part 갯수 전체 part의 20% ???? dependent part가 전체 part 종류의 20%야? 갯수의 20%야?   


	int Pallet = 8;


	int Fixture = Part_type + Num_part_dependency;                                         //Part_type = Part_type + Num_part_dependency 와 같음


	int Num_operation = 2;

	Part_type = Part_type + Num_part_dependency;             // part가 part dependent 까지 같이 표시되도록


	for (int T = 0; T < instances; T++)
	{
		cout << Machine << " " << Part_type << " " << Pallet << " " << Fixture << " " << Num_operation <<endl;  	//sprintf(filename,".\\Machine_%d\\DATA_%d_%d_%d_%d.txt",Machine,Machine,Part_type,Operation_Level,T);
	}
}

