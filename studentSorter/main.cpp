#include "student.h"

int main()
{
// Создать 10 студентов

// Засунуть их в массив
Student array[2];
int x0[5] = {1,2,3,4,5};
int x1[5] = {5,4,3,2,1};

array[0] = Student("Wasua", 1, x0 );
array[1] = Student("Petya", 2, x1);
// Отсортировать массив
//qsort();
// Выбрать студентов на вывод и вывести

    return 0;
}
