#include "linkedlist.h"

int main() {
	List L;
	infotype X;
	int Index;

	printf("Kondisi awal sebelum Antrian terisi :");
	printf("\n");
	
	CreateList(&L);
	PrintInfo(L);
	
	printf("\n");
	
	printf("Conditions after the Queue is filled and Before the contents of the Queue are taken :");
	printf("\n");
	
	for(Index = 1; Index <= 5; Index++) {
		InsVLast(&L, Index * 10);
	}
	
	PrintInfo(L);
	
	printf("\n\n");
	
	printf("After the contents of the Queue are retrieved :");
	printf("\n");
	
	DelVFirst(&L, &X);
	PrintInfo(L);
	
	return 0;
}
