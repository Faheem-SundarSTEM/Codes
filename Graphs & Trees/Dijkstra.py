import sys
input = lambda: sys.stdin.readline().rstrip()

from collections import defaultdict
import heapq

n,m = map(int ,input().split())
graph = defaultdict(list)

for i in range(m):
    a,b,w = map(int,input().split())
    graph[a].append((b,w))
    graph[b].append((a,w))


def dijkstra(src):
    global n 
    heap = [] # (dist from sources , node)
    dist = defaultdict(lambda:float('inf'))#
    parent = defaultdict(int)
    heapq.heappush(heap,(0,src))
    while heap:
        dis,node = heapq.heappop(heap)
        for v,w in graph[node]: # A 2
            if dist[v] > dis + w:
                dist[v] = dis + w
                parent[v] = node
                heapq.heappush(heap,(dist[v],v))

    if(dist[n] == float('inf')):
        print(-1)
    else:
        s = n
        path = []
        while(s != src):
            path.append(s)
            s = parent[s]
        path.append(s)
        path.reverse()
        for i in path:print(i,end=' ')


            
dijkstra(1)
