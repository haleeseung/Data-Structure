# include <stdio.h>
# pragma warning(disable:4996)

void top(int N, char from, char aux, char to);

int main (void) {

    int N;

    scanf("%d", &N);

    top(N, 'A', 'B', 'C');

    return 0;
}

void top(int N, char from, char aux, char to) {
    if (N == 1) {
        printf("%c %c\n", from, to);
    }
    else {
        top(N - 1, from, to, aux);
        printf("%c %c\n", from, to);
        top(N - 1, aux, from, to);
    }
}