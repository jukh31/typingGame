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

	char word1[Size] = { "����,����" };
	char input[5] = { 0 };

	// 1. ���� 1�� ������
	cout << " Ÿ�� ���� ����" << endl;

	token = strtok(word1, comma);

	// 2. ������ �°� ���ڿ��� �Է¹��� 
	for (int i = 0; i < wordnum; i++)
	{

		cout << token <<endl;

		cin >> input;

		// 3. ������ ����ġ�� ��� Ʋ���� �������� ����

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
	// 4. ���ʽ� ������ ���߸� �߰�����ġ or �������� ����




	return 0;
}