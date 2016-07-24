// Shape: Square
#include<iostream>
#include<string>
#include<cmath>
#include"Square.h"
using namespace std;

Square::Square()
{
    printMsg_selectKnownVar();
}

Square::~Square()
{
    width = 0;
    height = 0;
    area = 0;
    circumference = 0;
    knownVar = '0';
    cout << "\"Square\" class object destroyed." << endl;
}

void Square::printMsg_selectKnownVar()
{
    std::cout << "\n[shape] Square" << std::endl;
    std::cout << "enter known variable type:" << std::endl;
    std::cout << "[w]idth || [h]eight || [a]rea || [c]ircumference\n" << std::endl;
}

void Square::process_inputString(string input)
{
    if (input == "w" || input == "width")
    {
        cout << "width: ";
        knownVar = 'w';
        process_width(get_num_square());
        printMsg_squareStats();
    }
    else if (input == "h" || input == "height")
    {
        cout << "height: ";
        knownVar = 'h';
        process_height(get_num_square());
        printMsg_squareStats();
    }
    else if (input == "a" || input == "area")
    {
        cout << "area: ";
        knownVar = 'a';
        process_area(get_num_square());
        printMsg_squareStats();
    }
    else if (input == "c" || input == "circumference")
    {
        cout << "circumference: ";
        knownVar = 'c';
        process_circumference(get_num_square());
        printMsg_squareStats();
    }
    else
    {
        cout << "\tERROR @ process_inputString (Square.cpp)\n" << endl;
    }
}

void Square::process_width(double w)
{
    width = w;
    height = width;
    area = (width*height);
    circumference = (width+width+height+height);
}

void Square::process_height(double h)
{
    height = h;
    width = height;
    area = (width*height);
    circumference = (width+width+height+height);
}

void Square::process_area(double a)
{
    area = a;
    width = (sqrt(area));
    height = width;
    circumference = ((width+height)*2);
}

void Square::process_circumference(double c)
{
    circumference = c;
    width = (circumference/4);
    height = (circumference/4);
    area = (width*height);
}

void Square::printMsg_squareStats()
{
    cout << "\n\tSQUARE STATS" << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
    cout << "circumference: " << circumference << endl;
    cout << "area: " << area << "\n\n";
}

double get_num_square()
{
    double input;
    cin >> input;
    return input;
}
