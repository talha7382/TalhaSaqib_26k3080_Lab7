#include <stdio.h>

int main(){
    int array1[3][3], array2[3][3], sum[3][3];
    
    printf("For Matrice 1:\n");
    for(int i = 0; i < 3; i++){
        printf("\nEnter the elements of Row %d:\n", i + 1);
        scanf("%d %d %d", &array1[i][0], &array1[i][1], &array1[i][2]);
    }
    printf("\n\nFor Matrice 2:\n");
    for(int i = 0; i < 3; i++){
        printf("\nEnter the elements of Row %d:\n", i + 1);
        scanf("%d %d %d", &array2[i][0], &array2[i][1], &array2[i][2]);
    }


    printf("\nMatrice 1:\n");
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    printf("\nSum Matrice:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}
