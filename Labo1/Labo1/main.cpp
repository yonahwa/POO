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
	int Ee = 5;
	int Ei = 1;
	int a = 0;
	for (int i = 1; i < Ee; i++) {
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
		Ee = Ee - 1;
		Ei = Ei + 2;
	}
	while (Ei > 0) {
		for (int i = 0; i < Ee; i++) {
			std::cout << " ";
		}
		std::cout << "*";
		for (int i = 0; i < Ei; i++) {
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
		Ee = Ee + 1;
		Ei = Ei - 2;
	}
	for (int i = 1; i < Ee+1; i++) {
		std::cout << " ";
	}
	std::cout << "*" << std::endl;
}

void exercice8() {
	int space = 2;
	int star = 1;
	while (space >= 0)
	{
		for (int i = 0; i < space; i++) {
			std::cout << " ";
		}
		for (int i = 0; i < star; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		space -= 1;
		star += 2;
	}
	space = 2;
	for (int i = 0; i < 6; i++) {
		for (int y = 0; y < space; y++) {
			std::cout << " ";
		}
		std::cout << "*" << std::endl;
	}
}

void exercice9() {
	int n;
	int total = 0;
	std::cout << "Entrez votre nombre : ";
	std::cin >> n;
	std::string num = std::to_string(n);
	int length = num.size();
	int tabNum[25] = {0};
	for (int i = 0; i < num.size(); i++) {
		tabNum[i] = num[i] - '0';
	}
	for (int i = 0; i<length; i++) {
		if (i == 0) {
			std::cout << tabNum[i];
			total = total + tabNum[i];

		}
		else {
			std::cout << " + " << tabNum[i];
			total = total + tabNum[i];
		}
	}
	std::cout << " = " << total;
}

void exercice10() {
	int nombre;
	std::cout << "Entrer un nombre : ";
	std::cin >> nombre;

	std::bitset<8> bits(nombre);

	std::cout << bits << std::endl;
}

void main() {
	exercice10();
}
