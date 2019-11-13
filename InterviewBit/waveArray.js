function waveArray(A) {
    A.sort()
    for(let i=0;i<A.length-1;i+=2) {
        let temp = A[i]
        A[i] = A[i+1]
        A[i+1] = temp 
    }
    return A
}

console.log(waveArray([1,2]))