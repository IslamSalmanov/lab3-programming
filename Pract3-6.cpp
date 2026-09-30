#include <iostream>
#include <iomanip>
int main(){
    std::cout << "Конвертор температур\n";
    std::cout << "1. Из °C в °F\n";
    std::cout << "2. Из °F в °C\n";
    int n;
    std::cout << "Выберите тип перевода: ";
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(1);
    if(n==1){
        double t;
        std::cout << "Введите температуру: ";
        std::cin >> t;
        double t1=t*9.0/5.0+32.0;
        std::cout << t << " °C = " << t1 << " °F"<< "\n";
        return 0;
    }
    else if(n==2){
        double t;
        std::cout << "Введите температуру: ";
        std::cin >> t;
        double t1=(t-32.0)*5.0/9.0;
        std::cout << t << " °F = " << t1 <<  " °C" << "\n";
        return 0;
    }
    else{
        std::cout << "Некорректный выбор" << "\n";
        return 0;
    }
}