#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double a, b;

    std::cout << "Inserisci i coefficienti dell'equazione ax + b = 0:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    if (a == 0) {
        if (b == 0) {
            std::cout << "L'equazione è indeterminata (0 = 0)." << std::endl;
        } else {
            std::cout << "L'equazione è impossibile (" << b << " = 0)." << std::endl;
        }
    } else {
        double x = -b / a;
        std::cout << "La soluzione dell'equazione è x = " << x << std::endl;
	}
    
}

