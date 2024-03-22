# include <stdio.h>
# pragma warning(disable:4996)

int modulo(int a, int b);

int main(void) {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", modulo(a, b));

    return 0;
}

int modulo(int a, int b) {
    while (a >= b) {
        a = a - b;
    }

    return a;
}