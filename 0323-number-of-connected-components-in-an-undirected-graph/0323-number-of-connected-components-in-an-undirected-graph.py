class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        parents = [i for i in range(n)]
        def parent(i: int):
            while (i != parents[i]):
                i = parents[i]
            return i

        groups = n
        for e in edges:
            p1 = parent(e[0])
            p2 = parent(e[1])
            if (p1 != p2):
                parents[p1] = p2
                groups -= 1

        return groups