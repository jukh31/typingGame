#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;



int main()
{

	// �̸� ������ �´� �ܾ� ����
	char Lv1[100] = { "����,����,����,����,�׸�,�ĸ�,���,���" };
	char Lv2[100] = { "����,���,��ũ,���,�Ʊ�,�븮,����" };
	char Lv3[100] = { "����,����,����,����,����,����,�糪" };
	char Lv4[100] = { "����,�ؾ�,����,���,����,����,���" };
	char Lv5[100] = { "����,����,����,�ܶ�,�ξ�,�ν�,��¦,���� };

	char cp[100];

	char answer[512] = {};
	char input;
	char* token = 0;//�߰���
	char* empty = 0;
	int flag = 0;
	// �ʱ� ����
	int lv = 1;

	int Exp = 0;
	int life = 3;
	int comp = 0;
	int bonus = 0;
	int bExp = 0;
	int blife = 0;
	//ī�� ,����
	strcpy(cp, Lv1);

	token = strtok_s(Lv1, ",", &empty);

	// ���� ����̴� �ʱ� ȭ��
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;

	cout << "�����ҷ��� �ƹ�Ű + ����" << endl;
	cin >> input;
	system("cls");
	cout << " ����?" << endl;

	//�ݺ�
	while (1)
	{
		//���ʽ� ���� 
		bonus = rand() % 9;
		if (bonus == 3)
			bExp = 1;
		else if (bonus == 7)
			blife = 1;

		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		if (lv == 1)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;

			cout << token << endl;//���
		}
		else if (lv == 2)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
		}
		else if (lv == 3)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
		}

		else if (lv == 4)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
		}

		else if (lv == 5)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
		}
		cin >> answer;//�Է�

					  //���� ���� �Ǻ��� ����
		if (strcmp(token, answer) == 0)
		{
			system("cls");// �׽�Ʈ��
			cout << "����" << endl;// �׽�Ʈ��
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
			system("cls");// �׽�Ʈ��
			cout << "����" << endl;// �׽�Ʈ��
			bExp = 0;
			blife = 0;
			life--;
		}
		//��� ���
		cout << "lv" << lv << endl;
		cout << "exp" << Exp << endl;
		cout << "life" << life << endl;
		cout << endl << endl << endl << endl;


		//������ ���� �Ǻ� �� �����̸� ������
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
		// �¸� ����
		if (lv == 6)
		{
			cout << "�¸�" << endl;
			return 1;
		}

		//������ ���� ����
		if (life == 0)
		{
			cout << "����" << endl;
			exit(1);
		}

		//�ݺ� ��
		token = strtok_s(NULL, ",", &empty);												//�߰���
	}




	/*cout << "wwwwww"<<endl;*/

	return 0;
}