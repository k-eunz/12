#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student 
{
    int ID;
    char name[30];
    float grade;
};

int main(void) 
{
    struct student s1 = {100, "Kyueun", 4.3};

    s1.ID = 2615180;
    strcpy(s1.name, "Kyueun");
    s1.grade = 3.2;

    printf("ID:%i, name:%s, grade:%f\n", s1.ID, s1.name, s1.grade);

    return 0;
}
