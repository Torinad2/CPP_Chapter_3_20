/**********************************************************
 * Joe’s Pizza Palace - Pizza Slice Calculator            *
 *                                                        *
 * This program calculates how many slices a pizza can be *
 * divided into based on its diameter.                    *
 *                                                        *
 * Each slice has an area of 14.125 square inches.        *
 * Formula used:                                          *
 *   Area = PI * r^2                                      *
 *   Number of slices = Area / 14.125                     *
 *                                                        *
 * Outputs the result rounded to 1 decimal place.         *
 **********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**********************************************************
     * Constants                                              *
     **********************************************************/
    const double PI = 3.14159;          // Constant for π (pi)
    const double SLICE_AREA = 14.125;   // Area of one pizza slice

    /**********************************************************
     * Variable Declarations                                  *
     **********************************************************/
    double diameter;    // Pizza diameter in inches
    double radius;      // Pizza radius in inches
    double area;        // Total area of the pizza
    double slices;      // Number of slices

    /**********************************************************
     * Input: Ask user for pizza diameter                     *
     **********************************************************/
    cout << "Hello. Welcome to Joe's Pizza Palace!\n";
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    /**********************************************************
     * Calculations                                           *
     **********************************************************/
    radius = diameter / 2;                            // Radius = diameter / 2
    area = PI * pow(radius, 2);                       // Area = π * r^2
    slices = round((area / SLICE_AREA) * 10) / 10;    // Slices rounded to 1 decimal

    /**********************************************************
     * Output: Display number of slices                       *
     **********************************************************/
    cout << "The pizza can be divided into " << slices << " slices." << endl;

    /**********************************************************
     * Developer Credit                                       *
     **********************************************************/
    cout << "_____________________________" << endl;
    cout << "Developed by: Nikita Baiborodov." << endl;

    return 0;
}

