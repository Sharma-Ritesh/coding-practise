#include<conio.h>
int main(){
	int n, itemid;
	printf("Number of cells: ");
	scanf("%d",&n);
	printf("Item to be find or add: ");
	scanf("%d",&itemid);
	
	
	int numcell[n];
	//int temp=0;
	int i;
	
	
	for(i=0;i<n;i++){
		printf("enter %d element",i);
		scanf("%d",&numcell[i]);
	}
	
	for(i=0;i<n;i++){
		if(numcell[i]==itemid){
			printf("%d",i);
			break;
		}
		else if(numcell[i]>itemid){
			printf("%d",i);
			break;
		}
	}
	
	//printf("%d",temp);
	return 0;
}
