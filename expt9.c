#include<stdio.h> 
int main (){
  int choice;
  float num1,num2, result;
 
 do {
    printf("\n------- Menu-Driven Calculator ---------\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter Your Choice (1-5): ");
    scanf("%d",&choice);
   if (choice == 5){
    printf("Exiting The Calculator. Goodbye!\n");
     break;
      } 
   if(choice >=1 && choice <=4 ){
    printf("Enter Two Numbers : ");
    scanf("%f%f",&num1,&num2);
   } else {
    printf("Invalid choice! Please Try Again");
     continue;
   }
switch (choice) {

    case 1 :
             result = num1 + num2;
             printf("Result: %.2f + %.2f = %.2f\n", num1,num2,result);
         break;
 
    case 2 :
             result = num1 - num2;
             printf("Result: %.2f - %.2f = %.2f\n", num1,num2,result);
         break;
 
    case 3 :
             result = num1 * num2;
             printf("Result: %.2f * %.2f = %.2f\n", num1,num2,result);
         break;

    case 4 :
             result = num1 / num2;
             printf("Result: %.2f / %.2f = %.2f\n", num1,num2,result);
         break;     
}

   }  while (choice != 5);
   return 0 ;
}
