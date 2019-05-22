#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
	int i, n;
	double sum = 0;
	cout << "Input number of terms: ";
	cin >> n;
	cout << "The series is given by: (1/1)+(1/2)+(1/3)+(1/4)+(1/5) " << endl;
	if (n!=0)
	{
		for  (i=1; i<=n; i++)
		{
			sum = sum + (1.0/i);
		}
	}
	cout << "The sum of the  " << n << " terms is: " << setprecision(5) << sum << endl;
	getch();
	return 0;
}

