#include<stdio.h>
#include"output.h"



void MaxMinSort(int *arr, int fst, int lst) {//�迭�� ó���� ����ŭ ���� ���� �޾ƿ� 
	if (fst < lst) {
		output_min(fst, lst);//�����ּ�,���ּ� ���
		int min = arr[fst], max = arr[fst]; //min �� max�� �̸� �ʱ�ȭ����(��� �迭���� ���� �ʱ�ȭ����� ���ĵ�)

		for (int i = fst; i < lst; i++) //�ּ�,�ִ밪 Ž��
		{
			//min = (arr[i] < min) ? arr[i] : min;//if������ �غ���
			//max = (arr[i] > max) ? arr[i] : max;
			if (min > arr[i])
				min = arr[i];
			if (max < arr[i])
				max = arr[i];
		}
		output_var(min, max);//�ּ�,�ִ밪 ���

		for (int i = fst; i < lst; i++) {
			if (min == arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[fst];
				arr[fst] = tmp;
			}
		}//�迭�� min���� ����ִ��� Ž���� �� ������ Ž�������� ��ó������ swap
		for (int i = fst; i < lst; i++) {
			if (max == arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[lst - 1];
				arr[lst - 1] = tmp;
			}//�迭�� max���� ����ִ��� Ž���� �� ������ Ž�������� �� ���������� swap
		}
		array
		MaxMinSort(arr, fst + 1, lst-1);
	}
}

void main() {
	//int first = 0, last = 10; //������ ���� Ž���� ���۹迭�� ������ �迭 //change : ������ �迭 ������ ���� �ٲ� �� �־ sizeof�� �����ؾ� �ϴ� �ּ�ó��
	int arr[arr_n] = { 7,1,3,4,9,5,10,6,2,8 };
	printf("=================���� �� �迭�� ���================\n");
	array
	//change : for������ �Ʒ� �Լ��� �ݺ���Ű�� ���� ����
	MaxMinSort(arr, 0, arr_n);//change : �׳� ���ڷ� ���� ��

	printf("=================���� �� �迭�� ���================\n");
	array
}