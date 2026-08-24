/* Write a program to input a character and check whether it is a vowel or consonant using if-else. */
#include <stdio.h>
#include <ctype.h>
int main(void){char c;if(scanf(" %c",&c)!=1)return 1;if(!isalpha((unsigned char)c))puts("Not an alphabet");else puts((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?"Vowel":"Consonant");return 0;}
