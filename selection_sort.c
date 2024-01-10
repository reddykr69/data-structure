#include<stdio.h>
void select(int arr[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
	int min=i;
	for(j=i+1;j<n;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
}
}
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n"); 
    printArray(arr, n);

   select(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
