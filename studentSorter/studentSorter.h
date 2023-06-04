#ifndef STUDENTSORTER_H
#define STUDENTSORTER_H

#include <iostream>

using namespace std;

typedef struct
{
    string name;
    int groupNumber;
    int grades[5];
}Student;

Student sorter();

void studentPrinter();

#endif // STUDENTSORTER_H
