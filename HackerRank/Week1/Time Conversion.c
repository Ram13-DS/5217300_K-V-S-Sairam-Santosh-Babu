#include <stdio.h>
#include <string.h>

void timeConversion(char *s) {
    int hour = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[8] == 'A') {
        if (hour == 12) {
            s[0] = '0';
            s[1] = '0';
        }
    } else if (s[8] == 'P') {
        if (hour != 12) {
            hour += 12;
            s[0] = (hour / 10) + '0';
            s[1] = (hour % 10) + '0';
        }
    }

    s[8] = '\0';  // Remove AM/PM
    printf("%s\n", s);
}

int main() {
    char s[11];  // HH:MM:SSAM or HH:MM:SSPM

    scanf("%s", s);  // Read full time string
    timeConversion(s);

    return 0;
}
