#include <iostream>

void exercice1(void) {
	int a;
	int b;
	int d;
	int c;

	std::cout << "Entrer 4 nombre" << std::endl;
	std::cin >> a >> b >> c >> d;

	int add = a + b + c + d;
	float moy = add / static_case<float>(4);
	int max;
	if (a > max) {
		max = a;
	}
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	int min;
	if (a < min) {
		min = a;
	}
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	if (d < min) {
		min = d;
	}

	std::cout << "somme : " << add << std::endl;
	std::cout << "moyenne : " << moy << std::endl;
	std::cout << "produit : " << std::endl;
	std::cout << ""

}

void main() {
	exercice1();
}