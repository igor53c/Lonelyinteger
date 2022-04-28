// Lonelyinteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int lonelyinteger(vector<int>);

int main()
{
	vector<int> vect{ 0, 0, 1, 2, 1 };

	cout << lonelyinteger(vect) << endl;

	return EXIT_SUCCESS;
}

int lonelyinteger(vector<int> a) 
{
	vector<bool> temp;

	temp.reserve(a.size());

	for (int i = 0; i < a.size() ; i++)
	{
		temp.push_back(true);
	}

	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = i + 1; temp[i] && j < a.size(); j++)
		{
			if (temp[j] && a[i] == a[j])
			{
				temp[i] = false;
				temp[j] = false;
				break;
			}

			if (j == a.size() - 1) return a[i];
		}
	}

	return a[a.size() - 1];
}
