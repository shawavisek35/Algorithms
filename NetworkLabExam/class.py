#Program to identify class of a given IP address using binary notation

def decimaltoBinary(octet1):
    l = [0]*8
    i=7
    while(octet1>0):
        l[i] = octet1%2
        i = i-1
        octet1 = octet1 // 2
    return l
def checkNetworkClass(octet1):
    binary = decimaltoBinary(octet1)
    if(binary[0] == 0):
        print("Class A network")
    elif(binary[1] == 0):
        print("Class B network")
    elif(binary[2] == 0):
        print("Class C network")
    elif(binary[3] == 0):
        print("Class D network")
    else:
        print("Class E network")
if __name__ == "__main__":
    ip = input("Enter an Ip address : ").split(".")
    ip = [int(i) for i in ip]
    checkNetworkClass(ip[0])