#include <stdio.h>

main()

{
	int i,k,j,l;
	printf("dizi uzunlu?unu gir. ");
	scanf("%d",&l);
	printf("\nkaydirma miktarini gir. ");
	scanf("%d",&k);
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int*ptr;
	ptr=&a;
	for(i=0;i<l;i++)
	{
		if(i<k)
		{
		printf("%d,",a[i]);
		*ptr=i;
		for(j=0;j<k;j++)
		{
		ptr[j]=0;
		}
			
		}
		else
		{
			ptr[i]=i-k+1;
			printf("%d,",a[i]);
		}
	
	}
	
}
