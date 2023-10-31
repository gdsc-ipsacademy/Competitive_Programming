public class karat {

    static int k(int x,int y){
        if(x<10 && y<10){
            return x*y;
        }
        int n = Math.max(String.valueOf(x).length(), String.valueOf(y).length());
        int half = n/2;
        int a = x/ (int)Math.pow(10,half);
        int b = x% (int)Math.pow(10,half);
        int c = y/ (int)Math.pow(10,half);
        int d = y% (int)Math.pow(10,half);
        int ac = k(a,c);
        int bd = k(b,d);
        int adbc = k(a+b,c+d) - ac-bd;
        return ac*(int)Math.pow(10, 2*half)+adbc*(int)Math.pow(10, half)+bd;
    }
    public static void main(String[] args) {
        System.out.println(k(11,10));
    }   
}