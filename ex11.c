#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[4] = { 0 };
    char name[4] = { 'a' };

    // 먼저 초기화된 배열 내용을 보여준다.
    printf("numbers: %d %d %d %d\n", 
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // numbers 배열을 셋업한다.
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // name 배열을 셋업한다.
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    // 그런 다음,셋업된 배열의 내용을 출력한다.
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);
    
    // name 배열을 문자열로 출력한다.
    printf("name: %s\n", name);

    // 문자열을 사용하는 다른방법이다.
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1], another[2], another[3]);

    return 0;
}
