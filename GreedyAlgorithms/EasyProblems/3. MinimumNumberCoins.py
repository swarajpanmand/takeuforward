from typing import List

def MinimumCoins(n: int) -> List[int]:
    # write your code here
    ans = []
    coins = [1, 2, 5, 10, 20, 50, 100, 500, 1000]
    lent = 9
    for i in range(lent-1, -1 , -1):
        while n>= coins[i]:
            n-=coins[i]
            ans.append(coins[i])
    return ans