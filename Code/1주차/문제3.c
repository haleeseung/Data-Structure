# include <stdio.h>
# pragma warning(disable:4996)

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {

    int N;
    scanf("%d", &N);

    int X[50];

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    swap(&X[a], &X[b]);

    for (int i = 0; i < N; i++) {
        printf(" %d", X[i]);
    }

    printf("\n");



    return 0;
}