/* While20. Дано целое число N(> 0).С помощью операций деления нацело и взятия остатка от деления определить,
имеется ли в записи числа N цифра «2».Если имеется, то вывести true, если нет — вывести false.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout.setf(ios::boolalpha);
	bool a;
	int n,x=0;
	cin >> n;
	while (n)
	{
		if (abs(n) % 10 == 2)
			x += 1;
		n = n / 10;
	}
	a = x > 0;
	cout << a;

}

// 12345 -> true
// -334 -> false
// -2 -> true
// 0 -> false
// 895764 -> false
