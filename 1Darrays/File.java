public class File{
	public static void main(String[] args){
		
		int[] arr1=new int[4];
		int[] arr={1,2,3,4};
		System.out.println(arr[2]);
		arr[2]=33;
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
	}
}
