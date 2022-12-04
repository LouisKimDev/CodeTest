def solution(polynomial):
    x, num = 0, 0
    polynomial = polynomial.split(" + ")
    
    for i in polynomial:
        
        if i.isnumeric():
            num += int(i)
            
        else:
            
            if len(i) == 1:
                x += 1
                
            else:
                x += int(i[:-1])
                
    if x == 0 and num == 0: # 식이 그냥 0 일 때
        return "0"
    
    elif x == 1 and num ==0:
        return "x"
    elif x == 0: # 다항식이 0
        return str(num)
    
    elif x == 1: # 다항식이 1
        x = ""
    

    
    elif num == 0: # 상수항이 0
        return str(x) + "x"
    
    return str(x)+"x + "+str(num) # 다항식과 상수항이 0 이상