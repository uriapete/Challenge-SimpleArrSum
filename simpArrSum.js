function simpleArraySum(ar) {
    let sum = 0;
    for (let i = 0; i < ar.length; i++) {
        const num = ar[i];
        sum+=num;
    }
    return sum;
}

const arr = [1,2,3];
console.log(arr);
console.log(simpleArraySum(arr));

const rngSingDigi = () => {return Math.floor(Math.random()*10)};

function rngArr() {
    let newNum = rngSingDigi();
    while (newNum === 0) {
        newNum = rngSingDigi();
    }
    let numArr = [];
    while (newNum!=0) {
        numArr.push(newNum);
        newNum = rngSingDigi();
    }
    return numArr;
}

// console.log(rngArr());
// console.log(rngArr());
// console.log(rngArr());

const randArr1 = rngArr();
console.log(randArr1);
console.log(simpleArraySum(randArr1));
const randArr2 = rngArr();
console.log(randArr2);
console.log(simpleArraySum(randArr2));
const randArr3 = rngArr();
console.log(randArr3);
console.log(simpleArraySum(randArr3));
// const randArr2 = rngArr();
// console.log(randArr2);
// const randArr3 = rngArr();
// console.log(randArr3);