#include <stdio.h>

void message();	//�Լ� ����
void cacao();	//�Լ� ����

int main(void)
{
	puts("���� �Լ� �����Դϴ�.");
	message(); //�Լ� message ȣ��
	cacao(); //�Լ� cacao ȣ��
	puts("���� �Լ� �����Դϴ�.");

	return 0;
}

//�Լ� message ����
void message()
{
	puts("\t�޽����Դϴ�.");
}