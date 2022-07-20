/* inputstrings.c
 * source file for inputstrings, a program that introduces scanf for %s strings
 * and will experiment using \t and \v to create an input page.
 *
 * \v and \t works, \a does not work. An input screen not using ncurses?
 *
 * Done.
 *
*/

#include <stdio.h>






int main(int argc, char *argv[]) {


    char s1[81];

    /* input */
    /* create an input screen */

    printf("\v");
    printf("\t");
    printf("\a");
    printf("Input a string: ");
    scanf("%80s", s1);
    printf("\n");





    /* process */



    /* output */
    printf("The string is %s\n", s1);



    return(0);
}
