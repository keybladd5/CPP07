
#include "Array.hpp"

#define MAX_VAL 3
 
int main(int, char**)
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
    std::cout << "Arr numbers print with size -> " << numbers.size() << "\n";
    numbers.print();
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "Arr tmp print\n";
        tmp.print();
        std::cout << "Arr test print\n";
        test.print();
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
        std::cout << "Test try to set in index -2 on numbers Arr 0 value\n";
        numbers[-2] = 0;
        numbers.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Test try to set in index MAX_VAL on numbers Arr 0 value\n";
        numbers[MAX_VAL] = 0;
        numbers.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Test try to set in all Arr rand values\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    numbers.print();
    delete [] mirror;
    return 0;
}
