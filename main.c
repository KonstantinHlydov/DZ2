#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 25
#define M 25

int main() 
{

	int A[N][M];
	int x = 5;
	printf("Sozdal massiv:\n");
	mas1(A);
	mas2(A);
	printf("Massiv:\n");
	mas3(A, x);
	mas2(A);
	
	getchar();

}

void mas1(int A[N][M]) 
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			if (i == 0 || j == 0)
				A[i][j] = 1;
			else if (i%(N-1)==0 || j % (M - 1) == 0)
				A[i][j] = 1;
			else 
				A[i][j] = rand()%2;
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
			sch == 0;
		printf("\n");
	}
	
}

void mas3(int A[N][M], int x)
{

	for (int i = 1; i < (N - 1); i++)
	{
		for (int j = 1; j < (M - 1); j++)
		{
			if (A[i][j] == 0)
			{
				if (A[i][j] == 0)
					A[i][j] = x;
				if (A[i][j - 1] == A[i][j])
					A[i][j - 1] = x;
				if (A[i - 1][j] == A[i][j])
					A[i - 1][j] = x;
				if (A[i + 1][j] == A[i][j])
					A[i + 1][j] = x;
				if (A[i][j + 1] == A[i][j])
					A[i][j + 1] = x;
				

			}
			else if (A[i][j] == 1)
			{
				if (A[i][j] == 1)
					A[i][j] = x;
				if (A[i][j - 1] == A[i][j])
					A[i][j - 1] = x;
				if (A[i - 1][j] == A[i][j])
					A[i - 1][j] = x;
				if (A[i + 1][j] == A[i][j])
					A[i + 1][j] = x;
				if (A[i][j + 1] == A[i][j])
					A[i][j + 1] = x;
				
			}


		}
	}
}
