//fixture 갯수, fixture 번호, Pallet위에 올라간 fixture 갯수   ★ 문제점 : fixure type이 0부터 출력되고 part당 올라갈 fixture 수 가 뒤에출력됨 

#include "stdafx.h"
#include <iostream>
#include <tchar.h>                    //tmain
#include <stdlib.h>                   //srand(), sprintf()
#include <time.h>                     //time()

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int instances = 1;                      //instance수 

	int Part_type = 5;                      //가공품목 수(part)
	int Num_part_dependency = Part_type * 0.2;                   //repalletizing있는 가공품목 수 
	 
	int Fixture = Part_type + Num_part_dependency;               //총 fixture type 개수 = 가공품목 + repalletizing있는 가공품목
	int Num_Fixture = 2;                    //각 pallet에 올릴 fixture 갯수 출력

	int Pallet = 5;                         //Pallet 개수


	for (int i = 0; i < Pallet; i++)
	{
		 
		cout << Num_Fixture << " " ;       //각 pallet에 올릴 fixture 갯수 출력

		for (int j = 0; j < Num_Fixture; j++)
		{
			cout << rand() % Fixture + 1 << " ";                 //각 pallet위에 올라갈 fixture type
		}
		cout << endl;

	}
}
