def solution(my_string):
    answer = []
    ans = 0
    string = list(my_string)
    for i in string:
        try:
            answer.append(int(i))
        except:
            pass
    for i in answer:
        ans = ans + i
    return ans