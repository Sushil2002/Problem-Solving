import java.util.*;

public class Que01 {
    public static void main(String argv[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        Map<Integer, Integer> mp = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            arr.add(x);
        }
        Collections.sort(arr);
        // for (int i = 0; i < n; i++) {
        //     System.out.println(arr.get(i));
        // }
        for (int i = 0; i < n; i++) {
            if (mp.containsKey(arr.get(i))) {
                mp.put(arr.get(i), mp.get(arr.get(i)) + 1);
            } else {
                mp.put(arr.get(i), 1);
            }
        }
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
            if(entry.getValue()==1){
                return false;
            }
        }
        return true;
        sc.close();
    }
}
