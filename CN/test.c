#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20]="";
	printf("Enter");
	gets(a);
	int i=0,j=0;//ABESCAB
	while(a[i]){
		if(a[i]=='E' && a[i+1]=='S' && a[i+2]=='C'){
			printf("!");
			b[j++]='E';
			b[j++]='S';
			b[j++]='C';

		}
		else if(a[i]=='F' && a[i+1]=='L' && a[i+2]=='A' && a[i+3]=='G'){
			printf("!!");
			b[j++]='E';
			b[j++]='S';
			b[j++]='C';
		}
		else{
			b[j]=a[i];
			j++;
		}
		i++;
	}
	b[j]='\0';
	printf("%s",b);
	return 0;
}
