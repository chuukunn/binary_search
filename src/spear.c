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
	ub = 1000000000;
	lb = 0;
	int count = 0;
	int all = 0;
	while (ub - lb > 1) {
		all = 0;
		count = 0;
		int mid = (lb + ub) / 2;
		for (i = 0; i < n; i++) {
			count = A[i] / mid;
			all = all + count;
		}
		if (all < k) {
			ub = mid;
		}
		else {
			lb = mid;
		}

	}
	printf("%d\n", lb);
	return 0;
}
