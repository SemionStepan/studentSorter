#include "student.h"

int main()
{
// Создать 10 студентов, Засунуть их в массив
Student array[10] = {
                        Student("I.I.Ivanov", 1, 5,4,5,4,5),
                        Student("A.A.Alexeev", 1,2,2,2,2,2),
                        Student("P.P.Platonov", 2,3,4,3,4,3),
                        Student("Z.Z.Zaharov", 2,5,5,5,5,5),
                        Student("A.A.Artemov", 3,4,3,2,3,3),
                        Student("E.I.Snegireva", 3,4,4,4,4,4),
                        Student("O.O.Olegov", 4,2,2,4,3,2),
                        Student("I.A.Ivanov", 4,4,3,5,3,5),
                        Student("A.I.Ivanov", 5,5,4,5,2,5),
                        Student("A.A.Ivanov", 5,5,4,5,4,5)
                  };
// Отсортировать массив
qsort(array,10,sizeof(Student), comp);
// Выбрать студентов на вывод и вывести

    return 0;
}
