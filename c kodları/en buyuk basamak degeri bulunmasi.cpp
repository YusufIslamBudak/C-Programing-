#include<stdio.h>
#include<conio.h>
int a,eb,c;
char cv;
main()
{
	do{
	
	printf("sayiyi giriniz..");scanf("%d",&a);
	eb=0;
	while(a!=0){
		c=a-int(a/10)*10;
		if(eb<c) eb=c;
		a=int(a/10);
	}
	
	printf("en buyuk basamak degeri %d\n",eb);
	printf("tekrar islem yapmak istiyor musunuz(e/h?)\n");cv=getch();
}
	while(cv=='e');

}
