#pragma once

#include <iostream>
using namespace std;

class Turtle
{
    int x;
    int y;
    char direction;
public:

    // ��������� �������������
    Turtle();
    Turtle(char direction);
    Turtle(int x, int y, char direction);

    // ��������� �������

    void enterStartPosition();
    void info();


    void turn(char user_direction);
    void turn_right();
    void turn_left();
    void step(int number_steps);

    // ��������� �������� (������������� ��� ������) (� �������� ������������)
    void enter_x();
    void enter_y();
    void enter_direction();

    // ��������� ��������
    int get_x();
    int get_y();
    char get_direction();

};
