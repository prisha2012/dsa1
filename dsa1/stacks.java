import java.util.Stack;
public class stacks {
    public static void main(String[] args) {
        Stack<Integer> st=new Stack<>();
        System.out.println(st.isEmpty());
        st.push(1);
        st.push(23);
        st.push(90);
        st.push(5);
        System.out.println(st.peek());
        System.out.println(st);
        st.pop();
        System.out.println(st);
        System.out.println(st.size());
        while(st.size()>1){
            st.pop();

        }
        System.out.println(st.peek());
    }
}
