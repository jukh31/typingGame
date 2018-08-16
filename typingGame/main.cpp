#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;



int main()
{

	// 미리 레벨에 맞는 단어 저장
	char Lv1[100] = { "나라,국가,날림,엄마,그림,파리,모기,사과" };
	char Lv2[100] = { "다현,모모,아크,담배,아구,대리,감귤" };
	char Lv3[100] = { "엉뚱,어이,끌이,굳이,마마,연세,사나" };
	char Lv4[100] = { "움찔,해쓱,깨끗,기쁨,가끔,으뜸,어깨" };
	char Lv5[100] = { "딱지,법석,몹시,잔뜩,훨씬,부썩,살짝,오빠 };

	char cp[100];

	char answer[512] = {};
	char input;
	char* token = 0;//추가함
	char* empty = 0;
	int flag = 0;
	// 초기 설정
	int lv = 1;

	int Exp = 0;
	int life = 3;
	int comp = 0;
	int bonus = 0;
	int bExp = 0;
	int blife = 0;
	//카피 ,나눔
	strcpy(cp, Lv1);

	token = strtok_s(Lv1, ",", &empty);

	// 뭔가 없어보이는 초기 화면
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;

	cout << "시작할려면 아무키 + 엔터" << endl;
	cin >> input;
	system("cls");
	cout << " 시작?" << endl;

	//반복
	while (1)
	{
		//보너스 생성 
		bonus = rand() % 9;
		if (bonus == 3)
			bExp = 1;
		else if (bonus == 7)
			blife = 1;

		//일반문제 단어 출력 및 입력(레벨 확인)
		if (lv == 1)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;

			cout << token << endl;//출력
		}
		else if (lv == 2)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
		}
		else if (lv == 3)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
		}

		else if (lv == 4)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
		}

		else if (lv == 5)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
		}
		cin >> answer;//입력

					  //정답 여부 판별후 정산
		if (strcmp(token, answer) == 0)
		{
			system("cls");// 테스트용
			cout << "성공" << endl;// 테스트용
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
			system("cls");// 테스트용
			cout << "실패" << endl;// 테스트용
			bExp = 0;
			blife = 0;
			life--;
		}
		//결과 출력
		cout << "lv" << lv << endl;
		cout << "exp" << Exp << endl;
		cout << "life" << life << endl;
		cout << endl << endl << endl << endl;


		//레벨업 가능 판별 후 가능이면 레벨업
		if (lv == 1 && Exp >= 3)
		{
			lv++;
			flag++;
			if (flag == 1)
			{
				strcpy(cp,Lv2);
				token = strtok_s(cp, answer, &empty);
				flag = 0;
			}
		}

		else if (lv == 2 && Exp >= 6)
		{
			lv++;
			flag++;
			if (flag == 1)
			{
				strcpy(cp, Lv2);
				token = strtok_s(cp, answer, &empty);
				flag = 0;
			}
		}
		else if (lv == 3 && Exp >= 9)
		{
			lv++;
			flag++;
			if (flag == 1)
			{
				strcpy(cp, Lv2);
				token = strtok_s(cp, answer, &empty);
				flag = 0;
			}
		}
		else if (lv == 4 && Exp >= 12)
		{
			lv++;
			flag++;
			if (flag == 1)
			{
				strcpy(cp, Lv2);
				token = strtok_s(cp, answer, &empty);
				flag = 0;
			}
		}
		else if (lv == 5 && Exp >= 15)
		{
			lv++;
		}
		// 승리 여부
		if (lv == 6)
		{
			cout << "승리" << endl;
			return 1;
		}

		//라이프 없음 죽음
		if (life == 0)
		{
			cout << "패패" << endl;
			exit(1);
		}

		//반복 끝
		token = strtok_s(NULL, ",", &empty);												//추가함
	}




	/*cout << "wwwwww"<<endl;*/

	return 0;
}