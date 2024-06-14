class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=list(map(int,version1.split('.')))
        v2=list(map(int,version2.split('.')))
        n1,n2=len(v1),len(v2)
        for i in range(max(n1,n2)):
            if i<n1 and i<n2:
                if v1[i]>v2[i]: return 1
                if v1[i]<v2[i]: return -1
            elif i<n1 and v1[i]>0:
                return 1
            elif i<n2 and v2[i]>0:
                return -1
        return 0