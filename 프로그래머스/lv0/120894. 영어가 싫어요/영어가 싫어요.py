import math

def solution(numbers):
    answer = 0
    conv = {'zero':0, 'one':1, 'two':2, 'three':3, 'four':4, 'five':5, 'six':6, 'seven':7, 'eight':8, 'nine':9}
    tstr = ''
    for i in range(len(numbers)):
        tstr=tstr+(numbers[i])

        try:
            answer = answer + conv[tstr]
            print(conv[tstr])
            answer = answer * 10
            print(tstr)
            tstr = ''
        except:
            pass

        
    
    return answer*0.1