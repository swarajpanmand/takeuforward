class Solution:
    def findContentChildren(self, greed: List[int], cookieSize: List[int]) -> int:
        n = len(greed)
        m = len(cookieSize)
        greed.sort()
        cookieSize.sort()

        child = 0
        cookie = 0

        while child < n and cookie < m:
            if greed[child] <= cookieSize[cookie]:
                child += 1
            cookie += 1
        
        return child

