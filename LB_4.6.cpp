#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double P, S;
	int k, i;

	// 1) while(…) {… while(…) {…} …};
	P = 1;
	i = 1;
	while (i <= 15)

	{
		S = 0;
		k = 1;
		while (k <= i)

		{
			S += (1.0 / k);
			k++;

		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
		i++;

	}
	cout << P << endl;
	// 2) do{… do{…} while(…) …} while(…);
	P = 1;
	i = 1;
	
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += (1.0 / k);
			k++;
		} while (k <= i);
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
		i++;
	} while (i <= 15);
	cout << P << endl;
	// 3) for(…; …; n++) {… for(…; …; k++) {…} …};
	P = 1;
	for (i = 1; i <= 15; i++)

	{
		S = 0;
		for (k = 1; k <= i; k++)

		{
			S += (1.0 / k);

		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);

	}
	cout << P << endl;
	// 4) for(…; …; n--) {… for(…; …; k--) {…} …}
	P = 1;
	for (i = 15; i >= 1; i--)

	{
		S = 0;
		for (k = i; k >= 1; k--)

		{
			S += (1.0 / k);

		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
	}
	cout << P << endl;
	return 0;
}
