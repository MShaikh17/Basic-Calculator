#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#define DEGTORAD(D) ((D * M_PI) / 180.0) // converts degrees to radians
#define RADTODEG(R) ((180.0 * R) / M_PI) // converts radians to degrees

int main()
{
    float R1, R2, T1, T2, Tr1, Tr2, radius;
    std::string c = "c";
    std::string r = "r";
    std::string t = "t";
    std::string z = "z";

    std::cout << "This is the Shape Area Calculator" << std::endl;
    std::cout << "Select a shape to calculate its area:" << std::endl;
    std::cout << "Circle (c), Rectangle (r), Triangle (t), Trapezium (z)" << std::endl;

    std::string shape;
    std::cin >> shape;

    if (shape == "c")
    {
        std::cout << "Enter the radius of the circle: " << std::endl;
        std::cin >> radius;
        std::cout << "Area of the circle is: " << M_PI * pow(radius, 2) << std::endl;
    }

    else if (shape == "r")
    {
        std::cout << "Enter the length of side 1 of the rectangle: " << std::endl;
        std::cin >> R1;
        std::cout << "Enter the length of side 2 of the rectangle: " << std::endl;
        std::cin >> R2;
        std::cout << "Area of the rectangle is: " << R1 * R2 << std::endl;
    }

    else if (shape == "t")
    {
        std::string Y;
        std::string N;

        std::cout << "Is your triangle a right angle triangle? (Y/N): " << std::endl;

        if (std::cin >> Y && (Y == "Y" || Y == "y"))
        {
            std::cout << "Enter the length of the base: " << std::endl;
            std::cin >> T1;
            std::cout << "Enter the length of the height: " << std::endl;
            std::cin >> T2;
            std::cout << "Area of the right angle triangle is: " << 0.5 * T1 * T2 << std::endl;
        }

        else if (std::cin >> N && (N == "N" || N == "n"))
        {
            double angle = RADTODEG(angle);
            std::cout << "Enter the length of the first side:" << std::endl;
            std::cin >> Tr1;
            std::cout << "Enter the length of the second side: " << std::endl;
            std::cin >> Tr2;
            std::cout << "Enter the angle of a side in degrees: " << std::endl;
            std::cin >> angle;
            std::cout << "The Area of the triangle is : " << 0.5 * Tr1 * Tr2 * sin(angle) << std::endl;
        }
    }

    if (shape == "z")
    {
        float a, b, height, trapArea;
        trapArea = (a + b) * height * 0.5;
        std::cout << "Enter the length of a" << std::endl;
        std::cin >> a;
        std::cout << "Enter the length of b" << std::endl;
        std::cin >> b;
        std::cout << "Enter the height" << std::endl;
        std::cin >> height;
        std::cout << "The area of the trapezium is: " << trapArea << std::endl;
    }

    std::cout << "Do you want to use this calculator again? (Y/N): " << std::endl;
    std::string Y;
    std::string N;

    if (std::cin >> Y && (Y == "Y" || Y == "y"))
    {
        main();
    }
    else if (std::cin >> N && (N == "N" || N == "n"))
    {
        std::cout << "Thank for using Shape Area Calculator \n"
                  << std::endl;
        exit(0);
    }
    return 0;
}
