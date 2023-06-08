#include "student.h"

int gpaCounter(Student* student)
{
    int gpa = 0;
    gpa+= student->getEnglish();
    gpa+= student->getMath();
    gpa+= student->getPe();
    gpa+= student->getRussian();
    gpa+= student->getScience();
    gpa = gpa / 5;
  return gpa;
}

int comp(const void * a, const void * b) // Сравнить двух студентов по их среднему баллу и вернуть того, у которого меньше
{
    int first = gpaCounter(a);
    int second = gpaCounter(b);
    if (first < second) return -1;
    if (first > second) return 1;
    return 0;
}
