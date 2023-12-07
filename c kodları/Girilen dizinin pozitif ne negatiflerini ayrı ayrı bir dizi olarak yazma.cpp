#include<stdio.h>
int a[11],b[11],c[11],p,n,i;
main()
{
	p=0;n=0;
	for(i=1;i<=10;i++)
	{
		printf("%d.sayiyi giriniz..",i);scanf("%d",&a[i]);
		if(a[i]<0){
		n++;
		c[n]=a[i];
		} 
		if(a[i]>0){
			p++;
			b[p]=a[i];
		}
	}
	if(n>0 ){
	for(i=1;i<=n;i++) printf("%d    ",c[i]); printf("\n");}
	else printf("negatif sayi yok\n");
	if(p>0){
	for(i=1;i<=p;i++) printf("%d     ",b[i]);}
	else printf("pozitif sayi yok");
}
