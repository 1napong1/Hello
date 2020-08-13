#include<stdio.h>
int main() {
	char nname[15];
	int age;
	printf("Your Nickname : ");
	scanf_s("%s", &nname);
	printf("Your Age : ");
	scanf_s("%d", &age);
	if (age <= 0) {
		printf("Your age is wrong");
	}
	else if (age > 18) {
		printf("Hello Kub Bro %s", nname);
	}
	else if (age == 18) {
		printf("Hello Friend %s", nname);
	}
	else {
		printf("Sup Nong %s", nname);
	}
	return 0;
}
