package test;
import java.util.*;


 class WindowsWashing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        StringBuffer sb = new StringBuffer();
        while (t>0) {
            int N = sc.nextInt();
            int M = sc.nextInt();
            int value, i, j, c = 0;
            int initial[][] = new int[N+2][M];
            int dp[][] = new int[N+2][M+2];
            int ans[][] = new int[N][M+2];
            for (i = 1; i < N; i++) 
            {
                for(j=1;j<N;j++){
                   initial[i][j] = sc.nextInt();
                   dp[i][j] = Math.max(Math.max(dp[i-1][j+1], dp[i][j]), dp[i-1][j+1]);
                   if(dp[i][j] >= initial[i][j])
                       ans[i][j] = 0;
                   else
                       ans[i][j] = 1;
                   dp[i][j] = Math.max(initial[i][j],dp[i][j]);
                }
            }
			 for(i=0; i<N; i++)
			 {
			     for(j=1;j<=M;j++)
			     {
			         sb.append(ans[i][j]);
			     }
			     sb.append(System.getProperty("sb.line.separator"));
			 }
			 t--;
    }
    System.out.println(sb);
}
}
