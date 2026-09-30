#include <iostream>
#include <iomanip>
int main(){
    std::cout << "Перевод валют" << "\n";
    std::cout << "1. Из USD в RUB" << "\n";
    std::cout << "2. Из EUR в RUB" << "\n";
    double a;
    std::cout << "Ваш выбор: ";
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(2);
    if(a==1){
        double u;
        std::cout << "Изначальная валюта: ";
        std::cin >> u;
        double(r)=u*84.41;
        std::cout << u << " USD = " << r << " RUB" << "\n";
        return 0;
    }
    else if(a==2){
        double u;
        std::cout << "Изначальная валюта: ";
        std::cin >> u;
        double(r)=u*96.25;
        std::cout << u << " EUR = " << r << " RUB" << "\n";
        return 0;
    }
    else{
        std::cout << "Неккоректный выбор" << "\n";
        return 0;
    }
}