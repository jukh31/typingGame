#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{

	// 미리 레벨에 맞는 단어 저장
	char Lv[5][512] = { {"나라,국가,날림,엄마,그림,파리,모기,사과"},{ "나달,날두,아크,담배,아구,대리,감귤" } ,{"가가,나나,다다,라라,마마,바바,사사"},
	{"갸갸,거거,겨겨,고고,교교,구구,규규"},{"나다,다라,마바,바사,사아,아자"} };
	

	char answer[512] = {};
	char i;
	int lv, Exp, life, comp,difficulty,bonus,bExp,blife;
	char* token;												//추가함
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
		token = strtok(Lv[lv - 1], ",");									//수정해야함

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
		//puts(Lv1);
		if (lv == 1)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;

			cout << token << endl;//출력
			cin >> answer;//입력
		}
		else if (lv == 2)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
			cin >> answer;//입력
		}
		else if (lv == 3)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
			cin >> answer;//입력
		}

		else if (lv == 4)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
			cin >> answer;//입력
		}

		else if (lv == 5)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//출력
			cin >> answer;//입력
		}


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
		cout<<"exp" << Exp << endl;
		cout<<"life"<< life << endl;
		cout << endl << endl << endl << endl;


		//레벨업 가능 판별 후 가능이면 레벨업
		if (lv == 1 && Exp >= 3)
			lv++;
		else if (lv == 2 && Exp >= 9)
			lv++;
		else if (lv == 3 && Exp >= 18)
			lv++;
		else if (lv == 4 && Exp >= 30)
			lv++;
		else if (lv == 5 && Exp >= 45)
			lv++;



		//라이프 없음 죽음
		if (life == 0)
		{
			cout << "패패" << endl;
			exit(1);
		}

		//반복 끝
		token = strtok(NULL,",");												//추가함
	}
	



	/*cout << "wwwwww"<<endl;*/

	return 0;
}