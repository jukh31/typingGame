#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{

	// �̸� ������ �´� �ܾ� ����
	char Lv1[512] = {"���"};
	char answer[512] = {};
	char i;
	int lv, Exp, life, comp,difficulty,bonus,bExp,blife;
	// �ʱ� ����
	lv = 1;
	Exp = 0;
	life = 3;
	comp = 0;
	bonus = 0;
	bExp = 0;
	blife = 0;
	// ���� ����̴� �ʱ� ȭ��
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "�����ҷ��� �ƹ�Ű + ����"<<endl;
	cin >> i;
	getwchar();
	system("cls");
	cout << " ����?" << endl;

	//�ݺ�
	while (1)
	{
		//���� Ȯ��
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

		// �¸� ����

		if (lv == 6)
		{
			cout << "�¸�" << endl;
			return 1;
		}

		//���ʽ� ����
		bonus = rand() % 9;
		if (bonus == 3)
			bExp = 1;
		else if (bonus == 7)
			blife = 1;

		 
		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		puts(Lv1);
		cin.getline(answer, 512);//�����ؾ���


		//���� ���� �Ǻ��� ����
		if (strcmp(Lv1, answer) == 0)
		{
			system("cls");
			cout << "����" << endl;
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
			cout << "����" << endl;
			life--;
		}




		//������ ���� �Ǻ� �� �����̸� ������
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



		//������ ���� ����
		if (life == 0)
		{
			cout << "����" << endl;
			exit(1);
		}

		//�ݺ� ��
	}
	



	/*cout << "wwwwww"<<endl;*/

	return 0;
}