#include <iostream>
using namespace std;

int main()
{
	unsigned int eingabe_array[9];
	for (int i = 0; i < 9; i++)
	{
		int eingabe;
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 6);
		eingabe_array[i] = eingabe;
	}

	for (int i = 0; i < 9; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << eingabe_array[i] << endl;
	}

	system("PAUSE");
	return 0;
}