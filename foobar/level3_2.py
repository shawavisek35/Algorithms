#bomb baby

def solution(x, y):
    m = int(x)
    f = int(y)
    queue = []
    queue.append(node(1,1,0))
    
    while(len(queue)>0):
        current_node = queue.pop(0)
        
        if(current_node.x==m and current_node.y==f):
            return str(current_node.cycles)
        queue.append(node(current_node.x,current_node.x+current_node.y,current_node.cycles+1))
        queue.append(node(current_node.x+current_node.y,current_node.y,current_node.cycles+1))
        
    return "impossible"
    
class node():
    def __init__(self,x,y,cycles):
        self.x = x
        self.y = y
        self.cycles = cycles
        
            
print(solution('4','7'))    

"""
    2nd Approach =>
    def solution(x, y):
    m = int(x)
    f = int(y)
    cycles = 0
    while min(m,f)!=1:
        if max(m,f) % min(m,f)==0:
            return "impossible"
        else:
            cycles += max(m,f)/min(m,f)
            m,f = max(m,f)%min(m,f),min(m,f)
            
    return str(cycles + max(m,f)-1)

"""
            
        