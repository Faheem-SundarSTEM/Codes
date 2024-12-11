from collections import defaultdict
import heapq
grid = [
    [0,1,0,0,0,1,0,0,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,1,0,1,0,0,0,1,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,1,0,1,0,1,0,0,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,1,0,1,0,1,0,1,0,1],
    [0,0,0,1,0,0,0,0,0,0]
]

directions = [(0,1),(1,0),(0,-1),(-1,0)]

def heuristic(a,b):
    return abs(a[0]-b[0]) + abs(a[1]-b[1])
    

def A_star(start , end):
    pr = [['#' for i in range(cols)] for _ in range(rows)]
    for i in range(rows):
        for j in range(cols):
            if(grid[i][j] == 1):
                pr[i][j] = '#'
            else:
                pr[i][j] = '.'
    
    
    open_list = []
    parent = {}  
    g_cost = {start : 0}
    # f_cost = {start : heuristic(start ,end) }
    
    heapq.heappush(open_list,(heuristic(start ,end)+0,start))

    while(open_list):
        dis , curr = heapq.heappop(open_list)
        for dx , dy in directions :
            nei = (curr[0] + dx , curr[1] + dy)
            if -1 < nei[0] < rows and -1 < nei[1] < cols and grid[nei[0]][nei[1]] == 0:
                g = g_cost[curr]+1
                if(nei not in g_cost or g < g_cost[nei]):
                    g_cost[nei] = g
                    parent[nei] = curr
                    # f_cost[nei] = g + heuristic(end , nei)
                    heapq.heappush(open_list , (g + heuristic(end , nei), nei ) ) 
                
    s = end

    while(s != start):
        pr[s[0]][s[1]] = 'P'
        s = parent[s]
        pr[s[0]][s[1]] = 'P'
        
    for i in pr:
        print(i)
                
        
        
    

rows,cols = len(grid),len(grid[0])
A_star((0,0) , (rows-1,cols-1))





    