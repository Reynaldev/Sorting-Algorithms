#include <iostream>
#include <vector>

std::vector<int> bubbleSort(std::vector<int> number) {
	// Iterate from the end of array.
	for (int i = number.size() - 1; i >= 0; i--) {
		// Iterate from the front until index i.
		for (int j = 1; j <= i; j++) {
			// If previous item is bigger from the current one, swap it.
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
	// Iterate.
	for (int i = 0; i < number.size(); i++) {
		int min = number[i];
		int swap = i;

		// Find the smallest item in the array.
		for (int j = i; j < number.size(); j++) {
			if (number[j] < min) {
				min = number[j];
				swap = j;
			}
		}

		// Swap.
		int temp = number[i];
		number[i] = min;
		number[swap] = temp;
	}

	return number;
}

std::vector<int> insertionSort(std::vector<int> number) {
	// Iterate.
	for (int i = 1; i <= number.size() - 1; i++) {
		// If the current item is bigger than the previous one
		// put it to the left until the left item is smaller or equal to the current one.
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

std::vector<int> mergeSort(std::vector<int> number) {
	std::vector<int> subArr = number;

	// Divide the array into smaller part by dividing it by 2.
	int size = number.size();
	int index = 0;
	while (size % 2 == 0 && size > 1) {
		index = size;
		size /= 2;
	}

	std::cout << "\n" << size << std::endl;

	return number;
}

int main() {
	std::vector<int> number = { 8, 9, 2, 1, 5, 3, 7, 0, 4, 6};


	while (true) {
		int input;

		std::cout << "Pick any of this sorting algorithm\n"
			<< "1. Bubble Sort\n"
			<< "2. Selection Sort\n"
			<< "3. Insertion Sort\n"
			<< "4. Merge Sort\n"
			<< ">> ";

		std::cin >> input;

		std::cout << "\nUnsorted: ";
		for (int n : number) {
			std::cout << n;
		}

		std::cout << std::endl;

		switch (input)
		{
		case 1:
			std::cout << "Bubble Sort: ";
			for (int n : bubbleSort(number)) {
				std::cout << n;
			}
			break;
		case 2:
			std::cout << "Selection Sort: ";
			for (int n : selectionSort(number)) {
				std::cout << n;
			}
			break;
		case 3:
			std::cout << "Insertion Sort: ";
			for (int n : insertionSort(number)) {
				std::cout << n;
			}
			break;
		case 4:
			std::cout << "Merge Sort: ";
			for (int n : mergeSort(number)) {
				std::cout << n;
			}
			break;
		default:
			std::cout << "\nWrong input!";
		}

		std::cout << std::endl;

		system("pause");
		system("cls");
	}

	return 0;
}