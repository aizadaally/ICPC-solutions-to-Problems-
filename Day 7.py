# nv = int(input())
# dk = [[]]
# a, b  = dk
# dk [a] = c
# dk [b] = v
#
# for k in range(nv-1):
#     for i in range(nv-1):
#         for j in range(nv-1):
#             dk[i, j] = min(dk - 1[i, j], dk - 1[i, k] + dk - 1[k, j])
#
# def sol(dist):
#     for i in range(nV):
#         for j in range(nV):
#             if (dist[i][j] == dk):
#                 print("dk", end=" ")
#             else:
#                 print(dist[i][j], end="  ")
#         print(" ")



# n = int(input())
# m = map(int, input().split())
# INF = 10000000
# d [v]= [[]]
# used = 0
# s = int(input())
# for i in range(0, n-1):
#     for j in range(0, n-1):
#         d[i, j] = min(d[v] - 1[i, j], d[v] - 1[i, k] + d[v] - 1[k, j])
#         print(d[v])



# def dijkstra(graph, start_vertex):
#     D = {v:float('inf') for v in range(graph.v)}
#     D[start_vertex] = 0
#
#     pq = PriorityQueue()
#     pq.put((0, start_vertex))
#
#     while not pq.empty():
#         (dist, current_vertex) = pq.get()
#         graph.visited.append(current_vertex)
#
#         for neighbor in range(graph.v):
#             if graph.edges[current_vertex][neighbor] != -1:
#                 distance = graph.edges[current_vertex][neighbor]
#                 if neighbor not in graph.visited:
#                     old_cost = D[neighbor]
#                     new_cost = D[current_vertex] + distance
#                     if new_cost < old_cost:
#                         pq.put((new_cost, neighbor))
#                         D[neighbor] = new_cost
#     return D

from sys import stdin, stdout

# n, s, f = map(int, stdin.readline().split())
#
# g = [[]]
#
# for _ in range(n):
#     g.append([0] + list(map(int, stdin.readline().split())))
#
# distance = [int(1e6)] * (n + 5)
# distance[s] = 0
# q = set()
# q.add((0, s))
#
# while q:
#     v = min(q)[1]
#     q.discard(min(q))
#     for j in range(1, n + 1):
#         if g[v][j] <= 0:
#             continue
#         if distance[v] + g[v][j] < distance[j]:
#             q.discard((distance[j], j))
#             distance[j] = distance[v] + g[v][j]
#             q.add((distance[j], j))
#
# if distance[f] == int(1e6):
#     stdout.write('-1')
# else:
#     stdout.write(str(distance[f]))

#
# n = map(int,input().split())
# g = [[]]
# for _ in range(n):
#     g.append([0],list(map(int, input().split())))
# distance = [int(1e6)] * (n + 5)
# q = set()
# while q:
#     v = min(q)[1]
#     q.discard(min(q))
#     for j in range(1, n + 1):
#         if g[v][j] <= 0:
#             continue
#         if distance[v] + g[v][j] < distance[j]:
#             q.discard((distance[j], j))
#             distance[j] = distance[v] + g[v][j]
#             q.add((distance[j], j))
#
# if distance[f] == int(1e6):
#     ('-1')
# else:
#     str(distance[f])



# n= int(input())
# m = list(map(int, input().split()))
# g = [[]]
# distance = 0
# for  _ in range(n):
#     g.append(list(map(int, input().split())))
# distance = [int(105)] * (n + 10)
# n = map(int,input().split())
# g = [[]]
# for _ in range(n):
#     g.append([0],list(map(int, input().split())))
# distance = [int(1e6)] * (n + 5)
# q = set()
# while q:
#     v = min(q)[1]
#     q.discard(min(q))
#     for j in range(1, n + 1):
#         if g[v][j] <= 0:
#             continue
#         if distance[v] + g[v][j] < distance[j]:
#             q.discard((distance[j], j))
#             distance[j] = distance[v] + g[v][j]
#             q.add((distance[j], j))
#
# if distance[f] == int(1e6):
#     ('-1')
# else:
#     str(distance[f])


# n = int(input())
# nV = list(map(int, input().split()))
# INF = 110
# for  _ in range(0,n-1) :
#     def floyd(G):
#         dist = list(map(lambda p: list(map(lambda q: q, p)), G))
#         for r in range(nV):
#             for p in range(nV):
#                 for q in range(nV):
#                     dist[p][q] = min(dist[p][q], dist[p][r] + dist[r][q]
#                     sol(dist)
#
# # Printing the output
# def sol(dist):
#     for p in range(nV):
#         for q in range(nV):
#             if(dist[p][q] == INF):
#                 print("INF", end=" ")
#             else:
#                 print(dist[p][q], end="  ")
#         print(" ")


# G = [[0, 5, INF, INF],
#          [50, 0, 15, 5],
#          [30, INF, 0, 15],
#          [15, INF, 5, 0]]
# floyd(G)
# from queue import PriorityQueue
# n = int(input())
# m = list(map(int, input().split()))
# s = int(input())
# INF = 110
# distance = set()
# for i in range(n-1):
#     for j in range(n-1):
#         dist[i][j] = min(dist[i][j], dist[j][i] + dist[n][j])
#         distance.add([i][j])
# print(distance)




# Printing the output
# def sol(dist):
#     for p in range(nV):
#         for q in range(nV):
#             if(dist[p][q] == INF):
#                 print("INF", end=" ")
#             else:
#                 print(dist[p][q], end="  ")
#         print("  ")
#
# G = [[0, 5, INF, INF],
#          [50, 0, 15, 5],
#          [30, INF, 0, 15],
#          [15, INF, 5, 0]]


# sum = 0
# t = int(input())
# for tt in range(t):
#     n = map(int, input().split())
#     a = map(int,input().split())
#     for i in range(a):
#         sum = sum + a(i)
# if sum%n==0:
#     print(1)
# else:
#     print(0)
# BB Contest
# def function(n):
#   prime = [True for _ in range(n + 1)]
#   prime[0], prime[1] = False, False
#
#   for i in range(2, int(n ** 0.5) + 1):
#     for j in range(2 * i, n + 1, i):
#       prime[j] = False

#   return prime
#
# prime_number = function(100001)
# a, b = map(int, input().split())
# for i in range (a, b + 1):
#   if prime_number[i]: print(i,end=' ')



