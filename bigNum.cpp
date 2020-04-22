#include <iostream>
#include <string.h>
#include "C:\Users\vgh00\Downloads\stack_v2.h"
using namespace std;

int main(int argc,char* argv[]) {
	char num1[99], num2[99],s1[100],s2[100],s3[100];
	int t1=-1, t2=-1, t3=-1,sum,c=0, a=0, b=0;
	initS(s1);
	initS(s2);
	initS(s3);

	cout << "Input num1=";
	cin.getline(num1,99);
	cout << "Input num2=";
	cin.getline(num2,99);
	for(int i=0; i < strlen(num1); i++)
		push(s1,&t1,num1[i]);
	for(int i=0; i < strlen(num2); i++)
		push(s2,&t2,num2[i]);
	while(t1!=-1 or t2!=-1) {
		if(t1==-1)
			a=0;
		else
			a=(int)pop(s1,&t1)-48;
		if(t2==-1)
			b=0;
		else
			b=(int)pop(s2,&t2)-48;
		sum=a+b+c;
		if(sum/10 ==0) { //檢查有無進位 
			c=0;
			push(s3,&t3,(sum%10)+48);
		} else {
			c=1;
			push(s3,&t3,(sum%10)+48);
		}

	}
	while(t3!=-1)
		cout << pop(s3,&t3);
	return 0;
}

