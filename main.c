#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	#01 /*
	int grade[5];
	int i;
	
	grade[0]=10;
	grade[1]=20;
	grade[2]=30;
	grade[3]=40;
	grade[4]=40;
	for(i=0;i<5;i++)
	{
		printf("grade[%i] = %i\n",i,grade[i]);	
	}
	//�ݺ��Ǵ� �κ��� �ſ� ����ϰ� �� �� ����. 
	
	*/
	
	#03
	/*
	int i;
	int grade[SIZE];
	int score[SIZE];	
	
	for(i=0; i <SIZE; i++)
	{
		grade[i]=rand() %100;
	}
	
	for(i=0; i <SIZE; i++)
	{
		socre[i] = grade[i];
	}
	
	for(i=0; i <SIZE; i++)
	{
		printf("score[%d] = %d\n", i, score);
	}
	
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,5,5};
	
	for (i=0;i<5;i++)
	{
		if (a[i] != b[i])  //�迭�� ���� �� ��Һ��� �ؾ��Ѵ�. 
		{
			printf("%i is different\n", i);  //���� �ٸ� �迭 ���� ��� �� index�� ��µȴ�. ���⼱ 4��°�� 3�� �ε����� ��µ� ��. 
		}
	}
	
	*/
	
	#define ROWS 3
	deefine COLS 3
	
void addMatrx(int A[][COLS], int B[][COLS], int
C[][COLS])
{
	//C = A + B ���·� ��� ���
	//for���� �̿��ؼ� ���
}
void printMatrx(int A[][COLS])
{
	]]//for���� �̿��ؼ� ���
}
	
int main(void)
{
	int A[ROWS][COLS] = { 	//���ϱ� ��� ���
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5} };
	int B[ROWS][COLS] = { 	//���ϱ� ��� ���
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1} };
	int C[ROWS][COLS]; 		//���� ��� ���
		printMatrix(C);

	addMatrix(A,B,C);
	printf(Matrix(0);)

void printMatrix(in a[CoLs)

	return 0;
	
	
	
	#06
void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
	{
		int i, j;
		for (i=0;i<ROWS;i++)
			for (j=0;j<COLS;j++)
				c[i][j] = a[i][j]+b[i][j];
		//C = A + B ���·� ��� ���
		//for���� �̿��ؼ� ���
	}
	
void printMatrx(int A[][COLS])
	{
		int i, j;
		for (i=0;i<ROWS;i++) {
			for (j=0;j<COLS;j++)
				printf("%i", a[i][j]);
			printf("\n");
		}	//for���� �̿��ؼ� ���
	}

	int main(void)
	{
		int A[ROWS][COLS] = { //���ϱ� ��� ���
			{2, 3, 0},
			{8, 9, 1},
			{7, 0, 5} };
		int B[ROWS][COLS] = { //���ϱ� ��� ���
			{1, 0, 0},
			{0, 1, 0},
			{0, 0, 1} };
		int C[ROWS][COLS]; //���� ��� ���
			addMatrix(A, B, C);
			printMatrix(C);
		return 0;
		}
	
	
	 
	return 0;
}
