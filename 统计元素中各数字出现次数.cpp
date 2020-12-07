#include <iostream>
using namespace std;
int d(int a,int m,int n)
{
	m = a % 10;
	n = (a - m) / 10;
	return m;
}
int dd(int a, int m, int n)
{
	m = a % 10;
	n = (a - m) / 10;
	return n;
}
int main()
{
	int x=0, y=0;
	int a[] = { 5,26,98,77,1,27,30 };
	static int b[10];
	for (int i = 0; i <= 6; i++)
	{
		if (a[i] > 10)
		{
			x = d(a[i], x, y);
			y = dd(a[i], x, y);
			for (int z = 0; z <= 9; z++)
			{
				if (x == z)
					b[z] += 1;
				if (y == z)
					b[z] += 1;
			}
		}
		else
			for (int z = 0; z < 9; z++)
			{
				if (a[i] == z)
					b[z] = b[z] + 1;
			}
	}
	for (int z = 0; z <= 9; z++)
		cout << b[z] << '\t';
	cout << endl;	
	return 0;
}
