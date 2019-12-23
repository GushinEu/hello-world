#include<stdio.h>

void square(int x, char c){
for(int i = 0;i < x; i++){
	for(int z = 0; z < x; z++){
		printf("%c",c);
	}
	printf("\n");
}


}
int main(){ 
    int x;
    char c;

    scanf("%d %c", &x, &c);

    square(x,c);
    return 0;
}