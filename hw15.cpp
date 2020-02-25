#include <iostream>

int main()
{
    int count;
    int option;

    std::cout << "Enter count of nubmers: ";
    std::cin >> count;
    std::cout << "\n" << "Enter option -" << " 0 - 4et, 1 - ne4et" << "\n" << "Your option: ";
    std::cin >> option;


    switch(option)
    {
    case 1:
        for (int i = 0; i != count; i++)
        {
            if (i % 2 != 0)
            {
                std::cout << i << "\n";
            }

        }
        break;

    case 0:
        for (int i = 0; i != count; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << i << "\n";
            }

        }
        break;

    }

    


   

}