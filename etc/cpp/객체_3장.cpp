#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
void p3();
double calc_Aug(double arr[], int count);
double calc_Dev(double arr[], double ave, int count);
void p5();
int* sum_Row(int arr[3][5]);
int* sum_Col(int arr[3][5]);
void p9();
int* copy(int a[]);
void p11();
void get_stat(double A[], double* p_avg, double* p_max, double* p_sum, int n);
int main(void) {
	int choice;
	while (1) {
		printf("실행할 문제의 번호를 입력해주세요. 그만하려면 0을 입력해주세요.\n");
		printf("3번\n5번\n9번\n11번\n");
		scanf("%d", &choice);
		if (choice == 0) break;
		else {
			if (choice == 3) p3();
			else if (choice == 5) p5();
			else if (choice == 9) p9();
			else if (choice == 11) p11();
		}
	}
	return 0;
}
void p3() {
	double arr[10];
	int count;
	double ave;
	printf("갯수를 입력하세요 : ");
	scanf("%d", &count);
	printf("갯수만큼의 데이터를 입력하세요.\n");
	for (int i = 0; i < count; i++) {
		scanf("%lf", &arr[i]);
	}
	ave = calc_Aug(arr, count);
	printf("%lf\n", ave);
	printf("%lf\n", calc_Dev(arr, ave, count));
}
double calc_Aug(double arr[], int count) {
	double sum = 0;
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	return sum /= (double)count;
}
double calc_Dev(double arr[], double ave, int count) {
	double standardDeviation = 0.0;
	for (int i = 0; i < count; i++) {
		standardDeviation += (arr[i] - ave) * (arr[i] - ave);
	}
	standardDeviation /= (double)count;
	return sqrt(standardDeviation);
}
void p5() {
	int arr[3][5];
	printf("배열의 데이터를 입력해주세요.\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int(* row), (*col);
	row = sum_Row(arr);
	col = sum_Col(arr);
	printf("각 행의 합계 : ");
	printf("%d, %d, %d\n", row[0], row[1], row[2]);
	printf("각 열의 합계 : ");
	printf("%d, %d, %d, %d, %d\n", col[0], col[1], col[2], col[3], col[4]);
}
int* sum_Row(int arr[3][5]) {
	static int row[3];
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		row[i] = sum;
	}
	return row;
}
int* sum_Col(int arr[3][5]) {
	static int col[5];
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		col[i] = sum;
	}
	return col;
}
void p9() {
	int a[5] = { 1,2,3,4,5 };
	int(*p9Copy);
	p9Copy = copy(a);
	printf("%d, %d, %d, %d, %d\n", p9Copy[0], p9Copy[1], p9Copy[2], p9Copy[3], p9Copy[4]);
}
int* copy(int a[]) {
	static int b[5];
	for (int i = 0; i < 5; i++) {
		b[i] = a[i];
	}
	return b;
}
void p11() {
	double a[5] = { 3.47, 8.21, 1.59, 6.93, 2.45 };
	double avg = 0, max = 0, sum = 0;
	get_stat(a, &avg, &max, &sum, 5);
	printf("평균 : %lf, 최댓값 : %lf, 전체의 합 : %lf\n", avg, max, sum);
}
void get_stat(double a[], double* p_avg, double* p_max, double* p_sum, int n) {
	double max = a[0];
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	*p_sum = sum;
	*p_max = max;
	*p_avg = sum / n;
}