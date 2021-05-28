function processData(input) {
    let fine = 0;
    
    let dateR = input.split('\n');
    let dateD = dateR.pop().split(' ');
    dateR = dateR.join('').split(' ');
    
    let dayR = +dateR[0];
    let monthR = +dateR[1];
    let yearR = +dateR[2];
    
    let dayD = +dateD[0];
    let monthD = +dateD[1];
    let yearD = +dateD[2];
    
    if (yearD < yearR) {
        fine += 10000;
    } else if (monthD < monthR && yearR == yearD) {
        fine += 500 * (monthR - monthD);
    } else if (dayD < dayR && monthR == monthD && yearR == yearD) {
        fine += 15 * (dayR - dayD);
    } else {
        fine = 0;
    }
    
    console.log(fine);
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
