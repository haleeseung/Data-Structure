# include <stdio.h>
# pragma warning(disable:4996)

int sum(int n) {

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }

    return sum;
}

int main(void) {

    int N;
    scanf("%d", &N);

    printf("%d\n", sum(N));

    return 0;
}