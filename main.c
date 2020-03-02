#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define M 8
void mas1(int A[N][M])
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			if (i == 0 || j == 0)
				A[i][j] = 1;
			else if (i % (N - 1) == 0 || j % (M - 1) == 0)
				A[i][j] = 1;
			else
				A[i][j] = rand() % 2;
}

void mas2(int A[N][M])
{
	int sch = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
			printf("%d", A[i][j]);
		++sch;
		if (sch == M)
			sch = 0;
		printf("\n");
	}

}

void mas3(int A[N][M], int x, int i, int j)
{


	if (i < N && j < M)
	{
		if (A[i][j] == 0)
		{
			A[i][j] = x;
			mas3(A, x, i, j + 1);
			mas3(A, x, i , j - 1);
			mas3(A, x, i - 1, j );
			mas3(A, x, i + 1, j);

		}
	else if (A[i][j] == 1)
		{
			return;
		}


	}

}




int main()
{

	int A[N][M];
	int x;
	int i;
	int j;
    printf("Vvedite chislo zalivki:");
	scanf("%d", &x);
	printf("Vvedite pervyu koordinaty dlya massiva:");
	scanf("%d", &i);
	printf("Vvedite vtoryu koordinaty dlya massiva:");
	scanf("%d", &j);

	printf("Sozdal massiv:\n");
	mas1(A);
	mas2(A);
	printf("Massiv:\n");
	mas3(A, x, i, j);
	mas2(A);

	return 0;

}
