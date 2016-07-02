#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include<string>
using namespace std;

class Circle
{
    private:
        double pi = 3.14159;
        double radius, diameter, circumference, area;
        char knownVar = '0';

    public:
        void process_inputString(string);
        void process_radius(double r);
        void process_diameter(double d);
        void process_circumference(double c);
        void process_area(double a);

        void printMsg_selectKnownVar();
        void printMsg_circleStats();

        Circle();
        ~Circle();
};

double get_num();

#endif
