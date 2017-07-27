/*#include<stdio.h>
void cocktail_sort(int *arr, int s, int e) {
	int start = s, end = e; int cnt_min = s, cnt_max = s;
	for (int i = start; i <= end; i++) { if (arr[cnt_min] > arr[i]) { cnt_min = i; } if (arr[cnt_max] < arr[i]) { cnt_max = i; } }
	int tmp;
	tmp = arr[start]; arr[start] = arr[cnt_min]; arr[cnt_min] = tmp;
	tmp = arr[end]; arr[end] = arr[cnt_max]; arr[cnt_max] = tmp;
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]); puts("");
	if (end - start >= 1) cocktail_sort(arr, s + 1, e - 1);
}
void main() {
	int arr[] = { 3, 9, 4, 5, 10, 2, 9, 8, 6, 1 };
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]); puts("");
	cocktail_sort(arr, 0, 9);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]); puts("");
}
*/