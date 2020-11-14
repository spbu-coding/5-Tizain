#include <stdio.h>
#include <stdlib.h>

void other() {
    printf("Well done, my friend\n");
    fflush(stdout);
    exit(0);
}

void input() {
    char buffer[5];
    gets(buffer);
}

int main() {
    printf("%p\n", &other);
    fflush(stdout);
    input();
    printf("Failed\n");
    return 0;
}
