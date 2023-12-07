#include<stdio.h>
#include<conio.h>
#include<math.h>
int vize,final,ortalama;
char cv;
main()
{
	do
	{
	
	printf("Vize notunu giriniz..");scanf("%d",&vize);
	printf("Final notunu giriniz..");scanf("%d",&final);
    ortalama=(vize*40/100)+(final*60/100);
    if (final<40)
    printf("Harf Notu FF\n");
    
    
	else if (ortalama>0 && ortalama<=29)
	 printf("%d Harf Notunuz, FF\n",ortalama);
	 
	 
	 
	else if(ortalama>29 && ortalama <=39)
	printf("%d Harf Notunuz, FD\n",ortalama);
	
	
	
	else if(ortalama>39 && ortalama <=44)
	printf("%d Harf Notunuz, DD\n",ortalama);
	
	
	
	else if(ortalama>44 && ortalama <=54)
	printf("%d Harf Notunuz, DC\n",ortalama);
	
	
	
	else if(ortalama>54 && ortalama <=64)
	printf("%d Harf Notunuz, CC\n",ortalama);
	
	
	
	else if(ortalama>64 && ortalama <=75)
	printf("%d Harf Notunuz, CB\n",ortalama);
	
	
	
	else if(ortalama>75 && ortalama <=80)
	printf("%d Harf Notunuz, BB\n",ortalama);
	
	
	
	else if(ortalama>80 && ortalama <=87)
	printf("%d Harf Notunuz, BA\n",ortalama);
	
	
	
	else if(ortalama>87 && ortalama <=100)
	printf("%d Harf Notunuz, AA\n",ortalama);
	
	
	
	printf("Baska not hesaplayacak misiniz (e/h?)\n"); cv=getch();
    }
	while (cv=='e');
	
}