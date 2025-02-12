#include <stdio.h>
#include <math.h>

int main() {
    int x = 500;
    int years = x / 365;
    x = x - years*365; 
    int months = x / 30;
    int days = x - months * 30;

    printf("Years = %d\nMonths = %d\nDays = %d\n", years, months, days);
    return 0;
}