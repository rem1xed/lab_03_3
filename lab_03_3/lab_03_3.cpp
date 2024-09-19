// Lab_03_3.cpp
// Lypko Mykhailo
// Laboratory work N 3.3
// Розгалуження, задане графіком функції.
// Variant 17

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;
	cout << "x = "; cin >> x;
	cout << "\nR = "; cin >> R;
	
	if (x <= -1 - R)
		y = -1;
	else
	{
		if (x > -1 - R && x <= -1)
			y = -sqrt((pow(R, 2) -pow((x + 1), 2)));
		else
		{
			if (x > -1 && x <= 2)
				y = -R;
			else
				y = -R * (R / (4 - 2)) * (x - 2);
		}
	}
	cout << "\ny = " << y;

	cin.get();
	return 0;
}