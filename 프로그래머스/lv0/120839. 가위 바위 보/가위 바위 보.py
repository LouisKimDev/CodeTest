def solution(rsp):
    answer = ''
    get = list(map(int, str(rsp)))
    win = {2:0,0:5,5:2}
    for i in range(len(get)):
        get[i] = win[get[i]]
    answer = ''.join(map(str, get))
    return answer