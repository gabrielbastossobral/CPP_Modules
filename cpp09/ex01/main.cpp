#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        return 1;
    else
    {
        try
        {
            RPN calculator;
            int result = calculator.rpnCalculate(argv[1]);
            std::cout << result << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return 1;
        }
    }
        return 0;
}