#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <Windows.h>


// ������� 1

void task1()
{

	int arr[5] = {55,123,54,778,12};
	int max = arr[0];
	int	min = arr[0];
	int d;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	d = max - min;
	printf("%d\n",d);



	system("pause");
}


// ������� 2

void task2()
{
	
	srand(time(NULL));
	int arr[5];
	
	for (int i = 0; i <5; i++)
	{

		 arr[i] = rand() % 20;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
system("pause");
}

// ������� 3

void task3()
{
	int *a;
	int i,n;
	printf("Enter:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for (i=0; i<n; i++)
	{
		printf("a[%d}=",i);
		scanf("%d", &a[i]);
	}
	for (i=0;i<n;i++)
		printf("%d\n",a[i]);
	
	free(a);

system("pause");

	
}


// ������� 4
void task4()
{
	SetConsoleCP(1251);                
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[5][5];
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0;j<5;j++){
			arr[i][j] = rand() % 10;
			printf(" %d |",arr[i][j]);
			
		}
		printf("\n");
	}
	
	

	for (int i=0;i<5;i++) {
		int sum = 0;

		for (int j=0;j<5;j++) {
			sum += arr[j][i];
		}
		printf("����� ������� %d  ����� %d\n",i, sum);
	
	
	}

	system("pause");


}

// ������� 5
void task5()
{
		struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

		SetConsoleCP(1251);                
		SetConsoleOutputCP(1251);
	int i=0, k=0;
	char famil1[20], name1[20], name2[20];
	for (i = 0; i < 3; i++)
	

	{

		printf("������� ������� ��������\n"); scanf("%20s", stud[i].famil);

	}

	for (i = 0; i < 3; i++)

	{

		printf("������� ��� �������� %s\n", stud[i].famil); scanf("%20s", stud[i].name);

	}

	for (i = 0; i < 3; i++)

	{

		printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);

	}

	for (i = 0; i < 3; i++)

	{

		printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);

	}

	
	printf("������� ��� � ������� ��������, ��� �� �������� ���������� � ��\n");
	printf("������� ���:\n");
	scanf("%20s", name1);
	printf("������� �������:\n");
	scanf("%20s", famil1);
	
	for (i = 0; i < 3; i++) {
		if (strcmp(name1, stud[i].name) == 0 && strcmp(famil1, stud[i].famil) == 0) {
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,

				stud[i].facult, stud[i].Nomzach);
			k++;

		}
	}
	if (k <= 0) {
		printf("������ �������� �� ����������");
	}


}

int main(){

	task1();

	_getch();
	task2();
	getch();
	task3();
	getch();
	task4();
	getch();
	task5();
	getch();


	return 0;
}
