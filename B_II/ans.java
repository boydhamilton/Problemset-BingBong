

package B_II;
import java.io.*;

class ans{

    static int watermelons(int[][] matrix, int n){
        int[][] sum = new int[n][n];

        sum[0][0] = matrix[0][0];
        for(int i=1; i<n; i++) 
            sum[i][0] = sum[i-1][0] + matrix[i][0];
        for(int i=1; i<n; i++) 
            sum[0][i] = sum[0][i-1] + matrix[i][0];

        for(int i=1; i<n; i++)
            for(int j=1; j<n; j++)
                sum[i][j] = Math.max(sum[i-1][j], sum[i][j-1]) + matrix[i][j];

        return sum[n-1][n-1];
    }

    public static void main(String[] watermelon) throws IOException{
        int n;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine()); // width

        int mat[][] = new int[n][n];

        for(int i=0; i<n; i++){
            String[] l = br.readLine().split(" ");
            for(int j=0; j<n; j++)
                mat[i][j] = Integer.parseInt(l[j]);
        }

        int out = watermelons(mat, n);
        System.out.println(out+"m");
    }
}