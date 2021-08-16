# Returns XOR of 'a' and 'b'
def xor(a, b):
	result = ""
	for i in range(1, len(b)):
		if a[i] == b[i]:
			result += "0"
		else:
			result += "1"

	return result


# Performs division
def divide(divident, divisor):
    pick = len(divisor)
    tmp = divident[0 : pick]

    while pick < len(divident):

        if tmp[0] == '1':

            tmp = xor(divisor, tmp) + divident[pick]

            tmp = xor('0'*pick, tmp) + divident[pick]

        pick += 1
        
    if tmp[0] == '1':
        tmp = xor(divisor, tmp)
    else:
        tmp = xor('0'*pick, tmp)
	
    return tmp

if __name__=="__main__":
    data = "10110001"
    divisor = "1011"
    
    # Appends n-1 zeroes at end of data
    l = len(divisor) - 1 
    trailing_zeros = "0"*l
    data = data + trailing_zeros
    remainder = divide(data, divisor)
    
    print("The CRC is : ", remainder)
