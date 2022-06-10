#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("What is your name?");
    char name[25];
    scanf("%s", name);
    printf("hello, %s\n", name);
    return 7;
}
