def solution(balls, share):
    n=1
    j=1
    m=1
    for i in range(balls):
        n = n * (i+1)
        
    for i in range(balls-share):
        m = m * (i+1)
        
    for i in range(share):
        j = j * (i+1)
        
        
    answer = n / (m*j)
    print(n,m,j)
    return answer