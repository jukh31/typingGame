#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{

	// 미리 레벨에 맞는 단어 저장
	char Lv1[512] = {"노답"};
	char answer[512] = {};
	char i;
	int lv, Exp, life, comp,difficulty,bonus,bExp,blife;
	// 초기 설정
	lv = 1;
	Exp = 0;
	life = 3;
	comp = 0;
	bonus = 0;
	bExp = 0;
	blife = 0;
	// 뭔가 없어보이는 초기 화면
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "시작할려면 아무키 + 엔터"<<endl;
	cin >> i;
	getwchar();
	system("cls");
	cout << " 시작?" << endl;

	//반복
	while (1)
	{
		//레벨 확인
		if (lv == 1)
		{
			difficulty = 1;
		}
		else if (lv == 2)
		{
			difficulty = 2;
		}
		else if (lv == 3)
		{
			difficulty = 3;
		}
		else if (lv == 4)
		{
			difficulty = 4;
		}
		else if (lv == 5)
		{
			difficulty = 5;
		}

		// 승리 여부

		if (lv == 6)
		{
			cout << "승리" << endl;
			return 1;
		}

		//보너스 생성
		bonus = rand() % 9;
		if (bonus == 3)
			bExp = 1;
		else if (bonus == 7)
			blife = 1;

		 
		//일반문제 단어 출력 및 입력(레벨 확인)
		puts(Lv1);
		cin.getline(answer, 512);//수정해야함


		//정답 여부 판별후 정산
		if (strcmp(Lv1, answer) == 0)
		{
			system("cls");
			cout << "성공" << endl;
			Exp++;
			if (bExp == 1)
			{
				Exp += 2;
				bExp = 0;
			}
			else if (blife == 1)
			{
				life++;
				blife = 0;
			}
		}
		else
		{
			system("cls");
			cout << "실패" << endl;
			life--;
		}




		//레벨업 가능 판별 후 가능이면 레벨업
		if (lv == 1 || Exp == 3)
			lv++;
		else if (lv == 2 || Exp == 9)
			lv++;
		else if (lv == 3 || Exp == 18)
			lv++;
		else if (lv == 4 || Exp == 30)
			lv++;
		else if (lv == 5 || Exp == 45)
			lv++;



		//라이프 없음 죽음
		if (life == 0)
		{
			cout << "패패" << endl;
			exit(1);
		}

		//반복 끝
	}
	



	/*cout << "wwwwww"<<endl;*/

	return 0;
}