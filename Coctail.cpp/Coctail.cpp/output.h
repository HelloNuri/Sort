#pragma once
#include <stdio.h>
#define arr_n 10
#define array output_array(arr, arr_n);//�迭�� ó������ arr_n������ ���
void output_array(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}
//�迭�� �Է¹ް� ����ϴ� �Լ�

void output_var(int a, int b)
{
	printf("�ּҰ��� �ִ밪 : %d %d\n", a, b);
}
//���� 2���� ���, �ּ�,�ִ밪 ����ϱ� ������

void output_min(int a, int b) {
	printf("���� ��ȣ�� �� ��ȣ : %d %d\n", a, b);
}
//�����ּҿ� �� �ּ� ���