#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top, bottom, height;
	printf("nhap top la: ");
	scanf("%d", &top);
	
	printf("Nhap bottom la: ");
	scanf("%d", &bottom);
	
	printf("Nhap height la: ");
	scanf("%d", &height);
	
	int s = (top+bottom) /2 * height;
	printf("s = %d", s);
}




