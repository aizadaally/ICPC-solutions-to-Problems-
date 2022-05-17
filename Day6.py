# from sys import stdin, stdout
#
# result = 0
# n, s = map(int, stdin.readline().split())
#
# a = [[] for _ in range(105)]
#
# visited = [False] * 105
#
# for i in range(1, n + 1):
#     row = list(map(int, stdin.readline().split()))
#     for j in range(1, n + 1):
#         if row[j - 1] == 1:
#             a[i].append(j)
#
#
# def dfs(v):
#     global result, visited, a
#     visited[v] = True
#     result += 1
#     for i in a[v]:
#         if not visited[i]:
#             dfs(i)
#
#
# dfs(s)
# stdout.write(str(result))

#
# n, m = map(int, input().split())
# used = 0
# result = 0
# a = [[] for _ in range(1e5+5)]
#
# def dfs(v):
#     global result, used, a
#     for i in a[v]:
#         g[a].push_back(b)
#         g[b].push_back(a)


# result = 0
# n, s = map(int, input().split())
#
# a = [[] for _ in range(100)]
#
# visited = [False] * 100
#
# for i in range(1, n + 1):
#     row = list(map(int, input().split()))
#     for j in range(1, n + 1):
#         if row[j - 1] == 1:
#             a[i].append(j)
#
#
# def dfs(v):
#     global result, visited, a
#     visited[v] = True
#     result += 1
#     for i in a[v]:
#         if not visited[i]:
#             dfs(i)


# dfs(s)
# stdout.write(str(result))



# n = map(int, input().split())
# m = []
# for _ in range(n):
#     m.append([0] + list(map(int, input().split())))
# used = [False] * (n+1)
# ans = 0
#
#
# def dfs(s):
#     global ans
#     used[s] = True
#     ans += 1
#     for i in range(1, n+1):
#         if (m[s][i] == 1) and (used[i] is False):
#             dfs(i)
#
#
# dfs(v)
# print(ans)
#
# def dfs(v):
#     print(v, end=' ')
#
#     used[v] = True
#
#     for to in g[v]:
#
#         if not used[to]: dfs(to)
#
#
# n, m = map(int, input().split())
#
# g = [[] for _ in range(n + 1)]
#
# for i in range(m):
#     a, b = map(int, input().split())
#
#     g[a].append(b)
#
#     g[b].append(a)
#
# used = [False for i in range(n + 1)]
#
# v = int(input())
##1 A
# def dfs(v1):
#     print(v1,end = '')
#     used[v1] = True
#     for to in g[v1]:
#         if not used[to]: dfs(to)
# n,m = map(int, input().split())
# g = [[] for _ in range(n+1)]
# for i in range(m):
#     a1, b1 = map(int, input().split())
#     g[a1].append(b1)
#     g[b1].append(a1)
#
# used = [False for i in range(n+1)]
# v1 = int(input())
# dfs(v1)

# #B
# a = int(input())
# n =[[]]
# for _ in range (1, a+1):
#     n.append(list(map(int, input().split())))
# used = [False]*(a+5)
# result = 0
# def dfs(w, start):
#     global used,a, result
#     used[w]= True
#     for i in range (len(n[w])):
#         if n[w][i]==0:
#             continue
#         else:
#             to = i+1
#         if used[to] and to == start:
#             result = 1
#             break
#         if not used[to]:
#             dfs(to,start)
# for i in range (1, a+1):
#     dfs(i,i)
#     used = [False]*(a+5)
# if a == 1:
#     result =0
# str(result)
#cses #1 Graph Problem
# def dfs(x, y):
#     used[x][y]=1
#     if (x-1>=1 and c[x-1][y]==used(x-1)[y]==0)
#         y-1>=1
#         y+1<=m
#         x+1<=n
#         for i in range(n):
#             for j in range(n):
#                 if(ci == and used[i][j]==0):
#                     dfs (i,j)


# n, m =map(list(int, input().split()))
# dp[1005][1005]= [1005][1005]
# used [1005][1005]= [],[]
# for i in range(n):
#     for j in range(m):
#         def bfs(x, y):
#             if (dp)


# from sys import stdin, stdout, setrecursionlimit
#
# setrecursionlimit(1000000)
#
# n, m = map(int, stdin.readline().split())
#
# g = [[]]
# for _ in range(n):
#     g.append(['#'] + list(stdin.readline()))
#
# used = [[False] * 1005 for _ in range(1005)]
#
# result = 0
#
#
# def dfs(i, j):
#     global used, result, g, n, m
#     used[i][j] = True
#     if i - 1 >= 1 and not used[i - 1][j] and g[i - 1][j] == '.':
#         dfs(i - 1, j)
#     if j - 1 >= 1 and not used[i][j - 1] and g[i][j - 1] == '.':
#         dfs(i, j - 1)
#     if i + 1 <= n and not used[i + 1][j] and g[i + 1][j] == '.':
#         dfs(i + 1, j)
#     if j + 1 <= m and not used[i][j + 1] and g[i][j + 1] == '.':
#         dfs(i, j + 1)
#
#
# for i in range(1, n + 1):
#     for j in range(1, m + 1):
#         if g[i][j] == '.' and not used[i][j]:
#             dfs(i, j)
#             result += 1
#
# stdout.write(str(result))
# Message route







