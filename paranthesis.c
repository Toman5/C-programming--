#include <stdio.h>
#include <string.h>

int isValidString(char* s) {
    int n = strlen(s);
    int parameters = 0, star = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
         ++;
        } else if (s[i] == '*') {
            star++;
        } else {
            if (open > 0) {
                open--;
            } else if (star > 0) {
                star--;
            } else {
                return 0;
            }
        }
    }

    if (open > star) {
        return 0;
    }

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[100001];
        scanf("%s", s);
        int result = isValidString(s);
        if (result) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
