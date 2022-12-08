def solution(before, after):
    answer = 0

    list1 = [ord(i)-ord('a') for i in before]
    list1_1 = [0 for i in range(26)]
    list2 = [ord(i) - ord('a') for i in after]
    list2_1 = [0 for i in range(26)]
    for i in (list1):
        list1_1[i] += 1
    for i in (list2):
        list2_1[i] += 1
    if(list2_1 == list1_1):
        return 1
    else:
        return 0
    return answer