def solution(my_string):
    answer = []
    ints = [1,2,3,4,5,6,7,8,9,0]
    array = list(my_string)
    for i in array:
        try:
            answer.append(int(i))
        except:
            pass
        
    return sorted(answer)