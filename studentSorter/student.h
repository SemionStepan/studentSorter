#ifndef STUDENTSORTER_H
#define STUDENTSORTER_H
//Создайте структуру с именем student, содержащую поля: фамилия и инициалы, номер группы, успеваемость (массив из пяти элементов).
//Создать массив из десяти элементов такого типа, упорядочить записи по возрастанию среднего балла.
//Добавить возможность вывода фамилий и номеров групп студентов, имеющих оценки, равные только 4 или 5.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
private:
    string _name;
    int _groupNumber;
    int _math;
    int _russian;
    int _pe;
    int _science;
    int _english;

public:
    Student(string name, int groupNumber, int math, int russian, int pe, int science, int english)
    {
        _name = name;
        _groupNumber= groupNumber;
        _math = math;
        _russian = russian;
        _pe = pe;
        _science = science;
        _english = english;
    }

    float calculate();
    void out();
    bool ifExcellent();
};

struct Students
{
private:
    vector <Student> _students;

public:
    Students(vector <Student> &vec);
    void setRange();
    void out();
    void print();
};

#endif // STUDENTSORTER_H
