#include<stdio.h>
#include"output.h"



void MaxMinSort(int *arr, int fst, int lst) {//배열의 처음과 끝만큼 돌릴 값을 받아옴 
	if (fst < lst) {
		output_min(fst, lst);//시작주소,끝주소 출력
		int min = arr[fst], max = arr[fst]; //min 과 max를 미리 초기화해줌(적어도 배열안의 수로 초기화해줘야 정렬됨)

		for (int i = fst; i < lst; i++) //최소,최대값 탐색
		{
			//min = (arr[i] < min) ? arr[i] : min;//if문으로 해본다
			//max = (arr[i] > max) ? arr[i] : max;
			if (min > arr[i])
				min = arr[i];
			if (max < arr[i])
				max = arr[i];
		}
		output_var(min, max);//최소,최대값 출력

		for (int i = fst; i < lst; i++) {
			if (min == arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[fst];
				arr[fst] = tmp;
			}
		}//배열에 min값이 어디있는지 탐색한 후 있으면 탐색범위의 맨처음값과 swap
		for (int i = fst; i < lst; i++) {
			if (max == arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[lst - 1];
				arr[lst - 1] = tmp;
			}//배열에 max값이 어디있는지 탐색한 후 있으면 탐색범위의 맨 마지막값과 swap
		}
		array
		MaxMinSort(arr, fst + 1, lst-1);
	}
}

void main() {
	//int first = 0, last = 10; //포문에 쓰일 탐색할 시작배열과 마지막 배열 //change : 어차피 배열 숫자의 수는 바뀔 수 있어서 sizeof로 지정해야 하니 주석처리
	int arr[arr_n] = { 7,1,3,4,9,5,10,6,2,8 };
	printf("=================정렬 전 배열값 출력================\n");
	array
	//change : for문으로 아래 함수를 반복시키지 않을 거임
	MaxMinSort(arr, 0, arr_n);//change : 그냥 숫자로 넣을 거

	printf("=================정렬 후 배열값 출력================\n");
	array
}