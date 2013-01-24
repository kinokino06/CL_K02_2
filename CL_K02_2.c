/* 作成者:1T4 02 伊藤純  */
/* 課題2_2 2012 11 5     */

#include <stdio.h>

void main(void){
	int a,b;
	printf("aの値を入力してください:");
	scanf("%d",&a);
	printf("bの値を入力してください:");
	scanf("%d",&b);
	if (b == 0) {
		printf("エラー:0で割ることはできません \n");
	} else  {
		printf("%dを%dで割った結果は%dです \n",a,b, a/b);
		printf("%dを%dで割った余りは%dです \n",a,b, a%b);
	}
}
