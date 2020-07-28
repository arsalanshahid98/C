#include <stdlib.h>
#include <stdio.h>

int main() {
 int num, rem, i, rev = 0, num1, count = 0;
 printf("Enter a five digit number: ");
 
 scanf("%d", &num);
 num1 = num;
 while(num > 0) {
 rem = num % 10;
 rev = rem + rev * 10;
 num = num / 10;
 count++;
 }
 
 if(count == 5)
 {
 if(num1 == rev)
 {
 printf("\n\n1", num1);
 } else
 {
 printf("\n\n0",num1);
 }
 } else
 {
 printf("The given %d number is not a five digit number!",num1);
 }
 return 0;
}

