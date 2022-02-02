using System;

public class Solution
{
    int []arr;
    int [,]arr2;
    int a;
    String b;

    public Solution(int n, int a, string b)
    {
        arr = new int[n];
        arr2 = new int[n, n];
        this.a = a;
        this.b = b;
    }

    public void showNonStatic()
    {
        Console.WriteLine(a + " " + b);
    }

    public static void showStatic(out int a, string b)
    {
        a = 3;
        Console.WriteLine(++a + b);
    }

    public static void Main(String []arr)
    {
        int num;        
        showStatic(out num, "Avisek");
        Solution s = new Solution(5, 3, "Avisek");
        s.showNonStatic();
        Console.WriteLine(num);
    }
}