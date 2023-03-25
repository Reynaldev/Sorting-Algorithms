#include <iostream>
#include <vector>

std::vector<int> bubbleSort(std::vector<int> number) {
	for (int i = number.size() - 1; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (number[j - 1] > number[j]) {
				int temp = number[j - 1];
				number[j - 1] = number[j];
				number[j] = temp;
			}
		}
	}

	return number;
}

std::vector<int> selectionSort(std::vector<int> number) {
	for (int i = 0; i < number.size(); i++) {
		int min = number[i];
		int swap = i;

		for (int j = i; j < number.size(); j++) {
			if (number[j] < min) {
				min = number[j];
				swap = j;
			}
		}

		int temp = number[i];
		number[i] = min;
		number[swap] = temp;
	}

	return number;
}

std::vector<int> insertionSort(std::vector<int> number) {
	for (int i = 1; i <= number.size() - 1; i++) {
		for (int j = i; j > 0; j--) {
			if (number[j - 1] > number[j]) {
				int temp = number[j - 1];
				number[j - 1] = number[j];
				number[j] = temp;
			}
		}
	}

	return number;
}

int main() {
	std::vector<int> number = { 8, 9, 2, 1, 5, 3, 7, 0, 4, 6};

	std::cout << "Unsorted: ";
	for (int n : number) {
		std::cout << n;
	}

	std::cout << std::endl;

	std::cout << "Sorted: ";
	// Uncomment sorting algorithm you want to use
	/*for (int n : bubbleSort(number)) {
		std::cout << n;
	}*/
	
	/*for (int n : selectionSort(number)) {
		std::cout << n;
	}*/

	for (int n : insertionSort(number)) {
		std::cout << n;
	}

	return 0;
}