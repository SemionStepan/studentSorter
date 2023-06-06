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
    int grades[5];
//    Student &student;

public:
    Student(string name, int groupNumber, int grades[5])
    {
        name = name;
        groupNumber= groupNumber;
        grades = grades;
    }

    Student() : groupNumber(0)
    {
        grades[0] = 0;
        grades[1] = 0;
        grades[2] = 0;
        grades[3] = 0;
        grades[4] = 0;
    };

    inline string getName() { return *name; }
    inline int getGroupNumber() { return groupNumber; }
    int getGrades();
};

/* Создай массив, добавь туда студентов, std qsort из отсортирует, придумай как вывести
{
    Student array[10];

public:
    StudentMass(Student array[10]);

    void addStudent();
    Student sorter();
    void studentPrinter();

};
*/

#endif // STUDENTSORTER_H
