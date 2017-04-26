#include<stdio.h>
void main() {
	int num, count, c, i = 3;
	printf("Enter number: ");
	scanf("%d", &num);
	if (num >= 1) {
		printf("Prime Numbers: \n");
		printf("2\n");
	}
	for (count = 2; count <= num; ) {
		for (c = 2; c <= i - 1; c++) {
			if (i % c == 0)
				break;
		}
		if (c == i) {
			printf("%d\n", i);
			count++;
		}
		i++;
	}
}	
