#include <stdio.h>

int n;
int k;
int A[100000];


int main() {
	int i, lb, ub;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int sum = 0;
	int max = 0;
	for (i = 0; i < n; i++) {
		sum = sum + A[i];
		if (A[i] >= A[max]) {
			max = i;
		}
	}
	ub = A[max];
	printf("%d\n", sum);
	lb = sum / k;
	printf("%d\n", lb);
	int count = 0;
	int all = 0;
	while (ub - lb > 1) {
		all = 0;
		count = 0;
		int mid = (lb + ub) / 2;
		for (i = 0; i < n; i++) {
			count = (A[i] + mid - 1) / mid;
			all = all + count;
		}
		if (all <= k) {
			ub = mid;
		}
		else {
			lb = mid;
		}
	}
	printf("%d\n", ub);
	return 0;
}