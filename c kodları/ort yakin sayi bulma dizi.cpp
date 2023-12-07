#include<stdio.h>
#include<math.h>
int a[11],i,t;
float ey,ort,tp;
main()
{
	tp=0;
	for(i=1;i<=10;i++){
	printf("%d.sayiyi giriniz..",i);scanf("%d",&a[i]);
}
	ort=tp/10;printf("ortalama=%2.1f\n",ort);
	ey=abs(ort-a[i]);
	for(i=2;i<=10;i++)
	if(ey>abs(ort-a[i])) ey=abs(ort-a[i]);
	
	
	for(i=1;i<=10;i++)
	if(ey==abs(ort-a[i])) printf("%d. sayi en yakin\n",a[i]);
	
}