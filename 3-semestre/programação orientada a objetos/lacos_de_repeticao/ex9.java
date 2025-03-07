package ex9;

public class Ex9 {
	
	public static void main(String args[]) {
		
		int flag;
		
		for(int i=1; i<=50; i++) {
			
			flag = 0;
					
			for(int j=2; j<i; j++) {
				if(i%j == 0) {
					flag = 1;
				}
			}
			
			if(flag == 0) {
				System.out.println(i);
			}
		}
		
	}

}
