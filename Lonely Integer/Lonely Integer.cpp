// Lonely Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, f = 0, temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		f ^= temp;
	}
	cout << f;

    return 0;
}

