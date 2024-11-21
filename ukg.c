#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);  // Reads up to 49 characters to avoid overflow

    printf("Hello, %s! Welcome to C programming.\n", name);

    return 0;
}
