#include<stdio.h>
#include<string.h>

int main(){
	char str[200];
	printf("Enter Input String :\n");
	scanf("%s",str);
	
	int i,length=strlen(str);
	printf("After Byte Stuffing : ");
	for(i=0;i<length;i++){
		if((str[i]=='E' && str[i+1]=='S' && str[i+2]=='C' )){
			printf("ESC");
		}else if(str[i]=='F' && str[i+1]=='L' && str[i+2]=='A' && str[i+3]=='G'){
			printf("ESC");
		}
		printf("%c",str[i]);
	}
	
	
	
	return 0;
}
