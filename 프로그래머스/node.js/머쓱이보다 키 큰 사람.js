function solution(array, height) {
    var answer = 0, a;
    for (a = 0; a <= array.length; a++){
        if (array[a]>height) answer++;
    }
    return answer;
}