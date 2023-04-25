#include <stdio.h>

int main()

{

int x,y;

printf("Enter the first and second number \n");

scanf("%d %d",&x,&y);

if(x>y)

printf("First Number is Greater than second number ");

else if (x<y)

printf("Second Number is Greater than first number ");

else

printf("Both the numbers are equal ") ;

return 0;

}
