#ifndef RECTANGLE_REVERSE_H_INCLUDED
#define RECTANGLE_REVERSE_H_INCLUDED

#include <stdio.h>
#include <locale.h>

typedef struct
{
    int x;
    int y;
}coords;

typedef struct
{
    coords lt;
    coords rb;
}rectangle;


rectangle reverse (rectangle *rec)
{
    rectangle newrec;

    newrec.lt.x = rec->rb.x;
    newrec.lt.y = rec->rb.y + rec->rb.x - rec->lt.x;
    newrec.rb.x = rec->rb.x + rec->lt.y - rec->rb.y;
    newrec.rb.y = rec->rb.y;

    return newrec;

}

void enter (rectangle *rec)
{
    printf ("Введите left-top координаты : ");
    scanf ("%d%d", &(rec->lt.x), &(rec->lt.y));

    printf ("Введите right-bottom координаты : ");
    scanf ("%d%d", &(rec->rb.x), &(rec->rb.y));
}

void print (rectangle *newrec)
{
    printf ("Координаты новых точек:\nlt: x = %d, y = %d\n",newrec->lt.x, newrec->lt.y);
    printf ("rb: x = %d, y = %d",newrec->rb.x, newrec->rb.y);
}

#endif // RECTANGLE_REVERSE_H_INCLUDED
