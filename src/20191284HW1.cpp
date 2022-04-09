#include <iostream>

using namespace std;

int main()

{
	//1번 문제
	/*
	int money, price, max;
	cout << "현재 가지고 있는 돈 : ";
	cin >> money;
	price = 300;
	cout << "젤리의 가격 : " << price << endl;
	max = money / price;
	cout << "최대로 살 수 있는 젤리의 개수 : " << max << endl;
	money = money - price * max;
	cout << "젤리 구입 후 남은 돈: : " << money << endl;
	*/

	//2번문제
	/*
	char ch;
	cout << "<모음 자음 구분을 끝마치려면 Ctrl+z를 입력하세요>" << endl;
	int mo = 0, ja = 0;
	cout << "Q.알파벳을입력하세요 : ";
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
			cout << "--->모음입니다" << endl; mo++;
			break;
		default:
			cout << "--->자음입니다" << endl; ja++;
			break;
		}
		if(ch==EOF)
			break;
		cout << "Q.알파벳을입력하세요 : ";
			
	}
	cout << "모음 개수 : " << mo << endl;
	cout << "자음 개수 : " << ja << endl;
	*/

	//3번 문제
	/*
	int length, choice;
	double area;
	cout << "길이입력: ";
	cin >> length;
	cout << "도형을 선택하세요(1.사각형, 2.원, 3. 삼각형) : ";
	cin >> choice;

	if (choice == 1)//사각형
	{
		area = length * length;
		cout << "면적 : " << area << endl;
	}
	else if (choice == 2)//원
	{
		area = 3.14 * (length * length);
		cout << "면적 : " << area << endl;
	}
	else if (choice == 3)//삼각형
	{
		area = length * length * 1 / 2;
		cout << "면적 : " << area << endl;
	}
	else
	{
		cout << "번호를잘못선택하셨습니다" << endl;
	}
	*/

	//test

	return 0;


}