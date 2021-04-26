#include <iostream>
#include <cstdlib>

template<class n_type> void abs(n_type a);

int main() {
	float n2 = -18.55F;
	long n3 = -86826262L;
	double n4 = -6168565.181365;
	abs(n2);
	abs(n3);
	abs(n4);
	system("pause");
	return EXIT_SUCCESS;
}

template<class n_type> void abs(n_type a) {
	if (a < 0) {
		a = a * -1;
	}
	std::cout << a << std::endl;
}
