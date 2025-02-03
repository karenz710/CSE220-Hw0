#include <stdio.h>
#define ROWS 5
#define COLS 5

int top_key[COLS] = {1, 2, 3, 4, 5};
int bottom_key[COLS] = {1, 2, 3, 4, 5};
int left_key[ROWS] = {1, 2, 3, 4, 5};
int right_key[ROWS] = {1, 2, 3, 4, 5};

char board[ROWS][COLS] = {
    {'1', '1', '2', '-', '3'}, 
    {'3', '2', '2', '3', '3'}, 
    {'2', '1', '-', '4', '4'}, 
    {'2', '-', '3', '2', '-'}, 
    {'4', '5', '4', '1', '3'}};
	
//scanf(" %c", &choice); //this command will erase whitespace in the token selection and read 1 char (replace the 'c' with a 'd' to read an int)

int main()
{
    //print the game board
    printf("   ");
    for (int i = 0; i<COLS; i++) {
        printf("%d ", top_key[i]);
    }
    printf("\n");
    
	return 0;
}