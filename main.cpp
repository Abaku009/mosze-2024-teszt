#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa'   // for strings use "" quotes, and use ; at the end
    for (int i = 0;)                        // this for loop is not correctly set up to iterate over the array
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)                // this for loop is not correctly set up to iterate over the array
    {
        std::cout << "Ertek:"             // use ; at the end and there is nothing to write out after "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                          // The variable "atlag" should be initialized to 0 before accumulating values
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]                   // use ; at the end       
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;           // Don't forget to free the allocated memory
    return 0;
}
