#include <stdio.h>

void in(void);
void out(void);

int g = 10;
static int sg = 20;

int main()
{
    auto int a = 100;
    printf("%d %d %d\n", g, sg, a);
    in(); out();
    in(); out();
    in(); out();
    printf("%d %d %d\n", g, sg, a);
}

void in(void) {
    auto int fa = 1;
    static int fs;
    printf("\t%d %d %d\n", ++g, ++sg, ++fa, ++fs);
}
