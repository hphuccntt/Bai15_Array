#include <iostream>
using namespace std;
int main()
{ // create an array of strings
	string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
	cars[1] = "ferari";
	// Loop through strings
	for (int i = 0; i < 5; i++)
	{
		cout << cars[i] << "\n";
	}
	return 0;
}