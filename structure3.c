#include <stdio.h>
struct student
{
    int rollno;  // 4
    char div;    // 1
    int age;     // 4
    float marks; // 4
    int salary;  // 4
};

int main()
{
    struct student sam;
    struct student shrish;
    printf("size of object is : %d\n", sizeof(sam));
    sam.rollno = 11;
    sam.div = 'A';
    sam.marks = 90.89;
    sam.age = 19;
    sam.salary = 21999;
    shrish.rollno = 21;
    shrish.div = 'D';
    shrish.marks=23.986;
    shrish.age = 17;
    shrish.salary = 50000;
    printf("age of sam : %d\n",sam.age);
    printf("age of shrish : %d\n",shrish.age);
    printf("salary of sam: %d\n",sam.salary);
    printf("salary of shrish: %d\n",shrish.salary);
    return 0;
}