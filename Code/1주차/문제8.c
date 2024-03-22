# include <stdio.h>
# pragma warning(disable:4996)
# include <stdlib.h>

struct student {
    char name[8];
    int kor, eng, math;
    double avg;
};

int main(void) {

    int N;
    scanf("%d", &N);

    struct student *st = (struct student *)malloc(N * sizeof(struct student));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", st[i].name, &st[i].kor, &st[i].eng, &st[i].math);

        st[i].avg = (st[i].kor + st[i].eng + st[i].math) / 3.0;
    }

    for (int i = 0; i < N; i++) {
        printf("%s %.1lf ", st[i].name, st[i].avg);
        if (st[i].kor >= 90 || st[i].eng >= 90 || st[i].math >= 90) {
            printf("GREAT ");
        }

        if (st[i].kor < 70 || st[i].eng < 70 || st[i].math < 70) {
            printf("BAD");
        }

        printf("\n");
    }

    free(st);




    return 0;
} 