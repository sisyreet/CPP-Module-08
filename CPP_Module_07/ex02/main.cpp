#include "Array.hpp"
#define MAX_VAL 750

int subj_test()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;

	return (0);
}

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
  
	// subj_test();
    return 0;
}