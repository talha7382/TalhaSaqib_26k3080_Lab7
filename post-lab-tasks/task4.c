#include <stdio.h>

int main() {
    int marks[4][2];
    int total[4];


    int i, j;

    for (i = 0; i < 4; i++) {
        printf("student %d\n", i + 1);
        for (j = 0; j < 2; j++) {
            if (j == 0)
                printf(" enter mid marks: ");
            else
                printf(" enter final marks: ");
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\ntotal marks of each student\n");
    for (i = 0; i < 4; i++) {
        total[i] = marks[i][0] + marks[i][1];
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    int max_mid = marks[0][0], max_final = marks[0][1], min_mid = marks[0][0], min_final = marks[0][1];
    int sum_mid = 0, sum_final = 0;

    for (i = 0; i < 4; i++){
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
    printf("Average of Mid: %f\n", (float)sum_mid / 4);
    printf("Average of Final: %f\n", (float)sum_final / 4);
}
