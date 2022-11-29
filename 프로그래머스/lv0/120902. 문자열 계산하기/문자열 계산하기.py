def solution(my_string):
    temp = []
    temp = my_string.split(' ')
    answer = int(temp[0])
    for i in range(len(temp)):
        if(temp[i] == '+'):
            answer = answer + int(temp[i+1])
        elif(temp[i] == '-'):
            answer = answer - int(temp[i+1])
        else:
            pass
    return answer