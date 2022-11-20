#include "Array.hpp"

int main(int, char**)
{
	int * a = new int();
	std::cout << *a << std::endl;
	Array<int> arr(100);

	for (int i = 0; i < 100; i++)
    {
        const int value = rand();
        a[i] = value;
		arr[i] = value;
		
		std::cout << "a[" << i << "]\t= " << a[i] << "\t\t" << "arr[" << i << "]\t= " << arr[i] << std::endl;
    }

	delete a;
  
    return 0;
}