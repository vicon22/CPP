
#include "Conversion.h"


int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Use ./convert litteralValue" << std::endl;
        return (1);
    }

    Conversion	conv(argv[1]);
    std::cout << conv;
    return (0);
}