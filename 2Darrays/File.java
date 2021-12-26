public class File{
	public static void main(String[] args){
		int[][] arr1=new int[3][3];
		int[][] arr={
			{1,2,3},
			{4,5,6},
			{7,8,9}
		};
		System.out.println(arr[1][1]);
		arr[2][2]=33;
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr[0].length;j++){
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}
