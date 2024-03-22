# include <stdio.h>
# pragma warning(disable:4996)

void ABC(int X[], int k) {
    int max, tmp, check;

    for (int i = k; i < 10; i++) {
        if (i == k) {
            max = X[i];
            check = i;
        }
        else {
            if (max < X[i]) {
                max = X[i];
                check = i;
            }   
        }
    }

    tmp = X[k];
    X[k] = X[check];
    X[check] = tmp;
}

int main(void) {

    int X[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 10; i++) {
        ABC(X, i);
    }

    for (int i = 0; i < 10; i++) {
        printf(" %d", X[i]);
    }

    printf("\n");

    return 0;
}