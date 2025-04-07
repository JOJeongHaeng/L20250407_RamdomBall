#include <iostream>
#include <cstdlib>

using namespace std;

int RandomRangeDemo(int RangeMin, int RangeMax) {
	int Used[52] = { 0, };

	int r = ((double)rand() / RAND_MAX) * (RangeMax - RangeMin) + RangeMin;
	return r;
}

int main() {
	int n;
	cout << "몇개를 뽑으시겠습니까?" << endl;
	cin >> n;
	bool* Used = (bool*)calloc(52, sizeof(bool));

	for (int i = 0; i < n; i++) {
		int Ball = RandomRangeDemo(1, 52);
		if (!Used[Ball]) {
			Used[Ball] = true;
			cout << Ball << endl;
		}
		else {
			i--;
		}
	}
}
