#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include<string>
using namespace std;

class Square
{
    private:
        double width, height, area, circumference;
        char knownVar = '0';
    public:
        void process_inputString(string);
        void process_width(double);
        void process_height(double);
        void process_area(double);
        void process_circumference(double);

        void printMsg_selectKnownVar();
        void printMsg_squareStats();

        Square();
        ~Square();
};

double get_num_square();

#endif
