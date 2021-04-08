#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int tax, hours, overtime, gross_pay, net_pay;

hours = scanf("%i", &hours);

if (hours > 40)
{
overtime = hours - 40;
gross_pay = overtime * 18 + 40*12;
}
else (hours <= 40);
{
gross_pay = hours * 12;
}
return 0;
}

