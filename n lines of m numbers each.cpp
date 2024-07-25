/*Using nested for loops, write a program that asks the user to enter two integers n and m.The program then asks the user to enter n lines of m numbers each, and calculates and outputs the sum of each line of m numbers.For example, if n = 3 and m = 4, A sample run would be(3 lines, 4 numbers per line) :

	Enter 4 numbers : 3 5 7 2
	Sum = 17
	Enter 4 numbers : 4 6 8 3
	Sum = 21
	Enter 4 numbers : 1 0 - 2 9
	Sum = 8*/



#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int sum;
	cout << "Please enter two integers (n for lines, m for numbers): ";
	cin >> n >> m;
	int input;
	cout << "\n" << "Please enter " << n << " lines of " << m << " numbers." << endl;
	
	for (int i = 0; i < n; i++) {
		sum = 0;
		cout << " Enter " << m << " numbers:  ";
		for (int i = 0; i < m; i++) {
			cin >> input;
			sum = sum + input;
		}
		cout << "Sum: " << sum << endl;
	}


}

