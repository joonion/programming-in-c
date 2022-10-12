#include <stdio.h>

static int svar;
int gvar;

void increment();
void setgvar(int);
// void teststatic();

int main()
{
    for (int count = 1; count <= 5; count++)
        increment();
    printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);

    setgvar(30);    
    printf("전역변수: %d\n", gvar);
    // teststatic();
}

void increment() { 
    svar++;
}