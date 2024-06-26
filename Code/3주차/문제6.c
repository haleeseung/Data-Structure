# include <stdio.h>
# pragma warning(disable:4996)

int gcd(int a, int b) {
    if (b <= 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main(void) {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));

    return 0;
}