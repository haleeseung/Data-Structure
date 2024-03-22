# include <stdio.h>
# pragma warning(disable:4996)

struct time {
    int hour;
    int min;
    int sec;
};

int main(void) {

    struct time X[3];

    for (int i = 0; i < 2; i++) {
        scanf("%d %d %d", &X[i].hour, &X[i].min, &X[i].sec);
    }

    if (X[1].sec < X[0].sec) {
        X[2].sec = (X[1].sec + 60) - X[0].sec;
        X[1].min = X[1].min - 1;
    }
    else {
        X[2].sec = X[1].sec - X[0].sec;
    }

    if (X[1].min < X[0].min) {
        X[2].min = (X[1].min + 60) - X[0].min;
        X[1].hour = X[1].hour - 1;
    }
    else {
        X[2].min = X[1].min - X[0].min;
    }

    X[2].hour = X[1].hour - X[0].hour;

    printf("%d %d %d\n", X[2].hour, X[2].min, X[2].sec);

    return 0;
}