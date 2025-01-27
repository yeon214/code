process.stdin.on('data', function(data){
    const inputData = data.toString().split(' ');
    const A = parseInt(inputData[0]);
    const B = parseInt(inputData[1]);
    console.log(A/B);
    process.exit();
});