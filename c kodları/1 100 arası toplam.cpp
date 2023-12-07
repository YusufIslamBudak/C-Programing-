#include<stdio.h>
int a,eb,c;
main()
{
	printf("sayiyi giriniz..");scanf("%d",a);
	//eb=0;
	while(a!=0){
		c=a-int(a/10)*10;
		if(eb<c) eb=c;
		a=int(a/10);
	}
	printf("en buyuk basamak degeri %d",eb);

}
