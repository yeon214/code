def solution(slice, n):
    answer = 1
    sliceSum = slice
    while sliceSum<n:
        sliceSum += slice
        answer+=1
    return answer