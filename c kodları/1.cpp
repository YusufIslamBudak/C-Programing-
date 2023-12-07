#include<stdio.h>
int a,b,c,eb;
main()
{
	printf("1. sayiyi gir..");scanf("%d",&a);
	printf("2. sayiyi gir..");scanf("%d",&b);
	printf("3. sayiyi gir..");scanf("%d",&c);
	eb=a;
	if(eb<b) eb=b;
	if(eb<c) eb=c;
	printf("en buyuk sayi=%d\n",eb);
}

