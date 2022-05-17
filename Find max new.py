# n = int(input())
# a = list(map(int, input().split()))
# m = int(input())
# b = list(map(int, input().split()))
# dp = list([0] * (m+1) for i in range(n+1))
# for i in range(1, n+1):
#     for j in range(1, m+1):
#         if a[i-1] == b[j-1]:
#             dp[i][j] = dp[i-1][j-1]+1
#         else:
#             dp[i][j] = max(dp[i-1][j], dp[i][j-1])
#
# print(dp[n][m])

# n = int(input())
# a = list(map(int, input().split()))
# m = int(input())
# b = list(map(int, input().split()))
# dp = list([0] for i in range(0, n+1))
# for i in range(1, n+1):
#     for j in range(1, m+1):
#         ans = n.pop(B)
#         ans = n.insert(I)
#         ans = m.replace(F,X)
#2
# mx= o
#
# n = int(input())
# a = sorted(list(int(input().split())))
# dp = 0
# for i in range(1, a):
#     if i == 0:
#         print(dp == 0)
#     elif i =
#         print(dp[i]-1)
# n = int(input()) # Calculating the sum of cubes
# for i in range(1,n+1):
#     dp[i]=0
#     dp[i]=i
#     # dp.bysect_left(dp, as[i]= a[i])
#     x = int(input())
#     for j in (x**3):
#         x= j+1
# dp[0]= 0
# for i in range(0, dp):
#     dp[i]= min(dp(i), dp[i-x**3]+1)
#     print()
n, m = map( int,input().split())
x = [0] + list(map(int, input().split()))
dp = [0] * (m+1)
dp[0]= 1
for i in range(n + 1):
    for j in range(m, x[i]):
        if dp[j-m]==1:
            dp[j]=1

if dp[m]==1:
    print('YES')
else:
    print('NO')





