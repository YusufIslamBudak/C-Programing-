#include<stdio.h>
int a,b,k;
main()
{
	printf("bolunecek sayiyi gir..");scanf("%d",&a);
	printf("bolen sayiyi giriniz");scanf("%d",&k);
    b=int(a/k)*k;
	if(a==b) printf("%d sayisi %d sayisina tam bolunur\n",a,k);else printf("%d sayisi %d sayisina tam bolunmez\n",a,k);
	
}
