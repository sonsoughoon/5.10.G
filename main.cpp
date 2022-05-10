#include <iostream>

using namespace std;

int SSort(int* Array, int Count)// 정렬 퀵 소트라는 방법
{
	for (int i = 0; i < Count; ++i)
	{
		for (int j = 0; j < Count; ++j)
		{
			if (Array[i] < Array[j])
			{
				int Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
			}
		}
	}
}


int ArraySum(int* Array, int Count)
{
	int Sum = 0;

	for (int i = 0; i < Count; ++i)
	{
		Sum += Array[i];
	}

	return Sum;
}

int main()
{
	int Count = 0;

	cin >> Count;

	int* Array = new int[Count];

	for (int i = 0; i < Count; ++i)
	{
		cin >> Array[i];
	}

	int Sum = ArraySum(Array, Count);

	cout << Sum << endl;

	


	for (int i = 0; i < Count; ++i)
	{
		cout << Array[i] << endl;
	}

	return 0;
}