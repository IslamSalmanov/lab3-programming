#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
int main(){
    std::string t;
    std::cout << "Введите строку: ";
    std::getline(std::cin, t);
    std::cout << "Длина: " << t.length() << "\n";
    std::string upper=t;
    std::transform(upper.begin(), upper.end(), upper.begin(),[](unsigned char c) { return std::toupper(c); });
    std::cout << "Верхний регистр: " << upper << "\n";
    std::string lower=t;
    std::transform(lower.begin(), lower.end(), lower.begin(),[](unsigned char c) {return std::tolower(c); });
    std::cout << "Нижний регистр: " << lower << "\n";
    std::cout << "Первый символ: " << t.front() << "\n";
    std::cout << "Последний символ: " << t.back() << "\n";
    int sp=std::count(t.begin(),t.end(), ' ');
    std::cout << "Количество пробелов: " << sp << "\n";
    return 0;
}