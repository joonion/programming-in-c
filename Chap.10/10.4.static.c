#include <stdio.h>

void reset() {
    auto int n = 1;
    printf("자동 지역변수 n: %2d\n", n);
    n++;
}

void count() {
    static int s = 10;
    printf("\t정적 지역변수 s: %2d\n", s);
    s++;
}

int main()
{
    for (int i = 1; i <= 5; i++) {
        reset();
        count();
    }
}
