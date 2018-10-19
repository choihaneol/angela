//머신이름, Machine_RT, 머신번호  
#include <fstream>
#include "stdafx.h"        //미리컴파일된 헤더파일 다시쓰겠다
#include <iostream>        //입출력
#include <tchar.h>         //문자 확장형?
#include <stdlib.h>        //표준라이브러리? 
#include <time.h>          //시간날짜 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int Machine = 3;          //기계대수

	int i, Machine_RT;
	char ** Machine_Name = new char *[Machine];  //Machine 이름   ★동적메모리할당. 동적메모리 먼저 이해하고 이파트 다시만들어봐 
												 //machine name변수의 주소에 [machine]개의 배열 공간 생성 
	for (i = 0; i < Machine; i++)
	{
		Machine_Name[i] = new char[10];          //machine name배열에 한칸씩 10크기의 문자형배열 생성
	}

	{
		for (i = 0; i < Machine; i++)
		{
			sprintf(Machine_Name[i], "Mac%d", i + 1);              //machine name배열에 머신이름할당, sprint(배열명, 저장할변수)
		}

		for (i = 0; i < Machine; i++)
		{
			cout << Machine_Name[i] << " ";                        //Machine 이름 출력
		}

		cout << endl;
		for (i = 0; i < Machine; i++)
		{
			Machine_RT = 0;
			cout << Machine_RT << " ";                                     //머신 ready time =0 
		}
		cout << endl;

		for (i = 0; i < Machine; i++)
		{
			Machine_RT = i + 1;                                                // Machine 번호 출력.ready time 0이니까 머신순서대로 i+1
			cout << Machine_RT << " ";  // Machine 번호 출력
		}
		cout << endl; 
	}
	delete Machine_Name;
}