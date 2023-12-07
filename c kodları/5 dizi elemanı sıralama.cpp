//5 elemanlı bir dizinin elemanlarının büyükten küçüğe sıralanması
#include<stdio.h>
int a[20],k,i,b,j;
main(){
	for(i=1;i<=5;i++){
		printf("%d.elemani giriniz..",i);scanf("%d",&a[i]);	
	}
	
for(k=1;k<=4;k++){
		
		for(i=1;i<=4;i++){
		
		if(a[i]>a[i+1]) { b=a[i]; a[i]=a[i+1]; a[i+1]=b; }
	}
	
	}
	for(i=1;i<=5;i++)
	printf("%d    ",a[i]);
}