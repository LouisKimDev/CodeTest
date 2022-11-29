def solution(age):
    age_list = list(map(int, str(age)))
    for i in range(0,len(age_list)):
        age_list[i] = chr(age_list[i] + 97)
    answer = ''.join(age_list)
    return answer