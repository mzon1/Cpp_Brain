#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		cout << "\n----- 메뉴 -----\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "\n----------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";

		char select;
		cin >> select;

		switch (select)
		{
		case '1':
			cout << "\n학생 성적 추가가 선택되었습니다. \n";
			break;
		case '2':
			cout << "\n전체 성적 보기가 선택되었습니다. \n";
			break;
		case 'q':
		case 'Q':
			cout << "\n프로그램을 종료 합니다. \n";
			return 0;
		default:
			cout << "\n올바른 값을 입력해 주세요. \n";
			break;
		}

	}

	return 0;
}
