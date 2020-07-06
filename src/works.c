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
	while (ub - lb > 1) {
		int timepoint = 0;
		int mid = (lb + ub) / 2;
		for (i = 0; i < k; i++) {
			count = 0;
			while (count <= mid && A[timepoint] != 0) {

				count = count + A[timepoint];
				if (count <= mid) {
					timepoint = timepoint + 1;
				}

			}
		}

		if (timepoint >= n) {
			ub = mid;
		}
		else {
			lb = mid;
		}

	}
	printf("%d\n", ub);
	return 0;
}