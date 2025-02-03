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

int main() {
    char choice;
    int piece, row, col;
    
    while(1){ // while true
        while(1){
            // print the game board
            printBoard();
            // ask for user input for piece until valid
            while(1){
                printf("Choose a piece (1-5) or q to quit: ");
                scanf(" %c", &choice); 
                if (choice == 'q'){
                    return 0;
                } else if (choice >= '1' && choice <= '5') {
                    piece = choice - '0';
                    break; 
                } else {
                    printf("Invalid choice. Choose a piece (1-5) or q to quit: ");
                } 
            }
            // ask for row and col
            while(1) {
                printf("Choose a row (0-4): ");
                scanf("%d", &row);
                if (row >= 0 && row <= 4){
                    break;
                } else {
                    printf("Invalid choice. Choose a row (0-4): ");
                }
            }
            while(1) {
                printf("Choose a column (0-4): ");
                scanf("%d", &col);
                if (col >= 0 && col <= 4){
                    break;
                } else {
                    printf("Invalid choice. Choose a column (0-4): ");
                }
            }
            // check if pos is valid
            if(board[row][col]=='-'){
                board[row][col] = piece + '0';
                break;
            } else{
                printf("Invalid move. The spot is already occupied.\n");
            }
        }
        printf(" %d ", col);
        printf(" %d ", row);
        printf(" %d ", piece);

    }
	return 0;
}
void printBoard()
{
    // print top keys
    printf("    ");
    for (int i = 0; i<COLS; i++) {
        printf("%d ", top_key[i]);
    }
    printf("\n    v v v v v\n");

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
    printf("    ^ ^ ^ ^ ^\n    ");
    for (int i = 0; i<COLS; i++) {
        printf("%d ", bottom_key[i]);
    }
    printf("\n");
}