#include <stdio.h>

void crash() {
    char *test = NULL;
    int i = 10;

    for (i = 0; i < 1000000; i++)
    {
        printf("%c", test[i]);
    }
}

int main(int argc, char const *argv[])
{
    int age = 10;
    int height = 72;

    printf("I am %d inches tall.\n", height);
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();

    return 0;
}
