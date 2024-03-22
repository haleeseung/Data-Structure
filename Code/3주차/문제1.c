# include <stdio.h>
# pragma warning(disable:4996)

int sum(int N) {
    if (N == 1) {
        return N;
    }
    else {
        return sum(N - 1) + N;
    }

}

int main(void) {

    int N;
    scanf("%d", &N);

    printf("%d\n", sum(N));

    return 0;
}