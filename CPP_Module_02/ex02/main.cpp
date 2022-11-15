#include "Fixed.hpp"
#include <cmath>

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;
	
	/* my tests */

	Fixed c;
	Fixed d;

	a == b ? std::cout << "a == d\n" : std::cout << "a != d\n";
	a != b ? std::cout << "a != d\n" : std::cout << "a == d\n";
	c == d ? std::cout << "c == d\n" : std::cout << "c != d\n";
	c != d ? std::cout << "c != d\n" : std::cout << "c == d\n";
	a > d ? std::cout << "a > d\n" : std::cout << "a < d\n";
	a < c ? std::cout << "a < c\n" : std::cout << "a > c\n";
	a <= b ? std::cout << "a <= b\n" : std::cout << "a > b\n";
	a >= b ? std::cout << "a >= b\n" : std::cout << "a < b\n";
	
	Fixed e(3);
	Fixed f(6);

	std::cout << std::endl;
	std::cout << f << " + " << e << " = " << f + e << std::endl;
	std::cout << f << " - " << e << " = " << f - e << std::endl;
	std::cout << f << " * " << e << " = " << f * e << std::endl;
	std::cout << f << " / " << e << " = " << f / e << std::endl;
	std::cout << std::endl;
	std::cout << f++ << std::endl;
	std::cout << e++ << std::endl;
	std::cout << f << std::endl;
	std::cout << e << std::endl;
	std::cout << ++f << std::endl;
	std::cout << ++e << std::endl;

	return 0;
}