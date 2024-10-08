#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 예제에서 사용할 두 개의 배열 생성
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // 안전하게 ages의 크기를 구함
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // 첫 번째 방법:인덱스를 사용
    for (i = 0; i < count; i++)
    {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // 배열의 시작점으로 포인터를 설정
    int *cur_age = ages;
    char **cur_name = names;

    // 두 번째 방법: 포인터를 사용
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n",
                *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    // 세 번째 방법:포인터를 단순 배열처럼 사용
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old agian.\n",
                cur_name[i], cur_age[i]);
    }

    printf("---\n");

    // 네 번째 방법:어리석고 복잡한 방법으로 포인터를 사용
    for (cur_name = names, cur_age = ages;
            (cur_age - ages) < count; cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    return 0;
}