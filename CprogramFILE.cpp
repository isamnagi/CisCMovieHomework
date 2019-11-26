#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr=fopen("Cprogrammovieinfo.","r");
	if(fptr==NULL)
	{
		printf("error, file not found");
		exit(0);
	}
	struct MovieInfo
	{
		char name;
		char ParentalRating;
		int length;
		int RatingOne;
		int RatingTwo;
		int RatingThree;
	} MovieOne;
	char line[100];
	char *stringToken;
	while(fgets(line,100,fptr))
	{// printf("%s",line);
		stringToken=strtok(line,",");
		strcpy(MovieOne.name,stringToken);
		printf("%s",MovieOne.name);
	}
	
}
