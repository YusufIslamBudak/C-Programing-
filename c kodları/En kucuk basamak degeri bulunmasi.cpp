#include<stdio.h>
int a,c,ek;
main()
{
	printf("sayiyi gir..");scanf("%d",&a);
	ek=9;
	while(a!=0){
		c=a-int(a/10)*10;
		if(ek>c) ek=c;
		a=int(a/10);
		}
	printf("en kucuk hane degeri %d\n",ek);
}
