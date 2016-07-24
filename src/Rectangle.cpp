// Shape: Rectangle
#include<iostream>
#include<string>
#include<cmath>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    printMsg_selectKnownVar_1();
}

Rectangle::~Rectangle()
{
    width = 0;
    height = 0;
    area = 0;
    circumference = 0;
    knownVar_1 = '0';
    knownVar_2 = '0';
    cout << "\"Rectangle\" class object destroyed." << endl;
}

void Rectangle::printMsg_selectKnownVar_1()
{
    std::cout << "\n[shape] Rectangle" << std::endl;
    std::cout << "[this shape requires TWO known variable types]" << std::endl;
    std::cout << "enter 1st known variable type:" << std::endl;
    std::cout << "[w]idth || [h]eight || [a]rea || [c]ircumference\n" << std::endl;
}

void Rectangle::printMsg_selectKnownVar_2()
{
    std::cout << "enter 2nd known variable type:" << std::endl;
    std::cout << "[w]idth || [h]eight || [a]rea || [c]ircumference\n" << std::endl;
}

void Rectangle::process_inputString(string input, int knownVarNo)
{
    if (input == "w" || input == "width")
    {
        cout << "width: ";

        switch(knownVarNo)
        {
            case 1:
                knownVar_1 = 'w';
                break;
            case 2:
                knownVar_2 = 'w';
                break;
        }

        process_width(get_num_rectangle());
        printMsg_rectangleStats();
    }
    else if (input == "h" || input == "height")
    {
        cout << "height: ";

        switch(knownVarNo)
        {
            case 1:
                knownVar_1 = 'h';
                break;
            case 2:
                knownVar_2 = 'h';
                break;
        }

        process_height(get_num_rectangle());
        printMsg_rectangleStats();
    }
    else if (input == "a" || input == "area")
    {
        cout << "area: ";

        switch(knownVarNo)
        {
            case 1:
                knownVar_1 = 'a';
                break;
            case 2:
                knownVar_2 = 'a';
                break;
        }

        process_area(get_num_rectangle());
        printMsg_rectangleStats();
    }
    else if (input == "c" || input == "circumference")
    {
        cout << "circumference: ";

        switch(knownVarNo)
        {
            case 1:
                knownVar_1 = 'c';
                break;
            case 2:
                knownVar_2 = 'c';
                break;
        }

        process_circumference(get_num_rectangle());
        printMsg_rectangleStats();
    }
    else
    {
        cout << "\tERROR @ process_inputString (Rectangle.cpp)\n" << endl;
    }

    cout << "no: " << knownVarNo << " | " << knownVar_1 << " | " << knownVar_2 << endl;
}

void Rectangle::process_width(double w)
{
    width = w;
    height = width;
    area = (width*height);
    circumference = (width+width+height+height);
}

void Rectangle::process_height(double h)
{
    height = h;
    width = height;
    area = (width*height);
    circumference = (width+width+height+height);
}

void Rectangle::process_area(double a)
{
    area = a;
    width = (sqrt(area));
    height = width;
    circumference = ((width+height)*2);
}

void Rectangle::process_circumference(double c)
{
    circumference = c;
    width = (circumference/4);
    height = (circumference/4);
    area = (width*height);
}

void Rectangle::printMsg_rectangleStats()
{
    cout << "\n\tRECTANGLE STATS" << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
    cout << "circumference: " << circumference << endl;
    cout << "area: " << area << "\n\n";
}

double get_num_rectangle()
{
    double input;
    cin >> input;
    return input;
}
