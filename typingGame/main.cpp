#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{

	// �̸� ������ �´� �ܾ� ����
	char Lv[5][512] = { {"����,����,����,����,�׸�,�ĸ�,���,���"},{ "����,����,��ũ,���,�Ʊ�,�븮,����" } ,{"����,����,�ٴ�,���,����,�ٹ�,���"},
	{"����,�Ű�,�ܰ�,���,����,����,�Ա�"},{"����,�ٶ�,����,�ٻ�,���,����"} };
	

	char answer[512] = {};
	char i;
	int lv, Exp, life, comp,difficulty,bonus,bExp,blife;
	char* token;												//�߰���
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
		token = strtok(Lv[lv - 1], ",");									//�����ؾ���

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
		//puts(Lv1);
		if (lv == 1)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;

			cout << token << endl;//���
			cin >> answer;//�Է�
		}
		else if (lv == 2)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
			cin >> answer;//�Է�
		}
		else if (lv == 3)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
			cin >> answer;//�Է�
		}

		else if (lv == 4)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
			cin >> answer;//�Է�
		}

		else if (lv == 5)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			cout << token << endl;//���
			cin >> answer;//�Է�
		}


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
		cout<<"exp" << Exp << endl;
		cout<<"life"<< life << endl;
		cout << endl << endl << endl << endl;


		//������ ���� �Ǻ� �� �����̸� ������
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



		//������ ���� ����
		if (life == 0)
		{
			cout << "����" << endl;
			exit(1);
		}

		//�ݺ� ��
		token = strtok(NULL,",");												//�߰���
	}
	



	/*cout << "wwwwww"<<endl;*/

	return 0;
}