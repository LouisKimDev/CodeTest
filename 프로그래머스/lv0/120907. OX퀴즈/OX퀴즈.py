def solution(quiz):
    answer = []
    temp = ''
    for i in quiz:
        temp=i.replace('=','==')
        if(eval(temp)==True):
            answer.append("O")
        else:
            answer.append("X")

        
    return answer