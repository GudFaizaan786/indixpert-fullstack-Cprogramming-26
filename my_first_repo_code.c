 #include<stdio.h>
int main()
{
   int first ;
   int second;
   int third ;
   int fourth;
   int sum, subtract, multiply, division;
printf("enter the first number  ");
scanf("%d",&first);
printf("enter the second number  ");
scanf("%d",&second);
printf("enter the third number  ");
scanf("%d",&third);
printf("enter the fourth number  ");
scanf("%d",&fourth);

sum = first + second + third + fourth;
subtract = first - second - third - fourth; 
multiply = first * second * third * fourth;
division = (first / second ) / (third / fourth);

printf("\nThe sum is = %d + %d + %d + %d = %d", first, second, third, fourth,sum);
printf("\nThe subtraction is = %d - %d - %d - %d = %d", first, second, third, fourth,subtract);
printf("\nThe multiplication is = %d * %d * %d * %d = %d", first, second, third, fourth,multiply);
printf("\nThe division is = %d / %d / %d / %d = %d", first, second, third, fourth,division);
   
    return 0;
}