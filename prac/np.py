def knap(weights, value, cap):
    n = len(value)
    items = [(value[i] / weights[i], weights[i], value[i]) for i in range(n) ]
    total_weight = 0
    total_value = 0
    knapsack = []
    for ratio, weight, value in items:
        if total_weight + weight <= cap:
            knapsack.append((weight, value))
            total_weight += weight
            total_value += value
    print(knapsack, total_value)

weights = {5,6,8}
value = {10,12,60}
cap = 18
knap(weights, value, cap)
    
