#include <stdio.h>
#pragma pack(1)
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
    
    printf("size of object is : %d\n", sizeof(sam));
    sam.rollno = 11;
    sam.div = 'A';
    sam.marks = 90.89;
    sam.age = 19;
    sam.salary = 21999;
    
    return 0;
}