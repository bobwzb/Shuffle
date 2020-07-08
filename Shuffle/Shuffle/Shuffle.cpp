

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
void FisherYatesShuffle(vector<int>& pool) {
	for (int i = 53; i > 1; i--) {
		int j = i - 1;
		j = rand() % j;
		swap(pool[i], pool[j]);
	}
}
int main()
{
	vector<int> pool(54);
	cout << endl << "Original:" << endl;
	for (int i = 0; i < 54; i++) {
		pool[i] = i+1;
		if (i + 1 < 10) cout << pool[i] << "  ";
		else cout << pool[i] << " ";
		if ((i + 1) % 9 == 0) cout << endl;
	}
	FisherYatesShuffle(pool);
	cout <<endl<< "After Shuffle:" << endl;
	for (int i = 0; i < 54; i++) {
		if (pool[i] < 10) cout << pool[i] << "  ";
		else cout << pool[i] << " ";
		if ((i + 1) % 9 == 0) cout << endl;
	}
}

