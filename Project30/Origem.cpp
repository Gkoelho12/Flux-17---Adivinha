#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	int m;
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int n = rand() % 100;
	do
	{
		cout << "Escolha um n�mero\n";
		cin >> m;

		if (m > n)
		{
			cout << "O seu n�mero � maior\n";
		}
		else if (m < n)
		{
			cout << "O seu n�mero � menor\n";
		}
		else if (m = n)
		{
			cout << "ACERTOU!!!";
			break;
		}
	} while (m != n);
}