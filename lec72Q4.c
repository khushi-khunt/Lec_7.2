#include<stdio.h>
/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/
void main(){
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
		 (j%2==1)?
		 printf("1"):printf("0");  
		}
		printf("\n");
	}
}
