#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "    multiplication table\n";
	cout << "-------------------------------\n";

	cout << "   |   ";

	for (int j = 1; j <= 12; j++)
		cout << setw(5) << j;
	cout << "\n";

	for (int i = 1; i <= 12; i++)
	{
		cout << i << " | ";
		for (int j = 1; j <= 12; j++)
		{
			cout << setw(5) << i * j;
		}
		cout << "/n";
	}
	return 0;
}