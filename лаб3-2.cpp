/*Series12. Дан набор ненулевых целых чисел; признак его завершения — число 0. Вывести количество чисел в наборе.*/
#include <iostream>

using namespace std;

int main()
{
	int x, k=0;
	do
	{
		cin >> x;
		if (x)
			k += 1;
		
	} while (x != 0);
	cout << k;
}
