// Shape: Circle
#include<iostream>
#include<string>
#include"Circle.h"
using namespace std;

Circle::Circle()
{
    printMsg_selectKnownVar();
}

Circle::~Circle()
{
    radius = 0;
    diameter = 0;
    circumference = 0;
    area = 0;
    knownVar = '0';
    cout << "\"Circle\" class object destroyed." << endl;
}

void Circle::printMsg_selectKnownVar()
{
    std::cout << "\n[shape] Circle" << std::endl;
    std::cout << "enter known variable type:" << std::endl;
    std::cout << "[r]adius || [d]aimeter || [a]rea || [c]ircumference\n" << std::endl;
}

void Circle::process_inputString(std::string input)
{
    if(input == "r" || input == "radius")
    {
        cout << "radius: ";
        knownVar = 'r';
        process_radius(get_num());
        printMsg_circleStats();
    }
    else if (input == "d" || input == "diameter")
    {
        cout << "diameter: ";
        knownVar = 'd';
        process_diameter(get_num());
        printMsg_circleStats();
    }
    else if (input == "a" || input == "area")
    {
        cout << "area: ";
        knownVar = 'a';
        process_area(get_num());
        printMsg_circleStats();
    }
    else if (input == "c" || input == "circumference")
    {
        cout << "circumference: ";
        knownVar = 'c';
        process_circumference(get_num());
        printMsg_circleStats();
    }
    else
    {
        cout << "\tERROR @ process_inputString (Circle.cpp)\n" << endl;
    }
}

void Circle::process_radius(double r)
{
    radius = r;
    diameter = (radius*2);
    circumference = (pi*diameter);
    area = ((pi*radius)*(pi*radius));
}

void Circle::process_diameter(double d)
{
    diameter = d;
    radius = (diameter/2);
    circumference = (pi*diameter);
    area = ((pi*radius)*(pi*radius));
}

void Circle::process_circumference(double c)
{
    circumference = c;
    diameter = (circumference/pi);
    radius = (diameter/2);
    area = ((pi*radius)*(pi*radius));
}

void Circle::process_area(double a)
{
    area = a;
    radius = ((area/pi)/(area/pi));
    diameter = (radius*2);
    circumference = (pi*diameter);
}

void Circle::printMsg_circleStats()
{
    cout << "\n\tCIRCLE STATS" << endl;
    cout << "radius:        " << radius << endl;
    cout << "diameter:      " << diameter << endl;
    cout << "circumference: " << circumference << endl;
    cout << "area:          " << area << "\n\n";
}

double get_num()
{
    double input;
    cin >> input;
    return input;
}
