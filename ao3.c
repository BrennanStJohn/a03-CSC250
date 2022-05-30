#include <stdio.h>

void getNames();
void getGrades();
int average();
void finalGrades();

int main() {

	int numStudent = 0;
	int numAssign = 0;
	int i;
	char student[] = "";
	
	
	puts(" ---------------- ");
	puts("|                |");
	puts("| Grade Checker  |");
	puts("|       v1       |");
	puts("|                |");
	puts(" ---------------- ");
	
	puts("");
	
	printf("%s", "How many students? ");
	scanf("%d", &numStudent);
	
	puts("");
	
	printf("%s", "How many assignments? ");
	scanf("%d", &numAssign);
	
	puts("");
	
	for (i = 0; i < numStudent; i++) {

		printf("Enter name for Student %d: ", i);
		scanf("%s", student[i]);
		
	}
	
	
	
	
}