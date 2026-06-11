#include<stdio.h>
int main() {
int a = 1, b = 2, c;
c = a++ + ++b + b-- + --a;
printf("%d %d %d", a, b, c);
return 0;
}
