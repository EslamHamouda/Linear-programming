#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	long double x1, x2, y1, y2, c1, c2, d, x, y, p1, p2, z, se1, se2, se3, se4;
	vector<pair<double, double>>s(2);
	char c;
	cout << "Enter m to maximize or n to minimize\n";
	cout << "Your choice: ";
	cin >> c;
	switch (c)
	{
	case'm':
		cout << "Enter X1 , X2 and Availability\n";
		cout << "X1="; cin >> x1;
		cout << "X2="; cin >> y1;
		cout << "Availability="; cin >> c1;
		cout << "----------------------------------------------------------\n";
		cout << "Enter X1 , X2 and Availability\n";
		cout << "X1="; cin >> x2;
		cout << "X2="; cin >> y2;
		cout << "Availability="; cin >> c2;
		cout << "Enter the profits or costs respectively:"; cin >> p1 >> p2;
		d = (x1 * y2) - (y1 * x2);
		x = ((c1 * y2) - (y1 * c2)) / d;
		y = ((x1 * c2) - (c1 * x2)) / d;
		cout << "----------------------------------------------------------\n";
		cout << "The point of intersection is (" << x << "," << y << ")\n";
		 se1 = c1 / y1;
		 se2 = c2 / y2;
		 se3 = c1 / x1;
		 se4 = c2 / x2;
		se1 < se2 ? s[0].second = se1 : s[0].second = se2;
		se3 < se4 ? s[1].first = se3 : s[1].first = se4;
		cout << "Point 1 (" << s[0].first << "," << s[0].second << ")\n";
		cout << "Point 2 (" << s[1].first << "," << s[1].second << ")\n";
		z = (x * p1) + (y * p2);
		for (int i = 0; i < 2; i++)
		{
			long double z2;
			z2 = (s[i].first*p1)+(s[i].second * p2);
			if (z2>z)
			{
				z = z2;
			}
		}
		cout << "Max Z= " << z << endl;
		break;
	case'n':
		cout << "Enter X1 , X2 and Availability\n";
		cout << "X1="; cin >> x1;
		cout << "X2="; cin >> y1;
		cout << "Availability="; cin >> c1;
		cout << "----------------------------------------------------------\n";
		cout << "Enter X1 , X2 and Availability\n";
		cout << "X1="; cin >> x2;
		cout << "X2="; cin >> y2;
		cout << "Availability="; cin >> c2;
		cout << "Enter the profits or costs respectively:"; cin >> p1 >> p2;
		d = (x1 * y2) - (y1 * x2);
		x = ((c1 * y2) - (y1 * c2)) / d;
		y = ((x1 * c2) - (c1 * x2)) / d;
		cout << "----------------------------------------------------------\n";
		cout << "The point of intersection is (" << x << "," << y << ")\n";
		se1 = c1 / y1;
		se2 = c2 / y2;
		se3 = c1 / x1;
		se4 = c2 / x2;
		se1 > se2 ? s[0].second = se1 : s[0].second = se2;
		se3 > se4 ? s[1].first = se3 : s[1].first = se4;
		cout << "Point 1 (" << s[0].first << "," << s[0].second << ")\n";
		cout << "Point 2 (" << s[1].first << "," << s[1].second << ")\n";
		z = (x * p1) + (y * p2);
		for (int i = 0; i < 2; i++)
		{
			long double z2;
			z2 = (s[i].first * p1) + (s[i].second * p2);
			if (z2 < z)
			{
				z = z2;
			}
		}
		cout << "Min Z= " << z  << endl;
		break;
	default:
		cout << "Try again...\n";
		break;
	} 
	

}
