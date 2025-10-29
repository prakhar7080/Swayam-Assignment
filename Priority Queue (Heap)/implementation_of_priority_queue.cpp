import java.util.*;

class Geeks {

    static void insert(PriorityQueue<Integer> q, int k) {
        q.add(k);
    }

    static boolean find(PriorityQueue<Integer> q, int k) {
        return q.contains(k);
    }
    static int delete(PriorityQueue<Integer> q) {
        if (q.isEmpty()) return -1;
        return q.poll();
    }
}
