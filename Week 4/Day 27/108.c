#include <stdio.h>

int main() {
    char name[50];
    int roll, m1, m2, m3, total;
    float percent;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1+m2+m3;
    percent = total/3.0;

    printf("\nMarksheet\n");
    printf("Name: %s\nRoll: %d\nTotal: %d\nPercentage: %.2f\n", name, roll, total, percent);
    return 0;
}
