#include "header.h"
#include <stdio.h>
int main() {
	int ask;
	float n, lar;
	float arr[7] = { 10.567,20.52,30.33,40.66,55,66,70.4667 };
		int num = 1;
	for (int i = 0; i <= 6; i++,num++) {
		printf("weight %d",num);
		printf("- %f\n", arr[i]);
	}
	do {
		printf("\nUr choice Are-\n");
		printf("\n1 => for Max weight\n2 => for avg weight \n3=> for sorting an weight\n4=> Exit\n");
		printf("\nEnter Ur choice- ");
		//scanf_s("%d",&ask);
		if (scanf_s("%d", &ask) != 1) {
			// Clear input buffer
			while (getchar() != '\n'); // Keep reading until newline
			printf("\nInvalid input! Please enter a valid number.\n");
			continue; // Restart the loop

		}

		switch (ask) {
		case 1:
			max(arr);
			lar = arr[0];
			printf("\nMax weight => %f\n", lar);
			break;
		case 2:
			n = avg(arr);
			printf("\nMax avg => %f\n", n);
			break;
		case 3:
			Incre(arr);
			break;

		default:
			printf("\nInvalid ");
		}
	}
		while (ask != 4);
		printf("Program is been exicuted SuccesFully");
}