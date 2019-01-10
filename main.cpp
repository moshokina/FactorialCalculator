#include <iostream>

using namespace std;

int factorial(int input_value)
{
	if (input_value >= 0)
	{
		if (input_value == 0)
			return 1;
		return (input_value * factorial(input_value - 1));
	}
}

int main()
{
	int input_value;
	int factorial_result = 0;
	cout << "Input value for factorial calculating:" << endl;
	cin >> input_value;
	cout << "Calculating " << input_value << "!" << endl;
	factorial_result = factorial(input_value);
	cout << "Result: " << factorial_result << endl;
	return 0;
}
