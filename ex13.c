#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;

    // argv에 들어있는 각각의 문자열을 사용한다.
    // 왜 argv[0]을 건너뛰었을까
    for (i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // 직접 문자열 배열을 만들어보자
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 5;

    for (i = 0; i < num_states; i++)
    {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}
