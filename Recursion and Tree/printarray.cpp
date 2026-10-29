#include <iostream>
#include <vector>

using namespace std;

void printArray(int index, const vector<int>& numbers) {
	if (index == numbers.size()) {
		return;
	}

	cout << numbers[index] << ' ';
	printArray(index + 1, numbers);
}

int main() {
	int n;

	cout << "Enter the number of elements: ";
	cin >> n;

	vector<int> numbers(n);

	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	cout << "Array elements: ";
	printArray(0, numbers);
	cout << '\n';

	return 0;
}
