# include <stdio.h>
# pragma warning(disable:4996)
# include <stdlib.h>

int mostOnes(int **A, int n);

int main(void) {

    int N, max = 0, check = 0, max_index = 0;
    scanf("%d", &N);

    int **A = (int **)malloc(N * sizeof(int *));

    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("%d\n", mostOnes(A, N));

    for (int i = 0; i < N; i++) {
        free(A[i]);
    }

    free(A);
    
    return 0;
}

int mostOnes(int **A, int n) {

    int i = 0, j = 0, max_i = 0;

    while (i < n) {
        if (A[i][j] == 1) {
            j++;
            max_i = i;
        }
        else {
            i++;
        }
    }

    return max_i;
}