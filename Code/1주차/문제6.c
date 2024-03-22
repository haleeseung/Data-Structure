# include <stdio.h>
# pragma warning(disable:4996)

struct student {
    char name[10];
    int score;
};

int main(void) {

    struct student st[5];

    int sum = 0;

    double avg = 0.0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", st[i].name, &st[i].score);
        sum += st[i].score;
    }

    avg = sum / 5;

    for (int i = 0; i < 5; i++) {
        if (st[i].score <= avg) {
            printf("%s\n", st[i].name);
        }
    }






    return 0;
}