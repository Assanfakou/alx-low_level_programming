#include<stdio.h>
int main()
{
	int mat1[3][3] = { {2, 4, 1} , {2, 3, 9} , {3, 1, 8} };
	int mat2[3][3] = { {1, 2, 3} , {3, 6, 1} , {2, 4, 7} };
	int mat3[3][3], sum=0, i, j, k;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
         		sum=0;
			k = 0;
			while (k < 3)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
				k++;
			}
			mat3[i][j] = sum;
			j++;
		}
		i++;
	}
	printf("\nMatrix 1 ...\n");
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d\t", mat1[i][j]);
			j++;
		}
	printf("\n");
	i++;
	}

	printf("\nMatrix 2 ...\n");
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d\t", mat2[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("\nMultiplication of the two given Matrices: \n");
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d\t", mat3[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
