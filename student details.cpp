#include <stdio.h>
 
 struct Student
 {
 	int rollNumber;
 	char Name[50];
 	float Marks;
 };
 
 int main()
 {
 	int i,n;
 	printf("Enter the number of students: ");
 	scanf("%d",&n);
 	struct Student students[n];
 	
 	          for(i = 0; i < n; i++)
 	{
 		printf("\nEnter details for Student %d\n",i + 1);
 		printf("Roll Number: ");
 		scanf("%d", &students[i].rollNumber);
 		printf("Name: ");
 		scanf("%s", &students[i].Name);
 		printf("Marks: ");
 		scanf("%f", &students[i].Marks);
	 }
	           printf("\n Student Details\n");
	          for(i = 0; i < n; i++)
	 {
	 	printf("\nStudent %d\n",i+1);
	 	printf("Roll Number:%d\n",students[i].rollNumber);
	 	printf("Name       :%s\n",students[i].Name);
	 	printf("Marks      :%.2f\n",students[i].Marks);
	 }
	 return 0;
 }
 

