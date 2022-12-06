def solution(sides):
    answer = 0
    
    i = max(sides) - min(sides)
    j = max(sides) + min(sides)
    
    for x in range(1,max(sides)+1):
        if(x>i and x<=max(sides)):
            answer += 1
            
    for x in range(j):
        if(x>max(sides)):
            answer += 1
            
    return answer