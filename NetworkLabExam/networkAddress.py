def decimaltoBinary(octet1): 
    l = [0]*8 
    i=7 
    while(octet1>0): 
        l[i] = octet1%2 
        i = i-1 
        octet1 = octet1 // 2 
    return l 

def convertToDecimal(binaryIp):
    decimalIp = []
    for ip in binaryIp:
        sum = 0;
        for i in range(len(ip)):
            sum += (ip[i]*pow(2,(7-i)))
        decimalIp.append(sum)
    return decimalIp

def checkNetworkClass(octet1): 
    binary = decimaltoBinary(octet1) 
    if(binary[0] == 0): 
        return "A" 
    elif(binary[1] == 0): 
        return "B"
    elif(binary[2] == 0): 
        return "C" 
    elif(binary[3] == 0): 
        return "D" 
    else: 
        return "E" 
    
def AndOperation(i,j):
    return i&j

def performAnd(ip, default_mask):
    l = [0]*8
    for i in range(len(ip)):
        l[i] = AndOperation(ip[i],default_mask[i])
    return l
    
def getDefaultMask(networkClass):
    if(networkClass == "A"):
        return [255,0,0,0]
    elif(networkClass == "B"):
        return [255,255,0,0]
    elif(networkClass == "C"):
        return [255, 255, 255, 0]
    
def getNetworkAddress(ip, default_mask):
    
    network_address = [0,0,0,0]
    
    #converting ip to binary
    ip = [decimaltoBinary(i) for i in ip]
    
    #converting default mask to binary
    default_mask = [decimaltoBinary(i) for i in default_mask]
    
    for i in range(len(ip)):
        network_address[i] = performAnd(ip[i], default_mask[i])
        
    
    decimalIp = convertToDecimal(network_address)
    decimalIp = [str(i) for i in decimalIp]
    ip = ".".join(decimalIp)
    print("The Network Address is : ", ip)
        
    
    
if __name__ == "__main__": 
    ip = input("Enter an Ip address : ").split(".") 
    ip = [int(i) for i in ip] 
    networkClass = checkNetworkClass(ip[0])
    defaultMask = getDefaultMask(networkClass)
    getNetworkAddress(ip, defaultMask)