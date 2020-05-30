if __name__ == '__main__':
    n = int(input())
    binary = str(bin(n).replace("0b", ""))+"0"
    print(binary)
    binary_ones = []
    count = 0
    for i in range(len(binary)):
        if(binary[i]=='0'):
            binary_ones.append(count)
            count = 0
            continue
        else:
            count +=1

    max_number = max(binary_ones)
    print(max_number)