#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,cube,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		rem=n%10;
		cube=cube+pow(rem,3);
		n=n/10;
	}

	if(temp==cube)
	   printf("The number %d is an Armstrong number.",temp);
	else
	   printf("The number %d is not an Armstrong number.",temp);
	
	return 0;
}
