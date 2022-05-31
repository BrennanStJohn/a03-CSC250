#include <stdio.h>
#include <string.h>

void getNames(int n, char arr[][10]);
void getGrades(int numStudent, int numAssign, int arar1[][numStudent], char arr[][10]);
int average();
void finalGrades(int numStudent, int numAssign,int grades[][numStudent], char names[][10]);

int main() {

	int numStudent = 0;
	int numAssign = 0;
	
	puts(" ---------------- ");
	puts("|                |");
	puts("| Grade Checker  |");
	puts("|       v1       |");
	puts("|                |");
	puts(" ---------------- ");
	
	puts("");
	
	printf("%s", "How many students? ");
	scanf("%d", &numStudent);
	
	char names[numStudent][10];
	
	puts("");
	
	printf("%s", "How many assignments? ");
	scanf("%d", &numAssign);
	
	int grade[numAssign][numStudent];
	
	puts("");
	
	getNames(numStudent, names);
	
	puts("");
	
	getGrades(numStudent, numAssign, grade, names);
	
	puts("");
	
	average(numAssign, numStudent, grade);
	
	puts("");
	
	finalGrades(numStudent, numAssign, grade, names);
	
}

void getNames(int numStudent, char arr[numStudent][10]) {
	
	int i;
	
	for (i = 0; i < numStudent; i++) {
		printf("Enter the name for Student %d: ", i);
		scanf("%s", arr[i]);
	}
	
}

void getGrades(int numStudent, int numAssign, int arr1[numAssign][numStudent], char arr2[numStudent][10]) {
	
	int i;
	int j;
	char garb;
	
	for (i = 0; i < numAssign; i++) {
		
		for (j = 0; j < numStudent; j++) {
			
			printf("Enter grade for Assignment %d for %s: ", i, arr2[j]);
			scanf("%d", &arr1[i][j]);
			
		}
	}
	
}

int average(int numAssign, int numStudent, int arr3[numAssign][numStudent]) {
	
	int i;
	int j;
	int x;
	int sum;
	
	for (i = 0; i < numStudent; i++) {
		
		for (j = 0; j < numAssign; j++) {
			
			for(x = 0; x < numStudent; x++) {
				
				sum = arr3[i][x];
				
				printf("'%d'", sum);
			}
			
		}
		
		//printf("%10d ", sum);
		
		puts("");
	}
	
	
}

void finalGrades(int numStudent, int numAssign, int arr4[numAssign][numStudent], char arr5[numStudent][10]) {
	
	int i;
	int j;
	int x;
	
	for (i = 0; i < numStudent; i++) {
		
			printf("%10s ", arr5[i]);
	} 
	
	puts("");
	
	for (j = 0; j < numAssign; j++) {
		
		for (x = 0; x < numStudent; x++) {
			printf("%10d ", arr4[j][x]);
		}
		puts("");
	}
}