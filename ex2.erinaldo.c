/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void biss(int num){
    if(num % 100 == 0 || num %4 == 0 &&  num %100 != 0){
        printf("1");
    }
}

int main()
{
        int ano;
    printf("Insira um ano:");
    scanf ("%d" , &ano);
    biss(ano);

    return 0;
}
