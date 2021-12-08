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
    printf("\n enter data to student union");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s[i].a);
        printf("\n %d ",s[i].a);
        scanf("%f",&s[i].f);
        printf("\n %f ",s[i].f);
        scanf("%lf",&s[i].d);
        printf("\n %lf ",s[i].d);
    }
    free(s);
    return 0;
}
