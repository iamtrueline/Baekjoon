public class Main {
    public static void main(String[] args) {
        int[] d = new int[10001];
        for (int i = 1; i <= 10000; i++){
            if(dn(i)<10001){
                d[dn(i)] = 1;
            }
        }
        for (int i = 1; i <= 10000; i++){
            if (d[i] != 1){
                System.out.println(i);
            }
        }
    }
  
    public static int dn(int i){
        int res = i;
        if (i >= 10000) { res += i / 10000; i %= 10000; }
        if (i >= 1000) { res += i / 1000; i %= 1000; }
        if (i >= 100) { res += i / 100; i %= 100; }
        if (i >= 10) { res += i / 10; i %= 10; }
        return res += i;
    }
}
