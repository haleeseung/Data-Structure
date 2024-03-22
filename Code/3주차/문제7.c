# include <stdio.h>
# include <string.h>
# pragma warning(disable:4996)

int function(char str[], char check_str, int k, int max);

int main(void) {

    char str[101];
    scanf("%s", str);

    char check_str;
    scanf(" %c", &check_str);

    int cnt = 0;

    printf("%d\n", function(str, check_str, strlen(str), cnt));

    return 0;
}

int function(char str[], char check_str, int k, int cnt) {
    if (k == 0) {
        return cnt;
    }
    else {
        if (str[k - 1] == check_str) {
            cnt++;
            return function(str, check_str, k - 1, cnt);
        }
        else {
            return function(str, check_str, k - 1, cnt);
        }
    }
}