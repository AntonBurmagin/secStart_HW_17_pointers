#include <iostream>

void swap (int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void arraySwap (int *arr) {
	for (int i = 0; i < 5; i++) {
		swap(arr+i, arr + 10 - i*2);
	}
}

int main() {
	//17.4.1
	int a = 10;
    int b = 20;
    swap(&a, &b);
	std::cout << a << " " << b << std::endl;
	
	//17.4.2
	// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// arraySwap(arr);
	
	return 0;
}
