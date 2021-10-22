#include<iostream>
#include<string>
using namespace std;
string grade_calculation(double x)
{
	if (x >= 80 && x <= 100)
	{
		return "A+";
	}
	else if (x >= 70 && x <= 79)
	{
		return "A";
	}
	else if (x >= 60 && x <= 69)
	{
		return "A-";
	}
	else if (x >= 50 && x <= 59)
	{
		return "B";
	}
	else if (x >= 40 && x <= 49)
	{
		return "C";
	}
	else if (x >= 33 && x <= 39)
	{
		return "D";
	}
	else
	{
		return "F";
	}
}
double gpa_calculation(string y)
{
	if (y == "A+")
	{
		return 5.00;
	}
	else if (y == "A")
	{
		return 4.00;
	}
	else if (y == "A-")
	{
		return 3.50;
	}
	else if (y == "B")
	{
		return 3.00;
	}
	else if (y == "C")
	{
		return 2.00;
	}
	else if (y == "D")
	{
		return 1.00;
	}
	else
	{
		return 0.00;
	}
}
int main()
{
	double marks[15];
	string result[15];
	double gpa[15];
	double total_gpa;
	double final_gpa;
	double two_subject_avarage_gpa[7];
	int choice;
	int studen_number;
	cout << "Enter student number : ";
	cin >> studen_number;
	for (int i = 0; i < studen_number; i++)
	{
		cout << "Enter '1' if optional subject is Higher mathematics or '2' if it is Biology : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter marks of Bangla 1st paper : ";
			cin >> marks[0];
			double two_subject_avarage_gpa[7];
			result[0] = grade_calculation(marks[0]);
			gpa[0] = gpa_calculation(result[0]);
			cout << "Grade in Bangla 1st paper : " << result[0];
			cout << "\nGPA in Bangla 1st paper : " << gpa[0];

			cout << "\nEnter marks of Bangla 2nd paper : ";
			cin >> marks[1];
			result[1] = grade_calculation(marks[1]);
			gpa[1] = gpa_calculation(result[1]);
			cout << "Grade in Bangla 2nd paper : " << result[1];
			cout << "\nGPA in Bangla 2nd paper : " << gpa[1];

			two_subject_avarage_gpa[0] = (gpa[0] + gpa[1]) / 2;
			cout << "\n---------------------Average GPA in Bangla : " << two_subject_avarage_gpa[0];

			cout << "\nEnter marks of English 1st paper : ";
			cin >> marks[2];
			result[2] = grade_calculation(marks[2]);
			gpa[2] = gpa_calculation(result[2]);
			cout << "Grade in English 1st paper : " << result[2];
			cout << "\nGPA in English 1st paper : " << gpa[2];

			cout << "\nEnter marks of English 2nd paper : ";
			cin >> marks[3];
			result[3] = grade_calculation(marks[3]);
			gpa[3] = gpa_calculation(result[3]);
			cout << "Grade in English 2nd paper : " << result[3];
			cout << "\nGPA in English 2nd paper : " << gpa[3];

			two_subject_avarage_gpa[1] = (gpa[2] + gpa[3]) / 2;
			cout << "\n---------------------Average GPA in English : " << two_subject_avarage_gpa[1];

			cout << "\nEnter marks of Physics 1st paper : ";
			cin >> marks[4];
			result[4] = grade_calculation(marks[4]);
			gpa[4] = gpa_calculation(result[4]);
			cout << "Grade in Physics 1st paper : " << result[4];
			cout << "\nGPA in Physics 1st paper : " << gpa[4];

			cout << "\nEnter marks of Physics 2nd paper : ";
			cin >> marks[5];
			result[5] = grade_calculation(marks[5]);
			gpa[5] = gpa_calculation(result[5]);
			cout << "Grade in Physics 2nd paper : " << result[5];
			cout << "\nGPA in Physics 2nd paper : " << gpa[5];

			two_subject_avarage_gpa[2] = (gpa[4] + gpa[5]) / 2;
			cout << "\n---------------------Average GPA in Physics : " << two_subject_avarage_gpa[2];

			cout << "\nEnter marks of Chemistry 1st paper : ";
			cin >> marks[6];
			result[6] = grade_calculation(marks[6]);
			gpa[6] = gpa_calculation(result[6]);
			cout << "Grade in Chemistry 1st paper : " << result[6];
			cout << "\nGPA in Chemistry 1st paper : " << gpa[6];

			cout << "\nEnter marks of Chemistry 2nd paper : ";
			cin >> marks[7];
			result[7] = grade_calculation(marks[7]);
			gpa[7] = gpa_calculation(result[7]);
			cout << "Grade in Chemistry 2nd paper : " << result[7];
			cout << "\nGPA in Chemistry 2nd paper : " << gpa[7];

			two_subject_avarage_gpa[3] = (gpa[6] + gpa[7]) / 2;
			cout << "\n---------------------Average GPA in Chemistry : " << two_subject_avarage_gpa[3];

			cout << "\nEnter marks of Biology 1st paper : ";
			cin >> marks[8];
			result[8] = grade_calculation(marks[8]);
			gpa[8] = gpa_calculation(result[8]);
			cout << "Grade in Biology 1st paper : " << result[8];
			cout << "\nGPA in Biology 1st paper : " << gpa[8];

			cout << "\nEnter marks of Biology 2nd paper : ";
			cin >> marks[9];
			result[9] = grade_calculation(marks[9]);
			gpa[9] = gpa_calculation(result[9]);
			cout << "Grade in Biology 2nd paper : " << result[9];
			cout << "\nGPA in Biology 2nd paper : " << gpa[9];

			two_subject_avarage_gpa[4] = (gpa[8] + gpa[9]) / 2;
			cout << "\n---------------------Average GPA in Biology : " << two_subject_avarage_gpa[4];

			cout << "\nEnter marks of Higher Mathematics 1st paper : ";
			cin >> marks[10];
			result[10] = grade_calculation(marks[10]);
			gpa[10] = gpa_calculation(result[10]);
			cout << "Grade in Higher Mathematics 1st paper : " << result[10];
			cout << "\nGPA in Higher Mathematics 1st paper : " << gpa[10];

			cout << "\nEnter marks of Higher Mathematics 2nd paper : ";
			cin >> marks[11];
			result[11] = grade_calculation(marks[11]);
			gpa[11] = gpa_calculation(result[11]);
			cout << "Grade in Higher Mathematics 2nd paper : " << result[11];
			cout << "\nGPA in Higher Mathematics 2nd paper : " << gpa[11];

			two_subject_avarage_gpa[5] = (gpa[10] + gpa[11]) / 2;
			cout << "\n---------------------Average GPA in Higher Mathematics : " << two_subject_avarage_gpa[5];

			if (two_subject_avarage_gpa[5] >= 3 && two_subject_avarage_gpa[5] <= 5)
			{
				two_subject_avarage_gpa[6] = two_subject_avarage_gpa[5] - 2;
			}
			else
			{
				two_subject_avarage_gpa[6] = two_subject_avarage_gpa[5];
			}

			cout << "\nEnter marks of ICT : ";
			cin >> marks[12];
			result[12] = grade_calculation(marks[12]);
			gpa[12] = gpa_calculation(result[12]);
			cout << "Grade in ICT : " << result[12];
			cout << "\nGPA in ICT : " << gpa[12];
			cout << "\n---------------------Average GPA in ICT : " << gpa[12];

			total_gpa = two_subject_avarage_gpa[0] + two_subject_avarage_gpa[1] + two_subject_avarage_gpa[2] + two_subject_avarage_gpa[3] + two_subject_avarage_gpa[4] + two_subject_avarage_gpa[6] + gpa[12];
			final_gpa = total_gpa / 6;
			if (final_gpa >= 5)
			{
				final_gpa = 5.00;
			}
			else
			{
				final_gpa;
			}
			cout << "\nTotal GPA is " << final_gpa << endl;

			break;
		case 2:
			cout << "Enter marks of Bangla 1st paper : ";
			cin >> marks[0];
			result[0] = grade_calculation(marks[0]);
			gpa[0] = gpa_calculation(result[0]);
			cout << "Grade in Bangla 1st paper : " << result[0];
			cout << "\nGPA in Bangla 1st paper : " << gpa[0];

			cout << "\nEnter marks of Bangla 2nd paper : ";
			cin >> marks[1];
			result[1] = grade_calculation(marks[1]);
			gpa[1] = gpa_calculation(result[1]);
			cout << "Grade in Bangla 2nd paper : " << result[1];
			cout << "\nGPA in Bangla 2nd paper : " << gpa[1];

			two_subject_avarage_gpa[0] = (gpa[0] + gpa[1]) / 2;
			cout << "\n---------------------Average GPA in Bangla : " << two_subject_avarage_gpa[0];

			cout << "\nEnter marks of English 1st paper : ";
			cin >> marks[2];
			result[2] = grade_calculation(marks[2]);
			gpa[2] = gpa_calculation(result[2]);
			cout << "Grade in English 1st paper : " << result[2];
			cout << "\nGPA in English 1st paper : " << gpa[2];

			cout << "\nEnter marks of English 2nd paper : ";
			cin >> marks[3];
			result[3] = grade_calculation(marks[3]);
			gpa[3] = gpa_calculation(result[3]);
			cout << "Grade in English 2nd paper : " << result[3];
			cout << "\nGPA in English 2nd paper : " << gpa[3];

			two_subject_avarage_gpa[1] = (gpa[2] + gpa[3]) / 2;
			cout << "\n---------------------Average GPA in English : " << two_subject_avarage_gpa[1];

			cout << "\nEnter marks of Physics 1st paper : ";
			cin >> marks[4];
			result[4] = grade_calculation(marks[4]);
			gpa[4] = gpa_calculation(result[4]);
			cout << "Grade in Physics 1st paper : " << result[4];
			cout << "\nGPA in Physics 1st paper : " << gpa[4];

			cout << "\nEnter marks of Physics 2nd paper : ";
			cin >> marks[5];
			result[5] = grade_calculation(marks[5]);
			gpa[5] = gpa_calculation(result[5]);
			cout << "Grade in Physics 2nd paper : " << result[5];
			cout << "\nGPA in Physics 2nd paper : " << gpa[5];

			two_subject_avarage_gpa[2] = (gpa[4] + gpa[5]) / 2;
			cout << "\n---------------------Average GPA in Physics : " << two_subject_avarage_gpa[2];

			cout << "\nEnter marks of Chemistry 1st paper : ";
			cin >> marks[6];
			result[6] = grade_calculation(marks[6]);
			gpa[6] = gpa_calculation(result[6]);
			cout << "Grade in Chemistry 1st paper : " << result[6];
			cout << "\nGPA in Chemistry 1st paper : " << gpa[6];

			cout << "\nEnter marks of Chemistry 2nd paper : ";
			cin >> marks[7];
			result[7] = grade_calculation(marks[7]);
			gpa[7] = gpa_calculation(result[7]);
			cout << "Grade in Chemistry 2nd paper : " << result[7];
			cout << "\nGPA in Chemistry 2nd paper : " << gpa[7];

			two_subject_avarage_gpa[3] = (gpa[6] + gpa[7]) / 2;
			cout << "\n---------------------Average GPA in Chemistry : " << two_subject_avarage_gpa[3];

			cout << "\nEnter marks of Higher Mathematics 1st paper : ";
			cin >> marks[8];
			result[8] = grade_calculation(marks[8]);
			gpa[8] = gpa_calculation(result[8]);
			cout << "Grade in Higher Mathematics 1st paper : " << result[8];
			cout << "\nGPA in Higher Mathematics 1st paper : " << gpa[8];

			cout << "\nEnter marks of Higher Mathematics 2nd paper : ";
			cin >> marks[9];
			result[9] = grade_calculation(marks[9]);
			gpa[9] = gpa_calculation(result[9]);
			cout << "Grade in Higher Mathematics 2nd paper : " << result[9];
			cout << "\nGPA in Higher Mathematics 2nd paper : " << gpa[9];

			two_subject_avarage_gpa[4] = (gpa[8] + gpa[9]) / 2;
			cout << "\n---------------------Average GPA in Higher Mathematics : " << two_subject_avarage_gpa[4];

			cout << "\nEnter marks of Biology 1st paper : ";
			cin >> marks[10];
			result[10] = grade_calculation(marks[10]);
			gpa[10] = gpa_calculation(result[10]);
			cout << "Grade in Biology 1st paper : " << result[10];
			cout << "\nGPA in Biology 1st paper : " << gpa[10];

			cout << "\nEnter marks of Biology 2nd paper : ";
			cin >> marks[11];
			result[11] = grade_calculation(marks[11]);
			gpa[11] = gpa_calculation(result[11]);
			cout << "Grade in Biology 2nd paper : " << result[11];
			cout << "\nGPA in Biology 2nd paper : " << gpa[11];

			two_subject_avarage_gpa[5] = (gpa[10] + gpa[11]) / 2;
			cout << "\n---------------------Average GPA in Biology : " << two_subject_avarage_gpa[5];

			if (two_subject_avarage_gpa[5] >= 3 && two_subject_avarage_gpa[5] <= 5)
			{
				two_subject_avarage_gpa[6] = two_subject_avarage_gpa[5] - 2;
			}
			else
			{
				two_subject_avarage_gpa[6] = two_subject_avarage_gpa[5];
			}

			cout << "\nEnter marks of ICT : ";
			cin >> marks[12];
			result[12] = grade_calculation(marks[12]);
			gpa[12] = gpa_calculation(result[12]);
			cout << "Grade in ICT : " << result[12];
			cout << "\nGPA in ICT : " << gpa[12];
			cout << "\n---------------------Average GPA in ICT : " << gpa[12];

			total_gpa = two_subject_avarage_gpa[0] + two_subject_avarage_gpa[1] + two_subject_avarage_gpa[2] + two_subject_avarage_gpa[3] + two_subject_avarage_gpa[4] + two_subject_avarage_gpa[6] + gpa[12];
			final_gpa = total_gpa / 6;
			if (final_gpa >= 5)
			{
				final_gpa = 5.00;
			}
			else
			{
				final_gpa;
			}
			cout << "\nTotal GPA is " << final_gpa << endl;

			break;
		default:
			cout << "\a\n\n\n------------------   Wrong input   ------------------\n\n\n";
			break;
		}
	}
	return 0;
}