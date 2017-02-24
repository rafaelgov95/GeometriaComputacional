import networkx as nt 
import matplotlib.pyplot as plt
import random
import time


G = nt.Graph()

for i in range(0,9):
	G.add_node(i)

G.add_edge(0,1)
G.add_edge(0,9)
G.add_edge(1,2)
G.add_edge(2,3)
G.add_edge(3,4)
G.add_edge(4,5)
G.add_edge(5,6)
G.add_edge(6,7)
G.add_edge(7,8)
G.add_edge(8,9)

pos = {0: (25, 10), 1: (30, 25), 2: (35, 25), 3: (33, 18), 4: (36, 20), 5: (36, -15), 6: (34, -5), 7: (34, -20), 8: (23, -18), 9: (28, 0)} 

nt.draw_networkx(G,pos)
plt.show()


for i in range(0,9):
	print(i)
	for t in G.neighbors(i):
		if (t>i):		
			for j in G.neighbors(i):
				if (j!=t and j>i):
					G.add_edge(j,t)		
					nt.draw_networkx(G,pos)
					plt.show()

