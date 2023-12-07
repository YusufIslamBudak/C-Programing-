#include<stdio.h>
int a,b;
main()
{
	printf("sayiyi gir..");scanf("%d",&a);
	b=int(a/2)*2;
	if(a==b) printf("%d sayisi cift sayi\n",a);
	    else printf("%d sayisi tek sayi\n",a);
}

