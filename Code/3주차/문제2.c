# include <stdio.h>
# pragma warning(disable:4996)

void function(int N) {
    if (N < 10) {
        printf("%d\n", N);
    }
    else {
        function(N / 10);
        printf("%d\n", N % 10);
    }
}

int main(void) {

    int N;
    scanf("%d", &N);

    function(N);

    return 0;
}