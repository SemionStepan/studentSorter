#include "student.h"

int middleCounter(Student* student)
{
    int middle = 0;
    middle+= student->getEnglish();
    middle+= student->getMath();
    middle+= student->getPe();
    middle+= student->getRussian();
    middle+= student->getScience();
    middle = middle / 5;
  return middle;
}

int comp(Student* a, Student* b) // Сравнить двух студентов по их среднему баллу и вернуть того, у которого меньше
{
    int first = middleCounter(a);
    int second = middleCounter(b);
    if (first < second) return -1;
    if (first > second) return 1;
    return 0;
}
