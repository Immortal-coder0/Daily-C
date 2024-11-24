#include <stdio.h>
void main(){
	int count=0,arr1[5],i,j;
	printf("Enter 5 values : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr1[i]==arr1[j]){
				count++;
				break;
			}
		}
	}
	if(count!=0){
		printf("YES");
	}
	else{
		printf("NO");
    }
}