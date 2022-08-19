#include <unistd.h>
#include <linux/black.h>
#include <stdio.h>
void blackdeneme(){
	int i =0;
	while(1){
		i=(i+1)%1000;
	}
}
int main(){
	printf("printing black %d",black(1));
	blackdeneme();
	return 0;
}
