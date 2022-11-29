def solution(s):
    lists = s.split(' ')
    stack = [0 for i in range(len(s))]
    sc = 0
    answer = 0
    temp = 0
    for i in lists:
        try:
            answer = answer + int(i)
            stack[sc] = int(i)
            sc = sc +1
        except:
            if(i == 'Z'):
                answer = answer - stack[sc-1]
                sc = sc -1
            else:
                pass
            
    return answer