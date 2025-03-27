def calculate_budget(n, budget):
    tarek_takes = sum(budget) // 10  # mot koto taka Tarek nibe
    remaining_bgt = sum(budget) - tarek_takes  # mot obositto baki thakbe
    adj_bgt = [b - (b // 10) for b in budget]  # 10% cuter por
    
    print(tarek_takes)
    print(remaining_bgt)
    print(adj_bgt)

n = int(input())
budget = list(map(int, input().split()))

calculate_budget(n, budget)
