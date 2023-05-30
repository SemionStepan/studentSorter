#ifndef STUDENTSORTER_H
#define STUDENTSORTER_H

#include <iostream>
#include <string>

class Student // Единственный класс, из которого будет 10 объектов
{
private:
    std::string name; // Строка с инициалами, а затем фамилией ( I.I. Ivanov )
    int number; // Целочисленный номер группы студента
    int classes[5]; // Массив с оценками (строгий порядок: 1-матем, 2-рус, 3-общ, 4-физра, 5-икт)

public:
    Student(std::string name, int number, int classes[5]);  // Единственный возможный конструктор

    ~Student(); // Деструктор, не завершён

    inline std::string getName()
    {
       return name;
    }

    inline int getNumber()
    {
       return number;
    }

    inline int getClasses()
    {
       return classes[5];
    }
};

int exec(Student student); // Главный цикл

int middleCounter();//сюда передаётся массив оценок одного студента, выводится средний балл

//создать список

//добавить студента в список

//отсортировать список по возрастанию (здесь быстрой сортировкой)

//отсортировать список по убыванию

//удалить список

void printStudents(Student Student[10]); // Вывести имена и номера групп студентов

#endif // STUDENTSORTER_H
