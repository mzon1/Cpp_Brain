#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		cout << "\n----- �޴� -----\n";
		cout << "1. �л� ���� �߰�\n";
		cout << "2. ��ü ���� ����\n";
		cout << "\n----------------\n\n";
		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";

		char select;
		cin >> select;

		switch (select)
		{
		case '1':
			cout << "\n�л� ���� �߰��� ���õǾ����ϴ�. \n";
			break;
		case '2':
			cout << "\n��ü ���� ���Ⱑ ���õǾ����ϴ�. \n";
			break;
		case 'q':
		case 'Q':
			cout << "\n���α׷��� ���� �մϴ�. \n";
			return 0;
		default:
			cout << "\n�ùٸ� ���� �Է��� �ּ���. \n";
			break;
		}

	}

	return 0;
}
