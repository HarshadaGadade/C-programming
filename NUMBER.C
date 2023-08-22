#include<stdio.h>
#include<conio.h>
int main()
{
	double num;
	printf("Enter a number;");
	scanf("%1f",&num);
	if (num <= 0.0) {
		if (num == 0.0)
			printf("You Entered 0.");
		else
			printf("You entered a negative number.");
	}
	else
		printf("You entered a positive number.");
	getche();
	return 0;
}