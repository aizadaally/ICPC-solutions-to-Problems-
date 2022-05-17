# Turtle ##BBB

# n, m = map(int(input().split()))
# for i in rangge(2, n):
#     a[i] = [0]*2 +list(map(int, input().split()))
# dp = [(([0]*m)+[0]*2)for _ in range(n)]
# dp [2][2]=a[2][2]
#
# for i in range(2, n):
#     for j in range (2, m):
#         if max(dp[i-1][j-1], dp[i-1][j-1]) ==0:
#             continue
#             dp [i][j] = max(dp[i-1][j-1], dp[i-1][j-2]) + a[i][j]
#
# if dp[n+1][m+1] == 0:
#     print(-1)
# else:
#     print(dp[n+1][m+1])

# DAY 3 Frog 2

# m, k = map(int, input().split())
# l = [0] + list(map(int, input().split()))
# dp = [0] * (m + 1)
# dp[1] = 0
# dp[2] = abs(l[1] - l[2])
#
# for i in range(3, m + 1):
#     dp[i] = 10 ** 10
#     for j in range(1, min(k + 1, i)):
#         dp[i] = min(dp[i], dp[i - j] + abs(l[i] - l[i - j]))
#
# print(dp[m])











# Frog 1
# m = int(input())
# l = [0] + list(map(int, input().split()))
# dp = {}
# dp[1] = 0
# dp[2] = abs(l[1] - l[2])
#
# for i in range(3, m+1):
#     dp[i] = min(dp[i-1] + abs(l[i] - l[i-1]), dp[i-2] + abs(l[i] - l[i-2]))
#
# print(dp[m])


# LCS
# def  words ():
#     s = str(input())
#     t = str (input())
#     dp[i][j]= 10*100
#     for i in (s):
#         for j in  (t):
#             if (s(i) ==t (j)):
#                 dp[i][j]+1
#             else:
#                 dp
#                 continue
# words()


# Graphs
# n = int(input())
# for i in range(1, n + 1):
#     row = list(map(int, stdin.readline().split()))
#     for j in range(1, n + 1):
#         if row[j - 1] == 1:
#             a[i].append(j)
#
#
#
#
# n = int(input())
# m = int (input())
#
#
# s = 0
# for row in a:
#
#     for val in row:
#         if val == row(i):
#             print("YES")
#         else:
#             print("NO")
            # a = [[int(j) for j in input().split()] for i in range(n)]

# n = map(int(input().split())
#         for i in range(rows):
#             for j in range( columns):
#                     if adjacent[i][j] == 1:
#       G.add_edge(i,j)




n = int(input())
a = [[int(j) for j in input().split()] for i in range(n)]
s = 0
for row in a:

    for val in row:


print(row)


# adj_list = [[]for i in range (n+1)]
# adj_list[i].append(j)
# print(len)(adj_list[i].append(adj_list[i]))
#
