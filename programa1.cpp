#include <iostream>
#include <vector>

void helloFunction() {
    std::cout << "Olá mundo." << std::endl;
}

int multiply(int a, int b) {
    return a * b;
}

void printVector(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int number;
    std::vector<int> arrayVector = {1, 2, 3, 4, 5};
    std::cout << "Entre um número: ";
    std::cin >> number;
    int factorial = calculateFactorial(number);
    std::cout << "O fatorial de " << number << " é " << factorial << std::endl;

    return 0;
}

// loop inutílizaveis: for (int i = 0; i < 10; ++i) {
