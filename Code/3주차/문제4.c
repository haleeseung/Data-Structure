# include <stdio.h>
# include <stdlib.h>
# pragma warning(disable:4996)

int max(int *X, int k);

int main(void) {

    int N;
    scanf("%d", &N);

    int *X = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    printf("%d\n", max(X, N));

    free(X);

    return 0;
}

int max(int *X, int k) {

    if (k == 1) {
        return X[0];
    }
    else {
        int max_cnt = max(X, k - 1);
        if (max_cnt > X[k - 1]) {
            return max_cnt;
        }
        else {
            return X[k - 1];
        }
    }
}