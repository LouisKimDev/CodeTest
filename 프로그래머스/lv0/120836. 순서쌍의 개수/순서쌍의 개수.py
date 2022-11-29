def solution(n):
    answer = 0
    for i in range(n+1):
        if (n % (i+1)) == 0:
            answer = answer +1
    return answer