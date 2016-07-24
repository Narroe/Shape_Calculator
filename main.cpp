// shape calculator program
#include<iostream>
#include<string>
#include"Circle.h"
#include"Square.h"
#include"Rectangle.h"
using namespace std;

string get_input();
void printMsg_greeting();
void printMsg_chooseShape();
void process_inputString_chooseShape(string);
void reset_program();

int main()
{
    printMsg_greeting();
    printMsg_chooseShape();
    process_inputString_chooseShape(get_input());
	return 0;
}

std::string get_input()
{
    std::string input;
    cout << "> ";
    getline(cin, input);
    return input;
}

void printMsg_greeting()
{
    cout << "\tSHAPE CALCULATOR PROGRAM\n" << endl;
}

void printMsg_chooseShape()
{
    cout << "\n\tChoose a shape:" << endl;
    cout << "2D:    circle | square | rectangle | NONE\n" << endl;
    cout << "3D:    NONE | NONE | NONE | NONE\n" << endl;
    cout << "(note: you can also type quit/exit to end the program here)\n" << endl;
}

void process_inputString_chooseShape(string input)
{
    // this checks for exit/quit program command
    if(input == "exit" || input == "quit")
    {
        if (input == "exit") cout << "\t now exiting program." << endl;
        else if (input == "quit") cout << "\t now quitting program." << endl;
        cout << "\tpress ENTER to exit." << endl;
        getline(cin, input);
    }
    // this chooses the shape
    else if(input == "circle")
    {
        Circle circle;
        circle.process_inputString(get_input());
        reset_program();
    }
    else if (input == "square")
    {
        Square square;
        square.process_inputString(get_input());
        reset_program();
    }
    else if (input == "rectangle")
    {
        Rectangle rectangle;
        rectangle.process_inputString(get_input(), 1);
        reset_program();
    }
    else
    {
        cout << "input not recognised\n" << endl;
        process_inputString_chooseShape(get_input());
    }
}

void reset_program()
{
    printMsg_chooseShape();
    process_inputString_chooseShape(get_input());
}
