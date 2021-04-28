"""LIS
D[i] = max(D[j]) + 1
where j < i, A[j] < A[i]
"""

for i in range(n):
		d[i] = 1
		for j in range(k):
				if (a[j] < a[i]) and d[i] < d[j] + 1:
						d[i] = d[j] + 1
