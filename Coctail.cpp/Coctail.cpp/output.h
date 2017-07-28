#pragma once
#include <stdio.h>
#define arr_n 10
#define array output_array(arr, arr_n);//배열을 처음부터 arr_n개까지 출력
void output_array(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}
//배열을 입력받고 출력하는 함수

void output_var(int a, int b)
{
	printf("최소값과 최대값 : %d %d\n", a, b);
}
//변수 2개를 출력, 최소,최대값 출력하기 귀찮음

void output_min(int a, int b) {
	printf("시작 번호와 끝 번호 : %d %d\n", a, b);
}
//시작주소와 끝 주소 출력