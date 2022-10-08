#include <cmath>
#include <iostream>
using namespace std;

int getDiff(int[], int);
const int N = 10;

int main()
{
	int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
	int max, idx, i;

	for (i = 0; i < N - 1; i++)
	{
		if ((i == 0) || getDiff(number, i) > max)
		{
			max = getDiff(number, i);
			idx = i;
		}
	}
	cout << "The pair is " << number[idx] << "\t" << number[idx + 1] << endl;
}

int getDiff(int n[], int i)
{
	int diff = abs(n[i] - n[i + 1]);
	return diff;
}