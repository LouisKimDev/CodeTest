def xor(a,b):
    return int(a and (not b)) or ((not a) and b)

def solution(bin1, bin2):
    ans = []
    C = 0
    bin1 = int(bin1)
    bin2 = int(bin2)
    if(bin1==0 and bin2==0):
        return '0'
    while(bin1>0 or bin2>0):
        x1 = bin1%10
        x2 = bin2%10
        S = xor(xor(x1,x2),C)
        C = (xor(x1,x2) and C) or (x1 and x2)
        
        bin1 = bin1//10
        bin2 = bin2//10
        ans.insert(0,int(S))
    if(C):
        ans.insert(0,1)

    ans = ''.join(map(str, ans))
    
    return ans