function solution(numbers) {
    let a, result = 0;
    for(a = 0; a < numbers.length; a++){
        result += numbers[a];
    }
    result /= numbers.length;
    return result;
}