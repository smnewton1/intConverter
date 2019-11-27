//CSIS 112 - Samuel Newton - Integer Converter
//This program reads in an integer between 0 and 200 determined by the user and converts it to a new multiple value. It then represents this new value with 0's and 1's.
#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int n, m, N;
	bool flag = true;

	srand(time(0));
	int r = (rand() % 15) + 1;        // creating random ints that will serve as multiples of user-inputted value of n. 


		cout<< "Multiple Value: " << r << endl;

	do {
		cout << "Please enter an integer within the value of 0 and 200." << endl;
		cin >> n;
	} while (n < 0 || n > 200);

	N = 0;

	for (int x = 0; x < r; x++) {         // loop that will determine new value for n (N) , based of a multiple value, r.  For example, if r is 3, then N = n + n + n.

		N = N + n;
	
	}
         cout << "New value for n after applying multiple: " << N << endl;



	// Below, we represent new multiple value, N, with 0's and 1's by letting 1 = 2, and 0 = 1.

	int j = (N / 2);

	m = N % 2;
	for (int i = 0; m == 0 && i < j; i++) {             
		cout << "1";
	}

	if (m == 1)
		flag = false;

	while (flag == false) {

		for (int i = 0; i < j; i++) {
			cout << "1";
		}
		cout << "0";
		flag = true;
	}



}

