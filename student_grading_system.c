#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<Windows.h>
int mod1(); // function declaration

int m1test1();
int m1Emarkst1();
void m1Vmarkst1();

int m1asg();
int m1Emarks();
void m1Vmarks();

int m1test2();
int m1Emarkst2();
void m1Vmarkst2();

int mod2();
int m2test1();
int m2Emarkst1();
void m2Vmarkst1();

int m2asg();
int m2Emarks();
void m2Vmarks();

int m2test2();
int m2Emarkst2();
void m2Vmarkst2();

int mod3();
int m3test1();
int m3Emarkst1();
void m3Vmarkst1();

int m3asg();
int m3Emarks();
void m3Vmarks();
int vm();
int vm1g();
int vm2g();
int vm3g();
int ex();

typedef struct {
	char name[20];
	char cb[10];
	int m1t1mks;
	int m1asmks;
	int m1t2mks;

	int m2t1mks;
	int m2asmks;
	int m2t2mks;

	int m3t1mks;
	int m3asmks;
	int m3t2mks;

} student;
student st[10]; // structure of array

void main() {
	
	int a;
	printf("  Main menu\n");
	printf("1. Module 01\n");
	printf("2. Module 02\n");
	printf("3. Module 03\n");
	printf("4  View marks \n");
	printf("5. Exit \n");
	printf("    Choice:");
	scanf_s("%d", &a);
	system("cls");
	switch (a) {
	case 1:
		mod1();
		break;
	case 2:
		mod2();
		break;
	case 3:
		mod3();
		break;
	case 4:
		vm();
		break;
	case 5:
		ex();
		break;
	
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back1;
	back1:main();
	}



}


int mod1() { //module 1 window
	int a1;
	printf("  Module 01\n");
	printf("1. test 1\n");
	printf("2. Assignment\n");
	printf("3. test 2\n");
	printf("4.  back to menu \n");

	printf("    Choice:");
	scanf_s("%d", &a1);
	system("cls");
	switch (a1)
	{
	case 1:
		m1test1();



		break;
	case 2:

		m1asg();


		break;
	case 3:


		m1test2();



		break;
	case 4:

		goto back1;
	back1:main();


		break;
	default:
		MessageBox(NULL, "try to input numbers between 1-4", "invalid input", MB_OK);
		goto back2;
	back2:mod1();
	
	}









	return 0;
}


int m1test1() {

	printf("  Test 01\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m1Emarkst1();

		break;
	case 2:
		m1Vmarkst1();
		break;
	case 3:
		goto back1;
	back1:mod1();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	    back2:m1test1();

	}



	return 0;
}

int m1Emarkst1() {



	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m1t1mks = a3;


		system("cls");
	}





	goto back1;
back1:m1test1();

	return 0;

}
void m1Vmarkst1() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m1t1mks;
		
		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1,st[j].cb, st[j].name, com);
		
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}


	system("pause");
	system("cls");
	goto back1;
back1:m1test1();

}


int m1asg() {

	printf("  Assignment\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m1Emarks();

		break;
	case 2:
		m1Vmarks();
		break;
	case 3:
		goto back1;
	back1:mod1();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m1asg();

	}



	return 0;
}

int m1Emarks() {



	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m1asmks = a3;
		system("cls");
	}



	goto back1;
back1:m1asg();

	return 0;

}
void m1Vmarks() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m1asmks;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m1asg();
}


int m1test2() {

	printf("  Assignment\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m1Emarkst2();

		break;
	case 2:
		m1Vmarkst2();
		break;
	case 3:
		goto back1;
	back1:mod1();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m1test2();
	}


	return 0;
}

int m1Emarkst2() {


	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
	    strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m1t2mks = a3;
		system("cls");

	}




	goto back1;
back1:m1test2();

	return 0;

}
void m1Vmarkst2() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m1t2mks;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m1test2();
}




int mod2() {

	int a1;
	printf("  Module 02\n");
	printf("1. test 1\n");
	printf("2. Assignment\n");
	printf("3. test 2\n");
	printf("4.  back to menu \n");

	printf("    Choice:");
	scanf_s("%d", &a1);
	system("cls");
	switch (a1)
	{
	case 1:
		m2test1();



		break;
	case 2:

		m2asg();


		break;
	case 3:


		m2test2();



		break;
	case 4:

		goto back1;
	back1:main();


		break;
	
	default:MessageBox(NULL, "try to input numbers between 1-4", "invalid input", MB_OK);
		goto back2;
	back2:mod2();
	}











	return 0;
}


int m2test1() {

	printf("  Test 01\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m2Emarkst1();

		break;
	case 2:
		m2Vmarkst1();
		break;
	case 3:
		goto back1;
	back1:mod2();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m2test1();
	}



	return 0;
}

int m2Emarkst1() {



	for (int i = 0; i < 10; i++) {
		
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m2t1mks = a3;

		system("cls");
	}





	goto back1;
back1:m2test1();

	return 0;

}
void m2Vmarkst1() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m2t1mks;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m2test1();
}


int m2asg() {

	printf("  Assignment\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m2Emarks();

		break;
	case 2:
		m2Vmarks();
		break;
	case 3:
		goto back1;
	back1:mod2();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m2asg();
	}



	return 0;
}

int m2Emarks() {



	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
	
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m2asmks = a3;
		system("cls");
	}



	goto back1;
back1:m2asg();

	return 0;

}
void m2Vmarks() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m2asmks;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m2asg();
}


int m2test2() {

	printf("  Assignment\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m1Emarkst2();

		break;
	case 2:
		m1Vmarkst2();
		break;
	case 3:
		goto back1;
	back1:mod1();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m2test2();
	}


	return 0;
}

int m2Emarkst2() {


	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m2t2mks = a3;
		system("cls");

	}




	goto back1;
back1:m2test2();

	return 0;

}
void m2Vmarkst2() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m2t2mks;
		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}


	system("pause");
	system("cls");
	goto back1;
back1:m2test2();
}




int mod3() {

	int a1;
	printf("  Module 03\n");
	printf("1. test 1\n");
	printf("2. Assignment\n");
	printf("3.  back to menu \n");

	printf("    Choice:");
	scanf_s("%d", &a1);
	system("cls");
	switch (a1)
	{
	case 1:
		m3test1();



		break;
	case 2:

		m3asg();


		break;

	case 3:

		goto back1;
	back1:main();


		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:mod3();
	}











	return 0;
}


int m3test1() {

	printf("  Test 01\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m3Emarkst1();

		break;
	case 2:
		m3Vmarkst1();
		break;
	case 3:
		goto back1;
	back1:mod3();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m3test1();

	}



	return 0;
}

int m3Emarkst1() {



	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m3t1mks = a3;


		system("cls");

	}





	goto back1;
back1:m3test1();

	return 0;

}
void m3Vmarkst1() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m3t1mks;
		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);

		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m3test1();
}

int m3asg() {

	printf("  Assignment\n");

	printf("1. Enter Marks\n");
	printf("2. View Marks\n");
	printf("3. Back to module menu\n");


	printf("  Choice:");
	int a2;
	scanf_s(" %d", &a2);
	system("cls");
	switch (a2) {
	case 1:

		m3Emarks();

		break;
	case 2:
		m3Vmarks();
		break;
	case 3:
		goto back1;
	back1:mod3();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:m3asg();
	}



	return 0;
}

int m3Emarks() {



	for (int i = 0; i < 10; i++) {
		int a3;
		char cb[10];
		char name[20];

		printf("Enter the CB Number for student no %d :", i + 1);

		scanf("%s", cb);
		
		strcpy(st[i].cb, cb);
		printf("Enter the name for student no  %d:", i + 1);

		scanf("%s", name);
		strcpy(st[i].name, name);
		printf("Enter the marks for student no %d :", i + 1);

		scanf_s(" %d", &a3);

		st[i].m3asmks = a3;
		system("cls");
	}



	goto back1;
back1:m3asg();

	return 0;

}
void m3Vmarks() {

	int com;
	for (int j = 0; j < 10; j++) {
		com = st[j].m3asmks;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}




	}

	system("pause");
	system("cls");
	goto back1;
back1:m3asg();

}



int vm() {


	printf("1. View module 01 overall grade\n");
    printf("2. View module 02 overall grade\n");
	printf("3. View module 03 overall grade\n");
	printf("4. Back to main menu\n");


	printf("  Choice:");
	int vm1;
	scanf_s(" %d", &vm1);
	system("cls");
	switch (vm1) {
	case 1:
		vm1g();
		break;
	case 2:
		vm2g();
		break;
	case 3:
		vm3g();

		break;
	case 4:goto back5;
	back5:main();
		break;
	default:MessageBox(NULL, "try to input numbers between 1-3", "invalid input", MB_OK);
		goto back2;
	back2:vm();
	}







	return 0;
}



int vm1g() {

	printf(" --------Overall Grade for module 01----------\n");

	int com;
	for (int i = 0; i < 10; i++) {
		com = st[i].m1t1mks / 4 + st[i].m1t2mks / 4 + st[i].m1asmks / 2;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", i + 1, st[i].cb, st[i].name, com);
		if (com >= 0 && com < 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com&& com <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com &&com < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com &&com < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com &&com <= 100) {
			printf(" Grade:Distrinction\n");
		}

	}
	system("pause");
	system("cls");
	goto back2;
back2:vm();
	return 0;
	
}

int vm2g() {
	printf("                 --------overall Grade for module 02----------\n");


	int com1;
	for (int j = 0; j < 10; j++) {
		com1 = st[j].m2t1mks / 4 + st[j].m2t2mks / 4 + st[j].m2asmks / 2;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", j + 1, st[j].cb, st[j].name, com1);
		if (com1 >= 0 && com1< 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com1&& com1 <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com1 &&com1 < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com1 &&com1 < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com1 &&com1 <= 100) {
			printf(" Grade:Distrinction\n");
		}
	}
	system("pause");
	system("cls");
	goto back2;
back2:vm();
	return 0;
}

int vm3g() {

	printf("                      --------overall Grade for module 03----------\n");

	int com2;
	for (int x = 0; x < 10; x++) {
		com2 = st[x].m3t1mks / 2 + st[x].m2asmks / 2;

		printf("student no %d \n CB_NO:%s\n name:%s\n mark:%d \n", x + 1, st[x].cb, st[x].name, com2);
		if (com2 >= 0 && com2< 40) {
			printf(" Grade:fail\n");
		}
		else if (40 >= com2&& com2 <55) {
			printf(" Grade:pass\n");
		}
		else if (55 >= com2 &&com2 < 70) {
			printf(" Grade:credit\n");
		}
		else if (70 >= com2 &&com2 < 85) {
			printf(" Grade:merit\n");
		}
		else if (85 >= com2 &&com2 <= 100) {
			printf(" Grade:Distrinction\n");
		}
	}
	system("pause");
	system("cls");
	goto back2;
back2:vm();
	return 0;
}
int ex() {


	exit(0);
	return 0;
}

