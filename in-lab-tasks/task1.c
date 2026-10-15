#include <stdio.h>

int main()
{
	int quantity, price, total = 0, grand_total = 0;
	int products[5][2] = {
		{136, 23},
		{231, 54},
		{65, 634},
		{11, 432},
		{57, 754},
	};
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 2; j++){
			if (j == 0)
				price = products[i][j];
			else
				quantity = products[i][j];
		}
		total = price * quantity;
		grand_total += total;
		printf("\n\nProduct %d:\nUnit Price: %d\tQuantity: %d\tTotal: %d", i + 1, price, quantity, total);
	}
	printf("\n\nGrand Total: %d", grand_total);
}
