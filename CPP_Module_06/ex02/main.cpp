#include "Base.hpp"

int main(void)
{
	srand(time(0));

	Base * base = new Base;

	Base *A = generate();
	Base *B = generate();
	Base *C = generate();

	identify(base);
	identify(A);
	identify(B);
	identify(C);

	delete A;
	delete B;
	delete C;
}