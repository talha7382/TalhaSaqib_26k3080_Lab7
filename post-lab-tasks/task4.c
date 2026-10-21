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

    int max_overall, min_overall;
    if (max_mid > max_final)
        max_overall = max_mid;
    else
        max_overall = max_final;
    if (min_mid < min_final)
        min_overall = min_mid;
    else
        min_overall = min_final;

    float avg_mid = sum_mid / 4.0;
    float avg_final = sum_final / 4.0;

    printf("Highest in mid: %d\n", max_mid);
    printf("Highest in final: %d\n", max_final);
    printf("Highest overall: %d\n", max_overall);

    printf("Lowest in mid: %d\n", min_mid);
    printf("Lowest in Final: %d\n", min_final);
    printf("Lowest overall: %d\n", min_overall);

    printf("Average of mid: %f\n", avg_mid);
    printf("Average of final: %f\n",avg_final);
}
