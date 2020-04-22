#include <iostream>
using namespace std;
#define S 100
void initS(char s[]) {
	for(int i=0; i<S; i++)
		s[i]=0;
}

bool isFull(int* t) {
	if(*t==(S-1))
		return 1;
	else return 0;
}

bool isEmpty(int* t) {
	if(*t==-1)
		return 1;
	else return 0;
}

int push(char s[], int* t, char item) {
	if(*t==S-1)
		return 0;
	else	{
		++*t;
		s[*t]=item;
		return 1;
	}
}

char pop(char s[], int* t) {
	char item;
	if(*t==-1)
		return 0;
	else {
		item=s[*t];
		s[*t]=0;
		--*t;
		return item;
	}
}

void showstack(char s[], int* t) {
	for(int i=0; i<S; i++)
		cout << s[i] << ", ";
	cout <<"Top="<<*t<< endl;
}

