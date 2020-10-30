#include "rectangle_reverse.h"

int main()
{
    setlocale(LC_ALL,"russian");
    rectangle rec;
    enter(&rec);
    rectangle newrec = reverse(&rec);
    print(&newrec);
}


