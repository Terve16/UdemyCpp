#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square
// 3.) Print out the values to the console

int main()
{
    double length;
    double perimeter;
    double area;

    std::cout << "Please enter the side length of a square: ";
    std::cin >> length;

    perimeter = length * 4;
    area = length * length;

    std::cout << "The perimeter of this square is: " << perimeter << " and the area is: " << area << std::endl;

    return 0;
}
