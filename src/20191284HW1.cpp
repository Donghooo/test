#include <iostream>

using namespace std;

int main()

{
	//1�� ����
	/*
	int money, price, max;
	cout << "���� ������ �ִ� �� : ";
	cin >> money;
	price = 300;
	cout << "������ ���� : " << price << endl;
	max = money / price;
	cout << "�ִ�� �� �� �ִ� ������ ���� : " << max << endl;
	money = money - price * max;
	cout << "���� ���� �� ���� ��: : " << money << endl;
	*/

	//2������
	/*
	char ch;
	cout << "<���� ���� ������ ����ġ���� Ctrl+z�� �Է��ϼ���>" << endl;
	int mo = 0, ja = 0;
	cout << "Q.���ĺ����Է��ϼ��� : ";
	while (cin >> ch)
	{
		
		switch (ch)
		{

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "--->�����Դϴ�" << endl; mo++;
			break;
		default:
			cout << "--->�����Դϴ�" << endl; ja++;
			break;
		}
		if(ch==EOF)
			break;
		cout << "Q.���ĺ����Է��ϼ��� : ";
			
	}
	cout << "���� ���� : " << mo << endl;
	cout << "���� ���� : " << ja << endl;
	*/

	//3�� ����
	/*
	int length, choice;
	double area;
	cout << "�����Է�: ";
	cin >> length;
	cout << "������ �����ϼ���(1.�簢��, 2.��, 3. �ﰢ��) : ";
	cin >> choice;

	if (choice == 1)//�簢��
	{
		area = length * length;
		cout << "���� : " << area << endl;
	}
	else if (choice == 2)//��
	{
		area = 3.14 * (length * length);
		cout << "���� : " << area << endl;
	}
	else if (choice == 3)//�ﰢ��
	{
		area = length * length * 1 / 2;
		cout << "���� : " << area << endl;
	}
	else
	{
		cout << "��ȣ���߸������ϼ̽��ϴ�" << endl;
	}
	*/

	//test

	// test 2222
	///test444

	return 0;


}