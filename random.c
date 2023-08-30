#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function randchar() is a character function that returns a random character from ‘A’ – ‘Z’. 
//The character is used in the main program to generate a random 7 letter word
char randchar() {
    // assigns an ASCII values between A (65) - Z (90) to variable randomChar
    char randomChar = (rand() % (90 - 65)) + 65;
    // returns randomChar
    return randomChar;
}
