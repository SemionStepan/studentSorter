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

int comp(const void *a, const void *b) //
{
  Student *sa = (Student*)a;
  Student *sb = (Student*)b;

    int first = gpaCounter(sa);
    int second = gpaCounter(sb);
    if (first < second) return -1;
    if (first > second) return 1;
    return 0;
}
