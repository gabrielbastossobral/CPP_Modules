#include <iostream>
#include <string>
#include "Array.hpp"

int main() {
    std::cout << "--- Test 1: Default constructor ---\n";
    Array<int> a;
    std::cout << "Size: " << a.size() << "\n";

    std::cout << "\n--- Test 2: Parameterized constructor ---\n";
    Array<int> b(5);
    for (unsigned int i = 0; i < b.size(); ++i)
        b[i] = i * 10;
    for (unsigned int i = 0; i < b.size(); ++i)
        std::cout << "b[" << i << "] = " << b[i] << "\n";

    std::cout << "\n--- Test 3: Copy constructor ---\n";
    Array<int> c(b);
    c[0] = 999;
    std::cout << "Original b[0]: " << b[0] << ", Copied c[0]: " << c[0] << "\n";

    std::cout << "\n--- Test 4: Assignment operator ---\n";
    Array<int> d;
    d = b;
    d[1] = 888;
    std::cout << "Original b[1]: " << b[1] << ", Assigned d[1]: " << d[1] << "\n";

    std::cout << "\n--- Test 5: Const access ---\n";
    const Array<int> e(b);
    std::cout << "Const e[2]: " << e[2] << "\n";

    std::cout << "\n--- Test 6: Out-of-bounds exception ---\n";
    try {
        std::cout << b[10] << "\n";
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    std::cout << "\n--- Test 7: String array ---\n";
    Array<std::string> s(3);
    s[0] = "Hello";
    s[1] = "from";
    s[2] = "Array";
    for (unsigned int i = 0; i < s.size(); ++i)
        std::cout << s[i] << " ";
    std::cout << "\n";

    return 0;
}