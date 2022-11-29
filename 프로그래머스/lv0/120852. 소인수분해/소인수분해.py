def solution(n):
    answer = []
    ans = []
    count = 2
    
    while(not(n==1)):
        if n%count == 0:
            n = n/count
            answer.append(count)
            count = 2
        else:
            count = count +1
    for value in answer:
        if value not in ans:
            ans.append(value)
    
    return ans