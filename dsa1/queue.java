import java.util.LinkedList;
import java.util.Queue;

public class queue {
    public static void main(String[] args) {
        Queue<Integer> q= new LinkedList<>();
        q.add(1);
        q.add(2);
        q.add(3);
        System.out.println(q);
        q.remove();
        System.out.println(q);
        System.out.println(q.element());
    }
}
