def knapsack_greedy(values, weights, capacity):
    n = len(values)
    items = [(values[i] / weights[i], weights[i], values[i]) for i in range(n)]

    items.sort(reverse=True)

    total_value = 0
    total_weight = 0
    knapsack = []

    for ratio, weight, value in items:
        if total_weight + weight <= capacity:
            knapsack.append((weight, value))
            total_value += value
            total_weight += weight

    return knapsack, total_value

values = [10,20,30]
weights = [12,4,5];
capacity = 20;
print(knapsack_greedy(values, weights, capacity))
