#include <iostream>
#include <iomanip>
#include <algorithm>
int main(){
    double a,b,c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее арифметическое: " << double((a+b+c)/3.0) << "\n";
    std::cout << "Максимальное: " << std::max({a,b,c}) << "\n";
    std::cout << "Минимальное: " << std::min({a,b,c}) << "\n";
    return 0;
}