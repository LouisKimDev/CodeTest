def solution(spell, dic):
    answer = 2
    
    for i in dic:
        cnt = 0
        for j in spell:
            if(i.find(j)==-1):
                pass
            else:
                cnt += 1
        if(cnt == len(spell)):
            answer = 1
            
            
            
    return answer