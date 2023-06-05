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
    Student(string name, int groupNumber, int grades[5]);
};

class StudentMass
{
    Student array[10];
public:
    StudentMass(Student array[10]);

    Student sorter();
    void studentPrinter();

};


#endif // STUDENTSORTER_H
