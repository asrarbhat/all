let map={};
map["name"]="rayon";
map[2]=3;
console.log(map);
console.log(map["name"]);
if (map[33]){
	console.log(map[33]);
}
else{
	console.log("not availabe");
}
delete map["name"]
console.log(map);

