//fizzbuzz in C
//It will increment from 1 to whatever number is entered.
//If the number is a multiple of 3, it will print the number
//followed by "fizz". If the number is a multiple of 5, then
//it will print "buzz". If the number is a multiple of both
//3 and 5, it will print "fizzbuzz". The main function will
//print "complete" when it is complete.

//NOTICE: THERE ARE MANY MORE SIMPLER WAYS
//TO COMPLETE THIS EXERCISE, BUT I DECIDED
//TO USE EXTRA FUNCTIONS AND CODE JUST
//TO JOG MY MEMORY MORE.

#include <stdio.h>
void doFizzBuzz(int);


int main(void){
	int maxNum = 0;

	printf("Enter an integer: ");
	scanf("%d", &maxNum);	
	
	doFizzBuzz(maxNum);
	
	
	return 0;
}
void doFizzBuzz(int maxNum){
	int num = 1;
	while(num <= maxNum){
		if((num % 3 == 0) && (num % 5 == 0)){
			printf("%d: FizzBuzz\n", num);
				num++;
		}
		else if (num % 3 == 0){
			printf("%d: Fizz\n", num);
				num++;
		}
		else if (num % 5 == 0){
			printf("%d: Buzz\n", num);
				num++;
		}
		else
			num++;
	}
	return;
}