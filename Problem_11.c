#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

int main() {
    int n;
    printf("How many students? ");
    scanf("%d", &n);

    struct Student s[n];

    printf("Enter their name, roll and CGPA respectively:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].cgpa);
    }

    // Sort by name (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nAfter Sorting by name:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].cgpa);
    }

    // Sort by roll (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (s[j].roll > s[j + 1].roll) {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nAfter Sorting by roll:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].cgpa);
    }

    return 0;
}
