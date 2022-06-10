#include <stdio.h>

int main(void) {
    // Ask the user to provide their name
    printf("What is your name?");

    // Declare space for an input name
    char name[25];
    
    // Read the name
    scanf("%s", name);

    // Say hello
    printf("hello, %s\n", name);

    // Exit and indicate success
    return 0;
}
