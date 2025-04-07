#include <iostream>
#include <cstdlib>
#define POCKET_SIZE	52


using namespace std;
int Pocket[POCKET_SIZE] = { 0, };

void Initialize() 
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		Pocket[Index] = Index + 1;
	}
}

void Shuffle() 
{
	int Temp;
	for (int Count = 0; Count < POCKET_SIZE * 100; Count++)
	{
		int First = rand() % POCKET_SIZE;
		int Second = rand() % POCKET_SIZE;
		Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}
}

void Print() 
{
	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		cout << Pocket[Index] << ", ";
	}
}

int main() 
{
	Initialize();
	Shuffle();
	Print();
}

//int RandomRangeDemo(int RangeMin, int RangeMax) {
//	int Used[52] = { 0, };
//
//	int r = ((double)rand() / RAND_MAX) * (RangeMax - RangeMin) + RangeMin;
//	return r;
//}

/*int n;
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
	}*/