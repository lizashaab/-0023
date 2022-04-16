#include <iostream>
using namespace std;
int main() 
{
	int n, summ = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			summ = summ + i;
	cout << summ << endl ;
	return 0;
}