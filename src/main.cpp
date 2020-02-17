#include <iostream>

int main()
{
    std::cout << "\nTest de saisie de nombre\n\n";

    int valeur { 0 };

    std::cout << "Saisir une valeur :\n";
    std::cin >> valeur;

    std::cout << "Vous avez saisi la valeur : " << valeur << "\n";
    std::cout << " Merci Beaucoup !\n";

    return 0;
}