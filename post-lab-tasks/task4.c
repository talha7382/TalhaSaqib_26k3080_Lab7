#include <stdio.h>

int main() {
    const int n_students = 4,  n_exams = 2;
    int marks[n_students][n_exams];
    int total[n_students];


    int i, j;

    for (i = 0; i < n_students; i++) {
        printf("student %d\n", i + 1);
        for (j = 0; j < n_exams; j++) {
            printf("  enter %s marks: ", (j == 0) ? "Mid" : "Final");
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\ntotal marks of each student\n");
    for (i = 0; i < n_students; i++) {
        total[i] = marks[i][0] + marks[i][1];
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    int max_mid = marks[0][0], max_final = marks[0][1], min_mid = marks[0][0], min_final = marks[0][1];
    int sum_mid = 0, sum_final = 0;

    for (i = 0; i < n_students; i++){
        if (marks[i][0] > max_mid)
            max_mid = marks[i][0];
        if (marks[i][0] < min_mid)
            min_mid = marks[i][0];
        sum_mid += marks[i][0];

        if (marks[i][1] > max_final)
            max_final = marks[i][1];
        if (marks[i][1] < min_final)
            min_final = marks[i][1];
        sum_final += marks[i][1];
    }

    int maxOverall, minOverall;
    if (max_mid > max_final)
        maxOverall = max_mid;
    else
        maxOverall = max_final;
    if (min_mid < min_final)
        minOverall = min_mid;
    else
        minOverall = min_final;

    printf("\nHighest Marks\n");
    printf("Highest in Mid: %d\n", max_mid);
    printf("Highest in Final: %d\n", max_final);
    printf("Highest Overall: %d\n", maxOverall);

    printf("\nLowest Marks\n");
    printf("Lowest in Mid: %d\n", min_mid);
    printf("Lowest in Final: %d\n", min_final);
    printf("Lowest Overall: %d\n", minOverall);

    printf("\nAverages\n");
    printf("Average of Mid: %f\n", (float)sum_mid / n_students);
    printf("Average of Final: %f\n", (float)sum_final / n_students);
}