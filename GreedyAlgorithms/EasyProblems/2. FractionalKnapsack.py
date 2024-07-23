class Item:
    def __init__(self,val,w):
        self.value = val
        self.weight = w
        
class Solution:    
    #Function to get the maximum total value in the knapsack.
    def fractionalknapsack(self, W,arr,n):
        
        # code here
        arr.sort(key= lambda x: x.value/x.weight, reverse=True)
        currWeight = 0
        finalValue = 0.0
        
        for i in range(n):
            if currWeight + arr[i].weight <= w:
                currWeight+= arr[i].weight
                finalValue+= arr[i].value
            else:
                remain = W - currWeight
                finalValue+= arr[i].value/arr[i].weight*remain
                break
        return finalValue

