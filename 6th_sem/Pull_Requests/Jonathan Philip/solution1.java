import java.util.*;

public class ShortestFlights {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cities = scanner.nextInt();
        int flights = scanner.nextInt();
        int k = scanner.nextInt();


        List<List<int[]>> adjList = new ArrayList<>(cities + 1);
        for (int i = 0; i <= cities; i++) {
            adjList.add(new ArrayList<>());
        }


        for (int i = 0; i < flights; i++) {
            int from = scanner.nextInt();
            int to = scanner.nextInt();
            int price = scanner.nextInt();
            adjList.get(from).add(new int[]{to, price});
        }


        int[] distances = dijkstra(adjList, 1, cities);


        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 1; i <= cities; i++) {
            if (distances[i] != Integer.MAX_VALUE) {
                pq.add(distances[i]);
            }
        }

        for (int i = 0; i < k; i++) {
            System.out.print(pq.poll() + " ");
        }
    }

    public static int[] dijkstra(List<List<int[]>> adjList, int source, int cities) {
        int[] distances = new int[cities + 1];
        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[source] = 0;

        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[1] - b[1]);
        pq.add(new int[]{source, 0});

        while (!pq.isEmpty()) {
            int[] current = pq.poll();
            int node = current[0];
            int dist = current[1];

            if (dist > distances[node]) {
                continue;
            }

            for (int[] neighbor : adjList.get(node)) {
                int newDist = dist + neighbor[1];
                if (newDist < distances[neighbor[0]]) {
                    distances[neighbor[0]] = newDist;
                    pq.add(new int[]{neighbor[0], newDist});
                }
            }
        }

        return distances;
    }
}
