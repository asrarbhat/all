function factorial(n){
	let output=1;
	if (n<=0){
		return 0;
	}
	for(let i=1;i<=n;i++){
		output*=i;
	}
	return output;
}
for(let i=1;i<=10;i++){
	console.log(factorial(i-3));
}
