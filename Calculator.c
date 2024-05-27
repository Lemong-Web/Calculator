#include <stdio.h>

int main(){
  
  // Declare varible
  char medthod;	
  int num1, num2, result;
  
  // User input
  printf("Please enter the first number: ");
  scanf("%d", &num1);

  printf("\nPlease enter the second number:");
  scanf("%d", &num2);
 
  // Clear Buffer
  while (getchar() != '\n');
  
  // Calculation method 
  printf("Pick you calculation medthod(+, -, *, /): ");
  scanf("%c", &medthod);
      
    if(medthod == '+'){
    result = num1 + num2;
    printf("Here's is the result: %d", result);
   
   }else if(medthod == '-') {
    result = num1 - num2;
    printf("Here's is the result: %d", result);

   }else if(medthod == '*') {
    result = num1 * num2;
    printf("Here's is the result: %d", result);
   
   }else if(medthod == '/') {
     if (num2 != 0) {
    result = num1 / num2;
    printf("Here's is the result: %d", result);
   
   } else {
     printf("Division by 0 is cringe");
   }

   } else {
    printf("Invalid method please try again!");
   }


  return 0;
}


