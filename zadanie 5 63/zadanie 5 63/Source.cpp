#include <iostream>
#include <string>

using namespace std;
int i;

int main()
	{
	string tekst;
	int spacje;
	spacje = 0;
	getline(cin, tekst);
	for (i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] == ' ')
			spacje++;
	}
	cout << "W" << tekst << " mamy " << spacje << "spacji/e";
	
	getchar();
	return 0;
	// Przybylski 

	}
