#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        perror("need an input longer than 8 chars");
        return 1;
    }

    char flag = 'x';
    char bar[] = "0123456789";
    char foo[8];

    printf("bar %s\n", bar);
    printf("argv[1] %s\n", argv[1]);

    strcpy(foo, argv[1]);
    printf("foo %s\n", foo);
    printf("bar %s\n", bar);    

    if (flag=='f') printf("You get a flag!!!\n");
    else printf("Why are you here?\n");

    return 0;
}

