#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	std::cout << "\n[ Test 1: Subject test ]" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n[ Test 2: Exception with one element ]" << std::endl;
    Span sp2 = Span(1);
    sp2.addNumber(42);
    try {
        sp2.shortestSpan();
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n[ Test 3: Large scale test with 100,000 numbers ]" << std::endl;
    const unsigned int largeSize = 100000;
    Span bigSpan = Span(largeSize);

    std::srand(std::time(0));
    for (unsigned int i = 0; i < largeSize; ++i) {
        bigSpan.addNumber(std::rand());
    }

    std::cout << "Shortest span (large): " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Longest span (large): " << bigSpan.longestSpan() << std::endl;

    std::cout << "\n[ Test 4: Over capacity exception ]" << std::endl;
    Span smallSpan = Span(3);
    smallSpan.addNumber(10);
    smallSpan.addNumber(20);
    smallSpan.addNumber(30);
    try {
        smallSpan.addNumber(40);
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

	return 0;
}