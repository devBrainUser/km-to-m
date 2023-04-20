#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int km;
	double m;

	cout << "¬ведите километры в час:" << endl;
		cin >> km;

		cout << (double) km * 1000 / 3600<<" ћетров за секунду";


}