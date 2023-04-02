#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789./";

    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1] = {0};

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % 64;
        password[i] = valid_chars[index];
    }

    printf("Random password: %s\n", password);

    return 0;
}
