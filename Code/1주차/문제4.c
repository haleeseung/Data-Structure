# include <stdio.h>
# pragma warning(disable:4996)
# include <string.h>

int main(void) {

    char str[101];
    char tmp;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        printf("%s\n", str);

        for (int j = 0; j < strlen(str) - 1; j++) {
            tmp = str[j];
            str[j] = str[j + 1];
            str[j + 1] = tmp;
        }
    }


    return 0;
}