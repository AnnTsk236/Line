#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your surname: ";
    std::string surname;
    std::getline(std::cin, surname); //��������� ��������� ������ � ���������� surname

    std::cout << surname << "\n";

    std::string x("22");
    std::string y("44");

    std::cout << x + y << "\n";  //�� ����������, � ���������� ������ 
    std::cout << x.length() << "\n";
    std::cout << y.length() << "\n";

    std::cin;
    return 0;
}

