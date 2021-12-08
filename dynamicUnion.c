#include <stdio.h>
#include <string.h>
union student
{
   int a;
   float f;
   double d;
};
int main()
{
    union student *s;
    s=(union student *)malloc(1*sizeof(union student));
    printf("\n the size of the union is %d",sizeof(s));
    s->a=10;
    printf("\n %d ",s->a);
    s->f=10.20;
    printf("\n %f",s->f);
    s->d=20.20;
    printf("\n %lf",s->d);
    return 0;
}
