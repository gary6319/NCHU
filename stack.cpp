#include <iostream>
using namespace std;
#define S 10
void initS(char s[]) {
	for(int i=0; i<S; i++)
		s[i]=0;
}

bool istop(int* t) {
	if(*t==(S-1))
		return 1;
	else return 0;
}

bool isbottom(int* t) {
	if(*t==-1)
		return 1;
	else return 0;
}

int push(char s[], int* t, char item) {
        if(*t==S-1)
                return 0;
        else    {
                ++*t;
                s[*t]=item;
                return 1;
        }
}

int pop(char s[], int* t) {
	if(*t>-1) {
		s[*t]=0;
		--*t;
		return 1;
	} else return 0;
}

void showstack(char s[], int* t) {
	for(int i=0; i<S; i++)
		cout << s[i] << ", ";
	cout <<"Top="<<*t<< endl;
}

int main(int argc,char* argv[]) {
	int selection,top=-1;
	char stack[S];
	initS(stack);
	char c;

	do {
		cout << "0: istop; 1: isempty; 2: push; 3: pop; 4: print stack" << endl;
		cin >> selection;
		switch(selection) {
			case 0:
				cout << istop(&top) << ", top=" << top << endl;
				break;
			case 1:
				cout << isbottom(&top) << ", top=" << top << endl;
				break;
			case 2:
				cout << "Item=";
				cin >> c;
				push(stack,&top,c);
				break;
			case 3:
				cout << pop(stack,&top) << endl;
				break;
			case 4:
				showstack(stack,&top);
				break;
		}

	} while (selection<5);
	return 0;
}

hi git
