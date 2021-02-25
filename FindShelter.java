import java.util.*;

    class shelter {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-- >0 ){
            int n = sc.nextInt();
            int p[]=new int[n];
            int a[]=new int[n];
            for(int i=0;i<n;i++)
            {
                p[i] = sc.nextInt();
            }
            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextInt();
            }
            Arrays.sort(p);
            Arrays.sort(a);
            int max=0;
            for(int i=0;i<n;i++){
                int x = (int)Math.abs(p[i] - a[i]);
                if(x>max){
                    max=x;
                }}
                System.out.println(max);

        }
    }
    }
