#include <stdio.h>

enum Weekday {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Weekday today;

    today = WEDNESDAY;

    printf("The value of today is: %d\n", today);

    return 0;
}