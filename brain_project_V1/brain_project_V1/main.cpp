#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//ver 2.0
struct Student
{
	int sNo;
	string name;
	int Kor, eng, math;
	float ave;
};

int main()
{
	//ver 1.0
	/*
	int S1_No, S2_No, S3_No;
	int S1_Kor, S2_Kor, S3_Kor;
	int S1_Math, S2_Math, S3_Math;
	int S1_Eng, S2_Eng, S3_Eng;
	float S1_Ave, S2_Ave, S3_Ave;
	float TotalAve = 0.0f;
	int NumberOfStudent = 0;
	*/

	const int MAX_STUDENT = 100;
	Student students[MAX_STUDENT];

	float TotalAve = 0.0f;
	int NumberOfStudent = 0;

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
		{
			//cout << "\n�л� ���� �߰��� ���õǾ����ϴ�. \n";
			if (MAX_STUDENT == NumberOfStudent)
			{
				cout << "\n�� �̻� �Է��� �� �����ϴ�. \n";
				break;
			}

			//int Kor, Eng, Math;
			Student& std = students[NumberOfStudent];

			std.sNo = NumberOfStudent + 1;


			cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : ";
			cin >> std.name >> std.Kor >> std.eng >> std.math;

			std.ave = float(std.Kor + std.eng + std.math) / 3.0f;

			const int current = NumberOfStudent + 1;
			const int prev = NumberOfStudent;

			TotalAve = (TotalAve * prev / current) + (std.ave / current);

			//ver 1.0
			/*
			if (0 == NumberOfStudent)
			{
			S1_No = NumberOfStudent + 1;
			S1_Kor = Kor;
			S1_Eng = Eng;
			S1_Math = Math;
			S1_Ave = Ave;

			TotalAve = S1_Ave;
			}
			else if (1 == NumberOfStudent)
			{
			S2_No = NumberOfStudent + 1;
			S2_Kor = Kor;
			S2_Eng = Eng;
			S2_Math = Math;
			S2_Ave = Ave;

			TotalAve = (S1_Ave + S2_Ave) / 2;
			}
			else
			{
			S3_No = NumberOfStudent + 1;
			S3_Kor = Kor;
			S3_Eng = Eng;
			S3_Math = Math;
			S3_Ave = Ave;

			TotalAve = (S1_Ave + S2_Ave + S3_Ave) / 3;
			}
			*/

			NumberOfStudent++;

			cout << "\n �л� ������ �ùٸ��� �ԷµǾ����ϴ�. \n";

			break;
		}
		case '2':
		{
			cout.precision(2);
			cout << fixed;
			//cout << "\n��ü ���� ���Ⱑ ���õǾ����ϴ�. \n";
			cout << "\n           <��ü ���� ����> \n";
			cout << "\n�й� ���� ���� ���� ��� \n";

			for (int i = 0; i < NumberOfStudent; ++i)
			{
				//ver1.0
				/*
				if (0 == i)
				{
				cout << setw(7) << S1_No << setw(5) << S1_Kor << setw(5);
				cout << S1_Eng << setw(5) << S1_Math << setw(7) << S1_Ave << "\n";
				}
				else if (1 == i)
				{
				cout << setw(7) << S2_No << setw(5) << S2_Kor << setw(5);
				cout << S2_Eng << setw(5) << S2_Math << setw(7) << S2_Ave << "\n";
				}
				else
				{
				cout << setw(7) << S3_No << setw(5) << S3_Kor << setw(5);
				cout << S3_Eng << setw(5) << S3_Math << setw(7) << S3_Ave << "\n";
				}
				*/

				const Student& std = students[i];

				cout << setw(7) << std.sNo << setw(7) << std.name;
				cout << setw(5) << std.Kor << setw(5) << std.eng;
				cout << setw(5) << std.math << setw(7) << std.ave << "\n";
			}

			cout << "\n��ü ��� = " << TotalAve << "\n";

			break;
		}
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
