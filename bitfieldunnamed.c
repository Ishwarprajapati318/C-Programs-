#include <stdio.h>
#include <string.h>
struct student
{
 //  int i:3;
   int :0;
};
int main()
{
    struct student s;
    printf("\n The size of student is %u",sizeof(s));
    return 0;
}
