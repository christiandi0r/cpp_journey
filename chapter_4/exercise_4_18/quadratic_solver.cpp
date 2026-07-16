#include <iostream>
#include <cmath>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double x = 0;
    double x2 = 0;
    double discriminant = 0;
    
    std::cout << "Quadratic Formula Solver (ax^2 + bx + c = 0)" << std::endl;
    
    std::cout << "\nEnter a: ";
    std::cin >> a;
    
    std::cout << "Enter b: ";
    std::cin >> b;
    
    std::cout << "Enter c: ";
    std::cin >> c;
    
    discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0)
    {
        x = (-b + std::sqrt(discriminant)) / (2 * a);
        x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        
        std:: cout << "\nx = " << x << ", x = " << x2 << std::endl;
    }
    
    else if (discriminant == 0)
    {
        x = -b / (2 * a);
        
        std:: cout << "\nx = " << x << std::endl;
    }
    
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
    
        std::cout << "\nx = " << realPart << " + " << imaginaryPart << "i, " << "x = " << realPart << " - " << imaginaryPart << "i" << std::endl; 
    }
    
    return 0;
}
