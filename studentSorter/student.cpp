#include "student.h"

float Student::calculate()
{
    return (_english + _math + _pe + _russian + _science) / 5;
}

void Student::out()
{
    std::cout << "[" << _name << "] = " << "{" << _groupNumber << "} (" << _math << ", "
              << _russian << ", " << _pe << ", " << _science << ", " << _english << ") = " << calculate() << endl;
}

bool Student::excellent()
{
    return ((_english >= 4) && (_math >= 4) && (_pe >= 4) && (_russian >= 4) && (_science >= 4)) ? true : false;
}

Students::Students(vector<Student> &students) : _students(students)
{}

void Students::setRange()
{
    sort(_students.begin(), _students.end(),
         [](Student &a, Student &b)
         {
//            if(a.calculate() > b.calculate())
//            {
//                return -1;
//            }

//            if(a.calculate() < b.calculate())
//            {
//                return 1;
//            }
//            return 0;
            return b.calculate() > a.calculate();
         }
    );
}

void Students::out()
{
    for(auto student : _students)
    {
        student.out();
    }
}

void Students::print()
{
    for(auto student : _students)
    {
        if(student.excellent())
        {
            student.out();
        }
    }
}
