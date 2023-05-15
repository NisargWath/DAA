def matrix_chain_order(p):
    n = len(p) - 1
    m = [[0] * n for _ in range(n)]
    for length in range(2, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1
            m[i][j] = float('inf')
            for k in range(i, j):
                q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1]
                if q < m[i][j]:
                    m[i][j] = q
    return m[0][n-1]

p = [10, 100, 5, 50, 1] # matrix dimensions
min_multiplications = matrix_chain_order(p)
print(f"Minimum scalar multiplications required: {min_multiplications}")
