Class.c
#include<stdio.h>
int main()
{
    int num,count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (count =1; count <= num; ++count)
   {
       sum +=count;

   } 
   printf("Sum = %d", sum);
   return 0;


}
// Solutions for ICPC
from sys import stdin, stdout

n, s, f = map(int, stdin.readline().split())

g = [[]]

for _ in range(n):
g.append([0] + list(map(int, stdin.readline().split())))

distance = [int(1e6)] * (n + 5)
distance[s] = 0
q = set()
q.add((0, s))

while q:
v = min(q)[1]
q.discard(min(q))
for j in range(1, n + 1):
if g[v][j] <= 0:
continue
if distance[v] + g[v][j] < distance[j]:
q.discard((distance[j], j))
distance[j] = distance[v] + g[v][j]
q.add((distance[j], j))

if distance[f] == int(1e6):
stdout.write('-1')
else:
stdout.write(str(distance[f]))

