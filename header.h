/*
 * TIC_TAC_TOE
 *  23 10.20
 * 
 * GitHub Repository: https://github.com/yahalloe/finalProject-.git
 *
 * header.h
 */
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#if defined(_WIN32) || defined(__WIN32__)
#ifndef __windows_h
#include <windows.h>
#define CLEAR system("cls")
#define COLORBLUE system("color 09")
#endif
#else
#define CLEAR system("clear")   
#ifndef __termios_h
#include <termios.h>
#endif
#ifndef __unistd_h
#include <unistd.h>
#define COLORBLUE COLOR(\033[34m)
#endif
#endif

extern const char PLAYER;
extern const char COMPUTER;
extern const char *text1;
extern const char *text2;
extern const char *text3;
extern const char *rule1;
extern const char *rule2;
extern const char *rule3;
extern const char *rule4;
extern const char *text7;
extern const char *text5;
extern const char *text6;

/*
 * for some reason, i need to declare these here even tho I didn't need to 
 * declare the char here. I'm not sure but it's probably due to the type. Otherwise,
 * if I didn't do this, I need to include library.c file on the main file.
 * 
 * update: 
 * -I know the reason now. I need to declare it here but with extern. extern ensures
 * that the content of the intialization is somewhere in the files.
 * - I can just put the declaration and everything on the source file (library.c) here but
 * I think it's much cleaner if I put them in different files like I'm doing rn.
 */


//===============================================================================================
//                                     funtions 
//===============================================================================================


/*
 *  function to put out text 1 and so on in a type-writter like fashion
 */
void typeString(const char* text);

/*
 * Prints a Welcome Message
 */
void greet(void);

/*
 * Prints the rules
 */
void printRules(void);

/*
 * resets the board after the move had inputed by the user
 */
void resetBoard(void);

/*
 * Prints the 2d board
 */
void printBoard(void);
/*
 * Checks whether there is no input on the coordinate on the board
 */
int checkFreeSpaces(void);

/*
 * funtion for the player's move
 */
void playerMove(void);

/*
 * funtion for the player's move
 */
void computerMove(void);

/*
 * return what chracter had won
 * else; retuen a ' ' for tie
 */
char checkWinner(void);

/*
 * prints if there is a winner, unless tie
 */
void printWinner(char winner);
