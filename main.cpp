#include <iostream>

void swap (int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void reverseArr (int *arr) {
	for (int i = 0; i < 5; i++) {
		swap(arr+i, arr + 9 - i);
	}
}

bool substr(const char* text, const char* sub) {
    for (int i = 0; *(text + i) != '\0' ; i++) {
        for (int k =0; ; k++) {
            if(*(sub + k) == '\0')
                return true;
            if (*(text + i +k) == '\0')
                break;
            if (*(text + i + k) != *(sub + k))
                break;
        }
    }
    return false;
}

int main() {
	//17.4.1
	// int a = 10;
    // int b = 20;
    // swap(&a, &b);
	// std::cout << a << " " << b << std::endl;
	
	//17.4.2
	// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// reverseArr(arr);
    // for (auto i : arr) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;
	
    //17.4.3 char* substr search
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";
    const char* e = "d";
    std::cout << substr(a,b) << " " << substr(a,c) << " " << substr(a, e) << std::endl;

	return 0;
}
