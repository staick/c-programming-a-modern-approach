#include <stdio.h>

#define STUDENTS 5
#define EXAM 5

int main() {
    int grades[STUDENTS][EXAM];
    int high, low, student, exam, total;

    for (student = 0; student < STUDENTS; student++) {
        printf("Enter the %d grades of student %d: ", EXAM, student + 1);
        for (exam = 0; exam < EXAM; exam++) {
            scanf("%d", &grades[student][exam]);
        }
    }

    printf("The total grades of student:");
    for (student = 0; student < STUDENTS; student++) {
        total = 0;
        for (exam = 0; exam < EXAM; exam++) {
            total += grades[student][exam];
        }
        printf(" %d", total);
    }

    printf("\nThe average grades of student:");
    for (student = 0; student < STUDENTS; student++) {
        total = 0;
        for (exam = 0; exam < EXAM; exam++) {
            total += grades[student][exam];
        }
        printf(" %d", total / STUDENTS);
    }

    printf("\nThe average grades of exam:");
    for (exam = 0; exam < EXAM; exam++) {
        total = 0;
        for (student = 0; student < STUDENTS; student++) {
            total += grades[student][exam];
        }
        printf(" %d", total / EXAM);
    }
    
    printf("\nThe highest grades of exam:");
    for (exam = 0; exam < EXAM; exam++) {
            high = grades[0][exam];
        for (student = 0; student < STUDENTS; student++) {
            high = high > grades[student][exam] ? high : grades[student][exam];
        }
        printf(" %d", high);
    }
    
    printf("\nThe lowest grades of exam:");
    for (exam = 0; exam < EXAM; exam++) {
            low = grades[0][exam];
        for (student = 0; student < STUDENTS; student++) {
            low = low < grades[student][exam] ? low : grades[student][exam];
        }
        printf(" %d", low);
    }
    printf("\n");
}
