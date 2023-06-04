#include "studentSorter.h"

int main()
{
    Student mass[10] = {
                         {"I.I.Ivanov", 1,{5,4,5,4,5}},
                         {"A.A.Alexeev", 1,{2,2,2,2,2}},
                         {"P.P.Platonov", 2,{3,4,3,4,3}},
                         {"Z.Z.Zaharov", 2,{5,5,5,5,5}},
                         {"A.A.Artemov", 3,{4,3,2,3,3}},
                         {"E.I.Snegireva", 3,{4,4,4,4,4}},
                         {"O.O.Olegov", 4,{2,2,4,3,2}},
                         {"I.A.Ivanov", 4,{4,3,5,3,5}},
                         {"A.I.Ivanov", 5,{5,4,5,2,5}},
                         {"A.A.Ivanov", 5,{5,4,5,4,5}}
                       };

    sorter();

    studentPrinter();

    return 0;
}
