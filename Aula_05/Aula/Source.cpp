#include <iostream>
#include <time.h>


void impVet(int *n, int t) {

	for (int i = 0; i < t; i++) {
		std::cout << "[" << i << "] = " << *(n + i) << std::endl;
	}
}


int main() {
	srand(time(NULL));
	int t;
	
	std::cin >> t;

	int *arr = (int*)malloc(t*sizeof(int));

	for (int i = 0; i < t; i++) {
		*(arr + i) = rand() % 50;
	}

	impVet(arr, t);

	system("pause");
	return 0;
}