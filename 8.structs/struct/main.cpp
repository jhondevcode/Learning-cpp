#include <iostream>
#include <cstdlib>

struct song {
	char title[32];
	char artist[32];
	float price;
	char buy_date[16];
}; typedef song song;

struct car {
	char model[16];
	unsigned int year;
	char color[16];
	unsigned int km;
}; typedef car car;

int main() {
	song cd01 = { "Niñachay", "William luna", 5.60, "23/04/2009" };
	song cd02 = { "Piel morena", "ASI D' RON", 8.50, "04/09/2019" };
	song cd03 = { "Yawar", "No Quiero Más Esta Vida", 4.55, "20/04/2016" };
	car v01 = { "Tesla", 2018, "Blue", 215 };
	car v02 = { "Ford", 2015, "Cyan", 180 };

	std::cout << v01.model << ", " << v01.year << ", " << v01.color << ", " << v01.km << std::endl;
	std::cout << v02.model << ", " << v02.year << ", " << v02.color << ", " << v02.km << std::endl;
	std::cout << cd01.title << ", " << cd01.artist << ", " << cd01.price << ", " << cd01.buy_date << std::endl;
	std::cout << cd02.title << ", " << cd02.artist << ", " << cd02.price << ", " << cd02.buy_date << std::endl;
	std::cout << cd03.title << ", " << cd03.artist << ", " << cd03.price << ", " << cd03.buy_date << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}
