#include <stdio.h>
#include <stdlib.h>

int glob1 = 123;
int glob2;

int main() {
    static int str1 = 123;
    static int str2;
    int local = 0;

    static char static_array[1024];
    char local_array[1024];
    char * dynamic_array;

    dynamic_array = (char *)malloc(1024);

    printf("-------------Val--------------\n");
    printf("glob1   => %p\n", &glob1);
    printf("glob2   => %p\n", &glob2);
    printf("str1    => %p\n", &str1);
    printf("str2    => %p\n", &str2);
    printf("local   => %p\n", &local);
    printf("-------------ARR--------------\n");
    printf("static  => %p\n", static_array);
    printf("local   => %p\n", local_array);
    printf("dynamic => %p\n", dynamic_array);
    printf("-------------FUNC-------------\n");
    printf("main    => %p\n", main);
    printf("pringf  => %p\n", printf);
}
