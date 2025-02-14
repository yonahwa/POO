#include <iostream>
#include <string>
#include <bitset>

void exercice1(void) {
	int a;
	int b;
	int d;
	int c;

	std::cout << "Entrer 4 nombre" << std::endl;
	std::cin >> a >> b >> c >> d;

	int add = a + b + c + d;

	float moy = add / static_cast<float>(4);

	int prod = a * b * c * d;

	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}

	int min = a;	
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
	std::cout << "max : " << max << std::endl;
	std::cout << "min : " << min << std::endl;
}

void exercice2() {
	int r;

	std::cout << "Entrez le rayon du cercle : ";
	std::cin >> r;

	std::cout << "Circonference : " << (2 * 3.14159 * r) << std::endl;
	std::cout << "Aire : " << (3.14159 * (r * r)) << std::endl;

}

void exercice3() {
	std::string nom;

	std::cout << "Nom : ";
	std::getline(std::cin, nom);

	std::cout << "Bonjour " << nom << std::endl;

}

void exercice4() {
	int bitone = 0;
	int nombre;
	std::cout << "Entrer un nombre : ";
	std::cin >> nombre;

	std::bitset<8> bits(nombre);
	for (int i = 0; i < 8; i++) {
		if (bits[i] == 1) {
			bitone++;
		}
	}
	std::cout << bitone << std::endl;

}

void exercice5() {
	int nombre;
	std::cout << "Entrer un nombre : ";
	std::cin >> nombre;

	std::bitset<8> bits(nombre);
	

	for (int i = 0; i < 8;i++) {
		if (bits[i] == 1) {
			bits[i] = 0;
		}
		else {
			bits[i] = 1;
		}
	}
	
	std::cout << "l'inverse : " << bits.to_ulong() << std::endl;
}

void exercice6() {
	int nombre;
	std::cout << "Entrer un nombre : ";
	std::cin >> nombre;

	if (nombre % 2 == 0) {
		std::cout << nombre << " est une puissance de 2" << std::endl;
	}
	else {
		std::cout << nombre << " n'est pas une puissance de 2" << std::endl;
	}
}
void exercice7() {
	int Ee = 6;
	int Ei = 2;
	int a = 0;
	for (int i = 1; i <= Ee; i++) {
		std::cout << " ";
	}
	std::cout << "*" << std::endl;
	Ee = Ee - 2;
	while (Ee > 0) {
		for (int i = 0; i < Ee; i++) {
			std::cout << " ";
		}
		std::cout << "*";
		for (int i = 0; i < Ei; i++) {
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
		Ee = Ee - 2;
		Ei = Ei + 4;
	}
}

void exercice9() {
	int n;

	std::cout << "Entrez votre nombre : ";
	std::cin >> n;
	std::cout << sizeof(n);
	//transformer mon nombre en tableau de character
	//char sep[sizeof(n)];



}

void main() {
	exercice9();
}
