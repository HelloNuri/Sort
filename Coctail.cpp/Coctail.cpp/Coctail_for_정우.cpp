#include<stdio.h>
#include"output.h"

void cocktail_sort(int *arr, int s, int e) {
	int min = arr[s], max = arr[s];
	output_min(s, e);

	for (int i = s; i <= e; i++) { 
		if (min > arr[i]) 
			min = arr[i]; 
		if (max < arr[i])  
			max = arr[i];
	}
	output_var(min, max);

	for (int i = s; i <= e; i++) {
		if (min == arr[i]) {
			int tmp = arr[s];
			arr[s] = arr[i];
			arr[i] = tmp;
			break;
		}
	}
	for (int i = s; i <= e; i++) {
		if (max == arr[i]) {
			int tmp = arr[e];
			arr[e] = arr[i];
			arr[i] = tmp;
			break;
		}
	}
	array

	if (e - s > 1) 
		cocktail_sort(arr, s + 1, e - 1);
}
void main() {
	int arr[] = { 3, 9, 4, 5, 10, 2, 9, 8, 6, 1 };
	printf("=================정렬 전 배열값 출력================\n");
	array//배열을 출력
	cocktail_sort(arr, 0, 9);
	printf("=================정렬 후 배열값 출력================\n");
	array//배열을 출력
}
