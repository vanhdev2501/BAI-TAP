import sys
sys.stdin = open("main.inp","r")

n,k = map(int,input().split())
a = list(map(int,input().split()))
dic = {};
res = 10e18;
dem = 0
r = 0
l = 0
while r <= n:
    if (dic.get(a[r]) == None):
        dem += 1;
        dic[a[r]] = 1;
    else:
        dic[a[r]] += 1;
    
    if (dem == k):
        res = min(res, r - l + 1 );
        dic[a[l]] -= 1;
        if (dic[a[l]] == 0):
            dem -= 1;
        l += 1;
    elif (dem < k):
        r += 1;
    
print(res);