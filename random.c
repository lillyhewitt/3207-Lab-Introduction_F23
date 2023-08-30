#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function randchar() is a character function that returns a random character from ‘A’ – ‘Z’. 
//The character is used in the main program to generate a random 7 letter word
char randchar() {
    // creates variable to save random character to 
    char randomChar;
    // use ASCII values to grab random character between A (65) - Z (90)
    randomChar = (rand() % (90 - 65)) + 65;
    // return char
    return randomChar;
}
