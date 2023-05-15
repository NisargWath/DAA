def solve_n_queens(n):
    def backtrack(queens, xy_dif, xy_sum):
        p = len(queens)
        if p == n:
            result.append(queens)
            return
        for q in range(n):
            if q not in queens and p - q not in xy_dif and p + q not in xy_sum:
                backtrack(queens + [q], xy_dif + [p - q], xy_sum + [p + q])

    result = []
    backtrack([], [], [])
    return [[' . ' * i + 'Q' + ' . ' * (n - i - 1) for i in sol , "\n"]  for sol in result]

print(solve_n_queens(4))