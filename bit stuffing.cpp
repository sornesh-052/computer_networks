#include<stdio.h>
int main(){
	char data[20],stuffedData[30];
	int i,j,count;
	printf("enter the data");
	scanf("%s",data);
	i=0;
	j=0;
	count=0;
	while(data[i]!='\0'){
		stuffedData[j]=data[i];
		if(data[i]=='1'){
			count++;
		}
		else{
			count=0;
		}
		if(count==5){
			stuffedData[++j]='0';
			count=0;
		}
		i++;
		j++;
		
	}
	stuffedData[j]='\0';
	printf("orignal data %s",data);
	printf("\nafter the bit stuffing:%s",stuffedData);
	return 0;
	}
