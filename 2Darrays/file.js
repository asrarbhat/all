let arr=[
		[1,2,3],
		[4,5,6],
		[7,8,9]
];
console.log(arr[1][1]);
arr[2][2]=22;
for(let i=0;i<arr.length;i++){
	let row="";
	for(let j=0;j<arr[0].length;j++){//putting j here gave error as it checks last time as well
		row+=" "+String(arr[i][j]);
	}
	console.log(row);
}
