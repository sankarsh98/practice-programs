#include<stdio.h>

main(){
char a[]="apple";
static int var = 5;
printf("%c ",a[var-1]);if(--var)
main();
}

