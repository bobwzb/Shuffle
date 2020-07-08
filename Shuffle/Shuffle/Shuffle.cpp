

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
void FisherYatesShuffle(vector<int>& pool) {

}
int main()
{
	vector<int> pool(54);
	for (int i = 0; i < 54; i++) {
		pool[i] = i+1;
		if (i + 1 < 10) cout << pool[i] << "  ";
		else cout << pool[i] << " ";
		if ((i + 1) % 9 == 0) cout << endl;
	}
}

