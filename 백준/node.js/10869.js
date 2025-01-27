process.stdin.on('data', function(data){
    const inputData=data.toString().split(' ');
    const a = parseInt(inputData[0]);
    const b = parseInt(inputData[1]);
    console.log(a+b+'\n'+(a-b)+'\n'+(a*b)+'\n'+parseInt(a/b)+'\n'+(a%b));
    process.exit();
});