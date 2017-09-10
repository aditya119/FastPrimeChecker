#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
	if(n == 0)
		return false;
	if(n == 1)
		return false;
	int x = sqrt(n);
	for(int i = 2; i <= x; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int x;
	cout << "enter number:\n";
	cin >> x;
	while(x < 0)
	{
		cout << "enter positive integers only\n";
		cin >> x;
	}
	cout << "the number is prime: ";
	if(isPrime(x))
		cout << "true";
	else
		cout << "false";
	return 0;
}
