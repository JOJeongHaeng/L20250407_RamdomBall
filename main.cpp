#include <iostream>
#include <cstdlib>
#include <string>
#define CARD_NUMBER	52


using namespace std;
string StrDeck[CARD_NUMBER] = { "", };
int Count = 0;

int Initialize() 
{
	for (int Index = 0; Index < CARD_NUMBER; Index++)
	{
		if (Index / 13 == 0) {
			if (Index % 13 == 1)
			{
				StrDeck[Index] = "♡ A";
			}
			else if (Index % 13 < 10) 
			{
				StrDeck[Index] = "♡ " + to_string((Index % 13)+1);
			}
			else if (Index % 13 == 10)
			{
				StrDeck[Index] = "♡ J";
			}
			else if (Index % 13 == 11)
			{
				StrDeck[Index] = "♡ Q";
			}
			else if (Index % 13 == 12)
			{
				StrDeck[Index] = "♡ K";
			}
		}
		else if (Index / 13 == 1) {
			if (Index % 13 == 1)
			{
				StrDeck[Index] = "◇ A";
			}
			else if (Index % 13 < 10)
			{
				StrDeck[Index] = "◇ " + to_string((Index % 13) + 1);
			}
			else if (Index % 13 == 10)
			{
				StrDeck[Index] = "◇ J";
			}
			else if (Index % 13 == 11)
			{
				StrDeck[Index] = "◇ Q";
			}
			else if (Index % 13 == 12)
			{
				StrDeck[Index] = "◇ K";
			}
		}
		else if (Index / 13 == 2) {
			if (Index % 13 == 1)
			{
				StrDeck[Index] = "♣ A";
			}
			else if (Index % 13 < 10)
			{
				StrDeck[Index] = "♣ " + to_string((Index % 13) + 1);
			}
			else if (Index % 13 == 10)
			{
				StrDeck[Index] = "♣ J";
			}
			else if (Index % 13 == 11)
			{
				StrDeck[Index] = "♣ Q";
			}
			else if (Index % 13 == 12)
			{
				StrDeck[Index] = "♣ K";
			}
		}
		else if (Index / 13 == 3) {
			if (Index % 13 == 1)
			{
				StrDeck[Index] = "♠ A";
			}
			else if (Index % 13 < 10)
			{
				StrDeck[Index] = "♠ " + to_string((Index % 13) + 1);
			}
			else if (Index % 13 == 10)
			{
				StrDeck[Index] = "♠ J";
			}
			else if (Index % 13 == 11)
			{
				StrDeck[Index] = "♠ Q";
			}
			else if (Index % 13 == 12)
			{
				StrDeck[Index] = "♠ K";
			}
		}
	}
	return 0;
}

void Shuffle() 
{
	srand((unsigned int)time(NULL));
	string Temp;
	for (int Count = 0; Count < CARD_NUMBER * 100; Count++)
	{
		int First = rand() % CARD_NUMBER;
		int Second = rand() % CARD_NUMBER;
		Temp = StrDeck[First];
		StrDeck[First] = StrDeck[Second];
		StrDeck[Second] = Temp;
	}
}

void Start() 
{
	cout << "Computer" << endl << "============" << endl;
	cout << StrDeck[0] << ", " << StrDeck[1] << endl;
	cout << "Player" << endl << "============" << endl;
	cout << StrDeck[2] << ", " << StrDeck[3] << endl;
	Count = 3;
}
	
int main() 
{
	Count = Initialize();
	Shuffle();
	Start();
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