#include <iostream>
#include <iomanip>
int main(){
    int sec;
    std::cout << "Введите количество секунд: ";
    std::cin >> sec;
    int h=sec/3600;
    int m=(sec%3600)/60;
    int s= sec % 60;
    std::cout << std::setfill('0') << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s <<"\n";
    return 0;
}