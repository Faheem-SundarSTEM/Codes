# # graph = {
# # 	1 : [2,3],
# # 	2 : [1,3,4],
# # 	3 : [1,2,4],
# # 	4 : [2,3]
# # }

# graph = {
# 	1 : [2,4],
# 	2 : [1,3,4],
# 	3 : [2,4,5],
# 	4 : [1,2,3,5],
# 	5 : [3,4]
# }

# # graph = {
# # 	1: [2,4],
# # 	2: [1,3],
# # 	3: [2,4],
# # 	4: [1,3]
# # }

# color = [0]*(len(graph)+1)

# def cancolor(c,u):
# 	for v in graph[u]:
# 		if(c == color[v]):
# 			return False
# 	return True


# # def func(u):
# # 	if(u == len(graph)+1):
# # 		print(color[1:])
# # 		return True
# # 	for i in range(1,n+1):
# # 		if(cancolor(i,u)):
# # 			# print('ss')
# # 			color[u] = i
# # 			if func(u+1):
# # 				return True
# # 			color[v] = 0
# # 	return False



# # n = 3 # no of color

# # func(1)

# # def func2(u):
# # 	for i in range(1,n+1):
# # 		if cancolor(i,u):
# # 			color[u] = i
# # 			for v in graph[u]:
# # 				if(not color[v]):
# # 					func2(v)
# # 			if(u == len(graph)):
# # 				print(color[1:])
# # 			color[u] = 0

# # func2(1)
# # print(color[1:])


#  # n = [list(input()) for i in range(2)]


dist = [[-1]*5 for _ in range(5)]
print(dist)