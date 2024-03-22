# include <stdio.h>
# pragma warning(disable:4996)
# include <stdlib.h>

int *prefixAverages1(int *X, int n);
int *prefixAverages2(int *X, int n);

int main(void) {

    int N;
    scanf("%d", &N);

    int *X = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int *A = prefixAverages1(X, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A);

    A = prefixAverages2(X, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A);

    return 0;
}

int *prefixAverages1(int *X, int n) {
    int i = 0, j = 0;
    double sum = 0;
    int *A = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j <= i; j++) {
            sum = sum + X[j];
        }
        A[i] = (int)(sum / (i + 1) + 0.5);
    }

    return A;
}

int *prefixAverages2(int *X, int n) {
    double sum = 0;
    int *A = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        sum = sum + X[i];
        A[i] = (int)(sum / (i + 1) + 0.5);
    }

    return A;
}