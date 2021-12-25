public class File{
	public static void main(String[] args){
		for(int i=0;i<10;i++){
			System.out.println(factorial(i-3));
		}
	}
	public static long factorial(int n){
		if (n<=0){
			return 0;
		}
		long output=1;
		for(int i=1;i<=n;i++){
			output*=i;
		}
		return output;
	}
}
