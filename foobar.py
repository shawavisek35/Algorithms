def solution(st):
    
    st1 = ""
    for i in st:
        if (i>='a' and i<='z'):
            
            
            a = ord(i)
            
            b = chr(219-a)
            
            st1 = st1 + b
        else:
            st1 = st1 + i

    return st1

sol = solution("Yvzs! I xzm'g yvorvev Lzmxv olhg srh qly zg gsv xlolmb!!")
print(sol)
