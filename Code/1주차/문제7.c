# include <stdio.h>
# pragma warning(disable:4996)
# include <stdlib.h>

int main(void) {

    int N;
    scanf("%d", &N);

    int *X = (int *)malloc(N * sizeof(int));
    int *Y = (int *)malloc(N * sizeof(int));
    int *Z = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &Y[i]);
    }

    for (int i = 0; i < N; i++) {
        Z[i] = X[i] + Y[N - i - 1];
    }

    for (int i = 0; i < N; i++) {
        printf(" %d", Z[i]);
    }

    printf("\n");

    free(Z);
    free(Y);
    free(X);

    return 0;
}