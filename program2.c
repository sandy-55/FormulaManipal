//Program2

#include<stdio.h>
int main()
{
	 int sec1, hrs, mins, sec2;
	 
	 printf("Enter time in seconds: ");
	 scanf("%d", &sec1);
	 
	 hrs = sec1/3600;
	 mins = (sec1 - hrs*3600)/60;
	 sec2 = sec1 - hrs*3600 - mins*60;
	 printf("%d seconds = %d hours : %d minutes : %d seconds", sec1, hrs, mins, sec2);
	 
	 return 0;
}