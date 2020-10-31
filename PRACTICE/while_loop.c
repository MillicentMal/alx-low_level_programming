#include <stdio.h>
int main()
{
int value;
do
{
printf("Enter a value greater than 20: ");
scanf("%d",&value);
}
while(value <= 20);
printf("Thank you. You entered %d\n",value);
}

int guess,number;
srandom((unsigned)time(NULL));
puts(Guessing Game!);
number=random() % RANGE + 1; /* value from 1 to RANGE */
printf(Im thinking of a number from 1 to %d.\n,RANGE);
printf(Can you guess what it is?\n);
while(1)
{
printf(Enter guess: );
scanf(%d,&guess);
if(guess == number)
{
puts(You got it!);
break;
}
else if(guess < number)
puts(Too low!);
else
puts(Too high!);
}
printf(The number was %d\n,number);

return(0);
}

