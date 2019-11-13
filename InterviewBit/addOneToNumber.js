module.exports = { 
    //param A : array of integers
    //return a array of integers
       plusOne : function(A){
        var arr = []
        for(var i=0;i<A.length;i++) {
            arr.push(A[i])
        }
        arr.reverse()
        var carry = 0
        arr[0]++
        for (var i=0;i<arr.length;i+=1) {
            var curr = arr[i]
            curr += carry  
            if(curr>9) {
                carry = curr/10
                curr = 0
            }
            else{
                carry = 0
            }
            arr[i] = curr
        }
    
        if(carry === 1){
            arr.push(carry)
        }

        arr.reverse()
        while(1){
            if(arr[0]=== 0){    
                var temp = arr.shift()
            }
            else {
                break
            }
        }
        return arr
       }
   };
   

// ES6 syntax does not work as of the time at which this code is written;

// [1,2,9] , [9,2,1]
function plusOne(A) {
    let arr = [...A]
    arr.reverse()
    // console.log(arr)
    let carry = 0
    arr[0]++
    for (let i=0;i<arr.length;i+=1) {
        let curr = arr[i]
        curr += carry
        console.log('curr = ',curr, 'carry =' , carry)

        if(curr>9) {
            carry = curr/10
            curr = 0
        }
        else{
            carry = 0
        }
        arr[i] = curr
    }

    if(carry === 1){
        arr.push(carry)
    }
    
    arr.reverse()
    while(1){
        if(arr[0]=== 0){    
            var temp = arr.shift()
        }
        else {
            break
        }
    }
    return arr
}

console.log(plusOne([0]))