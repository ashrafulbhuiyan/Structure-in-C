#include <stdio.h>
#include <stdlib.h>

struct courses{
    char course_name[20];
    int duration;
    int students;
};

struct college{
    char code[2];
    char name[32];
    int establishment;
    struct courses *ptr;
};
struct courses *ptr =(struct courses*)malloc(sizeof(struct courses)*50);

int main()
{
    printf("Hello world!\n");
    return 0;
}
