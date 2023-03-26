#include <iostream>
#include <time.h>

using namespace std;

class array1 {
	int* arr;
	int size;
public:
	int a, b, c, d, e, f, g;
public:
	array1() {
		arr = NULL;
		size = 0;
		a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; g = 0;
	}
	array1(int index0, int index1, int index2, int index3, int index4, int index5, int index6) {
		a = index0; b = index1; c = index2; d = index3; e = index4; f = index5; g = index6;
		srand(time(NULL));
		size = index0 * index1 * index2 * index3 * index4 * index5 * index6;
		arr = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 10;
		}
	}
	void create() {
		srand(time(NULL));
		size = a * b * c * d * e * f * g;
		arr = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 10;
		}
	}
	void Insert(int, int, int, int, int, int, int);
	int retrieve(int, int, int, int, int, int, int);
};

void array1::Insert(int index0, int index1, int index2, int index3, int index4, int index5, int index6) {
	int s = 0;
	s = (index0 * b * c * d * e * f * g) + (index1 * c * d * e * f * g) + (index2 * d * e * f * g) + (index3 * e * f * g) + (index4 * f * g) + (index5 * g) + index6;
	if (s > size) {
		cout << "Invalid address, cannot be inserted!\n";
		return;
	}
	cout << "Enter value for arr[" << index0 << "][" << index1 << "][" << index2 << "][" << index3 << "][" << index4 << "][" << index5 << "][" << index6 << "]:\n";
	cin >> arr[s];
}

int array1::retrieve(int index0, int index1, int index2, int index3, int index4, int index5, int index6) {
	int s = 0;
	s = (index0 * b * c * d * e * f * g) + (index1 * c * d * e * f * g) + (index2 * d * e * f * g) + (index3 * e * f * g) + (index4 * f * g) + (index5 * g) + index6;
	if (s > size) {
		cout << "Invalid address, cannot be retrieved!\n";
		return -1;
	}
	//cout << "Retrieved value for arr[" << index0 << "][" << index1 << "][" << index2 << "][" << index3 << "][" << index4 << "][" << index5 << "][" << index6 << "]: " << arr[s] << endl << endl;
	return (arr[s]);
}
