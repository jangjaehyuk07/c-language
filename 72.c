#include<stdio.h>
int main()	{
	
	char name[21];
	int age;
	char code[2];
	float secure_num;
	
	printf("이름을 입력하세요: ");
	scanf("%s", name);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("부서코드를 입력하세요: ");
	scanf("%s", code);
	printf("보안키를 입력하세요 : ");
	scanf("%f", &secure_num);
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("부서코드 : %s\n", code);
	printf("보안키 : %f\n", secure_num);

	
	return 0;
}
	