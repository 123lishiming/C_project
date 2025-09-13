/* function.c */
#include <stdio.h>

void func2(void);
void func1(void);

void func1() {
    func2();
}

void func2() {
    printf("hello from func2()\n");
}

int main() {
    func1();
    
    return 0;
}
