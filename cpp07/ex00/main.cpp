#include <iostream>
#include <string>
#include "whatever.hpp"

int main() {
    std::cout << "=== TESTANDO TEMPLATES ===" << std::endl;
    
    std::cout << "\n--- Teste com int ---" << std::endl;
    int a = 2;
    int b = 3;
    
    std::cout << "Antes do swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "Após o swap:  a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    
    std::cout << "\n--- Teste com string ---" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << "Antes do swap: c = " << c << ", d = " << d << std::endl;
    swap(c, d);
    std::cout << "Após o swap:  c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    std::cout << "\n--- Teste com float ---" << std::endl;
    float x = 42.5f;
    float y = 21.7f;
    
    std::cout << "Antes do swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "Após o swap:  x = " << x << ", y = " << y << std::endl;
    std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
    std::cout << "max(x, y) = " << ::max(x, y) << std::endl;
    
    std::cout << "\n--- Teste com valores iguais ---" << std::endl;
    int equal1 = 5;
    int equal2 = 5;
    
    std::cout << "equal1 = " << equal1 << ", equal2 = " << equal2 << std::endl;
    std::cout << "min(equal1, equal2) = " << ::min(equal1, equal2) << std::endl;
    std::cout << "max(equal1, equal2) = " << ::max(equal1, equal2) << std::endl;
    std::cout << "Endereços: &equal1 = " << &equal1 << ", &equal2 = " << &equal2 << std::endl;
    std::cout << "Endereço retornado por min: " << &::min(equal1, equal2) << std::endl;

    return 0;
}
