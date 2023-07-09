
#include<bits/stdc++.h>
using namespace std;

char board[3][3]; // 2D array to hold the Tic Tac Toe board

// Function to initialize the board
void initBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}

// Function to display the board
void displayBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a move is valid
bool isValidMove(int row, int col) {
    if(row < 0 || row > 2 || col < 0 || col > 2) {
        return false; // Out of bounds
    }
    if(board[row][col] != '-') {
        return false; // Cell already taken
    }
    return true;
}

// Function to check if the game is over
bool isGameOver() {
    // Check rows
    for(int i = 0; i < 3; i++) {
        if(board[i][0] != '-' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
    }
    // Check columns
    for(int j = 0; j < 3; j++) {
        if(board[0][j] != '-' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return true;
        }
    }
    // Check diagonals
    if(board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if(board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    // Check if board is full
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] == '-') {
                return false;
            }
        }
    }
    // If we get here, game is a tie
    cout << "Game is a tie!" << endl;
    return true;
}

// Function to make a move
void makeMove(char player) {
    int row, col;
    cout << "Player " << player << "'s turn. Enter row and column (0-2): ";
    cin >> row >> col;
    while(!isValidMove(row, col)) {
        cout << "Invalid move. Try again." << endl;
        cout << "Player " << player << "'s turn. Enter row and column (0-2): ";
        cin >> row >> col;
    }
    board[row][col] = player;
}

// Main function
int main() {
    initBoard(); // Initialize the board
    char currentPlayer = 'X';
    while(!isGameOver()) {
        displayBoard(); // Display the board
        makeMove(currentPlayer); // Make a move
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch players

    }
}