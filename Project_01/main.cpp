#include <iostream>
#include <string.h>

using namespace std;
#define Size 10
#define wordnum 2
#define comma ","




int main()
{
	int lifenum = 3;
	int exp = 0;
	int Lv = 0;
	char* token ;

	char word1[Size] = { "나라,국가" };
	char input[5] = { 0 };

	// 1. 레벨 1로 시작함
	cout << " 타자 연습 게임" << endl;

	token = strtok(word1, comma);

	// 2. 레벨에 맞게 문자열을 입력받음 
	for (int i = 0; i < wordnum; i++)
	{

		cout << token <<endl;

		cin >> input;

		// 3. 맞으면 경험치를 얻고 틀리면 라이프를 잃음

		if (strncmp( word1, input, 4) == 0)
		{
			cout << "O" << endl;
			exp++;
			if (exp == 3)
				Lv++;
		}
		else
		{
			cout << "X" << endl;
			lifenum--;
			if (lifenum == 0)
			{
				cout << "Game Fail" << endl;
				break;
			}
		}

		token = strtok(NULL,comma);
	}
	// 4. 보너스 문제를 맞추면 추가경험치 or 라이프를 얻음




	return 0;
}