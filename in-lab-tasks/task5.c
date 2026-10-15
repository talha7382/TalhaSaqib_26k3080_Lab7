#include <stdio.h>

int main()
{
	int matrix[3][3], i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("\nEnter number for row %d, col %d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
			
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
		{
		printf("%d ", matrix[i][j]);}
	printf("\n");
	}
	
	int null = 1, diagonal = 1, upper = 1, lower = 1, identity = 1;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			int cell = matrix[i][j];
			if (cell != 0)
			null = 0;
			if (i != j && cell != 0)
			diagonal = 0;
			if (i > j && cell != 0)
			upper = 0;
			if (j < i && cell != 0)
			lower = 0;
			if (i != j && cell != 0)
			identity = 0;
			if (i == j && cell != 1)
			identity = 0;
		}
	}
	
	printf("Square Matrix: True\n");
	if (null)
	printf("Null Matrix: True\n");
	if (diagonal) 
	printf("Diagonal Matrix: True\n");
    if (upper)    
	printf("Upper Triangular Matrix: True\n");
    if (lower)    
	printf("Lower Triangular Matrix: True\n");
    if (identity) printf("Identity Matrix: True\n");

    printf("\nDiagonal elements: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (i == j)
                printf("%d ", matrix[i][j]);

    printf("\nUpper triangular elements: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (i <= j)
                printf("%d ", matrix[i][j]);

    printf("\nLower triangular elements: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (i >= j)
                printf("%d ", matrix[i][j]);

    printf("\n");
}

