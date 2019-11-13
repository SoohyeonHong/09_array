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
	//반복되는 부분을 매우 깔끔하게 쓸 수 있음. 
	
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
		if (a[i] != b[i])  //배열을 비교할 때 요소별로 해야한다. 
		{
			printf("%i is different\n", i);  //서로 다른 배열 값일 경우 그 index가 출력된다. 여기선 4번째인 3번 인덱스가 출력될 것. 
		}
	}
	
	*/
	
	#06#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void printMatrix(int a[][COLS])
{
    int i,j;
    
    for(i=0;i<ROWS;i++){
	
     for(j=0;j<COLS;j++){
	  printf("%i ",a[i][j]);}
	 printf("\n"); 
    }
}

void addMatrix(int a[][COLS],int b[][COLS],int c[][COLS]){
	 int i,j;
    
    for(i=0;i<ROWS;i++)
     for(j=0;j<COLS;j++)
	  c[i][j]=a[i][j]+b[i][j];
}

int main(int argc, char *argv[]) {
	
	int a [ROWS][COLS]={
	 {2,3,0},
	 {8,9,1},
	 {7,0,5}};
	int b [ROWS][COLS]={
	 {1,0,0},
	 {0,1,0},
	 {0,0,1}};
	int c [ROWS][COLS];
	
	addMatrix(a,b,c);
	printMatrix(c);
	
	return 0;
}
