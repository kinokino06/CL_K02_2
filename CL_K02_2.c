/* �쐬��:1T4 02 �ɓ���  */
/* �ۑ�2_2 2012 11 5     */

#include <stdio.h>

void main(void){
	int a,b;
	printf("a�̒l����͂��Ă�������:");
	scanf("%d",&a);
	printf("b�̒l����͂��Ă�������:");
	scanf("%d",&b);
	if (b == 0) {
		printf("�G���[:0�Ŋ��邱�Ƃ͂ł��܂��� \n");
	} else  {
		printf("%d��%d�Ŋ��������ʂ�%d�ł� \n",a,b, a/b);
		printf("%d��%d�Ŋ������]���%d�ł� \n",a,b, a%b);
	}
}
