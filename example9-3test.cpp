#include <iostream>

using namespace std;

int main()
{
	short numbers[] = {10,20,30,40,50};

	//Pointer will print the address of the first element of the numbers list.
	cout << "The first element of the array is: ";
	cout << *numbers << endl;

	//Will print all numbers in numbers.
	cout << numbers << endl;

	//Will print the address of index 0.
	cout << &numbers[0] << endl;

	//Will print the address of index 1;
	cout << &numbers[1] << endl;

	//*(list + i) is the same as list[i] returns the address at element i.

	return 0;
}
