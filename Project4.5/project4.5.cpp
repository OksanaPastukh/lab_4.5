// Lab_04_5.cpp
// < Пастух Оксани >
// Лабораторна робота № 4.5
// "Попадання" у плоску фігуру.
// Варіант 14

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;
int main()
{
	double x, R1, R2, R0, y;

	cout << "R1 ="; cin >> R1;
	cout << "R2 = "; cin >> R2;

	 srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		R0 = sqrt((x * x) + (y * y));

		if ((x < 0 && y>0) || (x > 0 && y < 0))
			cout << "no" << endl;
		else if (
			R2 <= R0
			&&
			R0 <= R1
			)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
			
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 2*R1 * rand() / RAND_MAX - R1;
		y = 2*R1 * rand() / RAND_MAX - R1;

		R0 = sqrt((x * x) + (y * y));

			if ((x < 0 && y>0) || (x > 0 && y < 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
			else if (
				R2 <= R0
				&&
				R0 <= R1
				)
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
