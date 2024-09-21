#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   char c1 = 'H';
   char c2 = 'I';
   char c3 = '!';

   string s = "HI!";
   string t = "BYE!";

   string words[2];

   words[0] = "HI!";
   words[1] = "BYE!";

   printf("%s\n", words[0]);
   printf("%s\n", words[1]);

   printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
   printf("%c%c%c\n", words[1][0], words[1][1], words[1][2]);

   // Allocate enough memory for the concatenated string
   // Length of s + length of t + 1 (for the null terminator)
   char *st = malloc(strlen(s) + strlen(t) + 1);
   // Copy s into st
   strcpy(st, s);
   // Concatenate t to st
   strcat(st, t);

   printf("%s\n", s);   
   printf("%s\n", t);
   printf("%s\n", st);

   printf("%c%c%c\n", s[0],s[1], s[2]);
   printf("%i %c%c%c\n", c3,c1, c2, c3);
}