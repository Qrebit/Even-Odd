#include <iostream>
#include <ctime>

using namespace std;

void Fill(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}

void main() {
	srand(time(0));
	const int n = 10;
	int arr[n];
	Fill(arr, n);
	Print(arr, n);
	int ev = 0, od = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) ev++;
		else od++;
	}
	int* even = new int[ev];
	int* odd = new int[od];

	for (int i = 0, evcon = 0, odcon = 0; i < n; i++) {
		if (arr[i] % 2 == 0) even[evcon++] = arr[i];
		else odd[odcon++] = arr[i];

	}
	Print(even, ev);
	Print(odd, od);
	delete[] even;
	delete[] odd;
}