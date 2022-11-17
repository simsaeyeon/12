#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)(time(NULL)));
	
	
	//opening
	printf("=====================================\n");
	printf("*************************************\n");
	printf("              BINGO GAME             \n");
	printf("*************************************\n");
	printf("=====================================\n\n\n");
	
	
	//game
	
	bingo_init();
	bingo_print(); 
	bingo_inputNum(21);
	bingo_print();
	
	//initialize bingo board
	/*
	while (game is not end) // 줄 수가 N_BINGO보다 작음 
	{
		//bingo board print
		.
		//print no.of completed line
		.
		//select a number > main함수에서 구현 
		.
		//update the board status
		
	}
	*/
	
	
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("=====================================\n");
	printf("*************************************\n");
	printf("             CONGRATULATION!!!!!     \n");
	printf("*#&&**&^%^&$$(* BINGO!!!! #)*&^$$%^&*\n");
	printf("              YOU WIN!!!!!           \n");
	printf("*************************************\n");
	printf("=====================================\n\n");
	
	return 0;
}
