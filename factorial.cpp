#include <stdio.h>
int main()
{
int n, i;
unsigned long long factorial = 1;
printf("Enter no: ");
scanf("%d",&n);
if (n < 0)
printf("Error! Please enter any positive integer number");
else
{
for(i=1; i<=n; ++i)
{
factorial *= i;
}
printf("Factorial of %d = %llu", n, factorial);
}
}
