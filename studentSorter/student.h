#ifndef STUDENTSORTER_H
#define STUDENTSORTER_H
//Создайте структуру с именем student, содержащую поля: фамилия и инициалы, номер группы, успеваемость (массив из пяти элементов).
//Создать массив из десяти элементов такого типа, упорядочить записи по возрастанию среднего балла.
//Добавить возможность вывода фамилий и номеров групп студентов, имеющих оценки, равные только 4 или 5.


#include <iostream>

using namespace std;

struct Student
{
private:
    string name;
    int groupNumber;
    int math;
    int russian;
    int pe;
    int science;
    int english;

//    Student &student;

public:
    Student(string name, int groupNumber, int math, int russian, int pe, int science, int english)
    {
        name = name;
        groupNumber= groupNumber;
        math = math;
        russian = russian;
        pe = pe;
        science = science;
        english = english;
    }

    Student() : groupNumber(0)
    {
        math = 0;
        russian = 0;
        pe = 0;
        science = 0;
        english = 0;
    };

    inline string getName() { return name; }
    inline int getGroupNumber() { return groupNumber; }
    inline int getMath() { return math; }
    inline int getRussian() { return russian; }
    inline int getPe() { return pe; }
    inline int getScience() { return science; }
    inline int getEnglish() { return english; }
};

int comp(const void * a, const void * b);

#endif // STUDENTSORTER_H
