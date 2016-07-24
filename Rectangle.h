#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
    private:
        double width, height, area, circumference;
        char knownVar_1 = '0';
        char knownVar_2 = '0';
    public:
        void process_inputString(string, int);
        void process_width(double);
        void process_height(double);
        void process_area(double);
        void process_circumference(double);

        void printMsg_selectKnownVar_1();
        void printMsg_selectKnownVar_2();
        void printMsg_rectangleStats();

        Rectangle();
        ~Rectangle();
};

double get_num_rectangle();

#endif
