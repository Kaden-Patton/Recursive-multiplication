#include <iostream>

int recursive_multiply(int x, int y);

int main()
{
	std::cout << "Please enter two integers separated by a space: ";
	int x = 0, y = 0;
	std::cin >> x >> y;

	int product = recursive_multiply(x, y);

	std::cout << "The product is: " << product;
	return 0;
}

int recursive_multiply(int x, int y) {
	if (x == 0 || y == 0) {
		return 0;
	}
	else {
		return x + recursive_multiply(x, y - 1);
	}
}