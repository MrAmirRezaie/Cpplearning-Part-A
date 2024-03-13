#include <iostream>
using namespace std;

//Part[A]

//Write a program that takes two numbers from the user and prints the positive numbers between the two numbers.

int main()
{

	double num1,
		num2;

	cout << "Enter your first number : ";
	cin >> num1;

	cout << "Enter your second number : ";
	cin >> num2;

	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << "	";
		}
	}

	return 0;
}