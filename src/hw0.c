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

void printBoard();

int main()
{
    //print the game board
    printBoard();
	return 0;
}
void printBoard()
{
    // print top keys
    printf("    ");
    for (int i = 0; i<COLS; i++) {
        printf("%d ", top_key[i]);
    }
    printf("\n");
    printf("    v v v v v");
    printf("\n");

    // print a left key then > then that row and then print < and right key go by index: 0, 1, 2, 3, 4
    for (int i = 0; i < ROWS; i++){
        printf("%d > ", left_key[i]);
        for (int j = 0; j < COLS; j++){
            printf("%c ", board[i][j]);
        }
        printf("< %d", right_key[i]);
        printf("\n");
    }
    // print bottom row
    printf("    ^ ^ ^ ^ ^");
    printf("\n");
    printf("    ");
    for (int i = 0; i<COLS; i++) {
        printf("%d ", bottom_key[i]);
    }
}