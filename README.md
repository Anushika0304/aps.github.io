### Name 
**Anushika Kothari** 🧑‍🎓
### USN
**01FE21BCS062**🏫

### Course Name
**Arithmetic Program Solving** 📊

### Course Code
**23ECSE309** 🔢

### Course Teacher
**Prof. Prakash Hegade** 👨‍🏫

### University
**KLE Technological University, Hubballi-31** 🏛️

### Portfolio Domain
**Instagram** 📸
----

### 🌟 **Introduction**
Welcome to my portfolio, where I delve into the realm of arithmetic problem-solving within Instagram. As one of the world's largest social media platforms, Instagram provides a dynamic environment 🌍 ripe for tackling complex challenges using innovative programming techniques. Its vast user engagement, diverse content generation 📸, and sophisticated algorithms offer a fertile ground for exploring new solutions.

I'm captivated by Instagram's ever-evolving landscape, which continually presents fresh opportunities for algorithmic optimization. Drawing from established methodologies, my goal is to pioneer novel approaches tailored to Instagram's unique challenges. With its global reach and profound impact across various domains 🌐, Instagram stands as a cornerstone of modern social media.

In this portfolio, I explore how arithmetic problem-solving can enhance user experiences within Instagram's intricate ecosystem. 🧠💡



## 📊 Services Provided by Instagram
![Use Case 1](usecase0.png)

![Use Case 2](usecase2.png)

![Use Case 3](usecase3.png)

![Use Case 4](usecase5.png)

![Use Case 5](usecase4.png)

![Use Case 6](usecase8.png)

![Use Case 7](usecase6.png)

![Use Case 8](usecase7.png)

![Use Case 9](usecase9.png)

![Use Case 10](usecase10.png)

## 💡 Design Challenges & Solutions 
### 1. Posts Categorization Based on Hashtags 🔖

**Challenges and Market Benefits**:
Categorizing posts based on hashtags on platforms like Instagram enhances content discoverability and improves user engagement. However, the challenges include handling vast amounts of user-generated content, ensuring accurate categorization to provide relevant recommendations, and adapting to the dynamic nature of trending hashtags. 📈💬

![Post Categorization](Hashtags.png)

**Shortcomings and Scalability Issues with LCS:**

* **Time Complexity:** O(m * n), where m and n are the lengths of the hashtag sequences. While suitable for moderate datasets, the quadratic time complexity can become impractical for large-scale applications without optimization. ⏳
* **Semantic Understanding:** LCS may not capture the full semantic meaning or context of hashtags, limiting its ability to categorize based on nuanced topics or trends effectively. 🤔
* **Scalability:** Optimization or parallelization is necessary to handle the extensive volume of posts and hashtags generated on platforms like Instagram. 📈

*Code for sample implementation of [Longest Common Subsequence](all_codes/Longest-Common-Subsequence.cpp)*


**Shortcomings and Scalability Issues with Radix Tree:**

* **Time Complexity:** Insertion, deletion, and search operations are O(l), where l is the length of the tag. This efficiency is suitable for handling real-time hashtag updates and dynamic content categorization. ⚡
* **Space Complexity:** O(n * l), where n is the number of hashtags and l is the average length of hashtags. While generally efficient, the space overhead may become significant with a massive number of distinct hashtags. 🧠
* **Maintenance in Distributed Systems:** Synchronization challenges may arise when maintaining Radix Trees across distributed systems, requiring careful management to ensure consistency and efficiency. 🌐

*Code for sample implementation of [Radix Tree](https://github.com/Anushika0304/radix-tree/blob/master/radix_tree.cpp)*

By leveraging these design techniques, Instagram can effectively categorize posts based on hashtags, enhancing content discoverability, improving user engagement through personalized recommendations, and maintaining a scalable infrastructure to handle the platform's dynamic nature. Each approach offers unique advantages and challenges, depending on the specific requirements and scale of hashtag analysis on social media platforms.

---

### 2. Hashtag Suggestions Using Edit Distance 🔖

**Challenges and Market Benefits**:
Ensuring accuracy and relevance in hashtag suggestions is critical. The system must process user input in real-time without noticeable delays 🕒, handle a large and growing database of hashtags efficiently, and support multiple languages and slang 🌐. Additionally, it needs to dynamically update the database with new trends while maintaining performance 📈.

![Hashtag Suggestion](hashtag_suggestion.jpg)

**Design Technique**:
Maintain a database of popular hashtags using a trie 🌳 or BK-tree for efficient management. When a user types a hashtag, calculate the edit distance between the input and stored hashtags to find the closest matches. Suggest hashtags with the smallest edit distances, using approximate string matching 🔍 and parallel processing to optimize performance.

**Shortcomings & Scalability**:
The edit distance algorithm can be computationally intensive with a time complexity of O(m * n) 🧮, leading to high memory usage. Using tries or BK-trees helps manage large datasets and reduces search time ⏳. The time complexity for operations in a trie is O(l) where l is the length of the hashtag, and the space complexity is O(n * l), where n is the number of hashtags. Parallel processing and load balancing ensure optimal resource utilization ⚖️. Implementing incremental updates allows the system to handle new and outdated hashtags without requiring a complete rebuild, maintaining responsiveness and efficiency 🚀.

*Code for sample implementation of [Edit Distance](all_codes/edit.cpp)*

*Code for sample implementation of [Trie](all_codes/trie.cpp)*

---
### 3. Real-Time Analytics and Insights 📊
**Challenges and Market Benefits:**
Efficiently managing and querying large datasets in real-time poses significant challenges for Instagram. The platform must handle vast amounts of data generated by user interactions, including likes, comments, shares, and hashtag usage. Ensuring low latency and high accuracy in analytics is critical to provide timely insights. The market benefits include improved user engagement, personalized content delivery, and enhanced advertising strategies based on accurate and up-to-date analytics.

![Analytics](analysis.jpg)

**Design Technique**
Employing a segment trees for efficient real-time analytics. Each node in the segment tree represents aggregated metrics (e.g., sum, max, min) over data points. Leaf nodes store individual user interactions, while internal nodes maintain aggregated values. Updates propagate from leaf to root, ensuring accuracy for range queries and updates.

**Time and Space Complexity:**
Construction: O(n) for tree setup from data points.
Queries: O(log n) for efficient metric retrieval.
Updates: O(log n) for propagating changes.
Space: O(n) for node storage, manageable with proper resource allocation.

**Shortcomings & Scalability:**
* **Shortcomings**: Segment trees have O(n) space complexity, taxing memory with large datasets. Frequent updates, common in real-time streams, can be costly. Maintaining consistency across distributed environments poses challenges.
* **Scalability**: Horizontal scaling via distributed segment trees balances load across servers. Sharding divides data for efficiency. Parallel processing and map-reduce enhance query handling. Dynamic updates optimize performance.

*Code for sample implementation of [Segment Tree](all_codes/segment.cpp)*

### 4. Personalized Content Recommendations 🔍✨
**Challenges and Market Benefits:**
Personalizing content on Instagram involves navigating a vast network of user interests and interactions. The challenge is to efficiently find relevant content in real-time ⏱️. Effective personalization boosts user engagement and satisfaction 📈.

![Content Recommendation](recommend.jpg)

**Design Technique:**
A* search can find the shortest path to relevant content. Users and content items are nodes in a graph, with edges representing preferences and interactions. A* uses a heuristic to prioritize paths, efficiently recommending content that matches user interests.

**Time and Space Complexity:**

Time Complexity: O(b^d) 🌐

Space Complexity: O(b^d) 📊
, where **b** is branching factor and **d** is depth of the solution 

**Shortcomings & Scalability:**
A* relies on the heuristic's accuracy, and designing an effective heuristic can be challenging. Real-time computation may be resource-intensive, especially with a large and complex user-content graph. However, parallel processing and distributed computing can scale A* search for a large user base. Partitioning the graph and distributing the search process ensures efficiency, while caching and pre-computing paths reduce computational load, maintaining responsiveness and effectiveness 🚀.

*Code for sample implementation of [A* algorithm](https://github.com/daancode/a-star)*

### 5. Ad Placement Optimization on Instagram 📏
**Challenges and Market Benefits:**
Instagram faces challenges in optimizing ad placements, much like the Rod Cutting Problem, by balancing optimal ad durations for user engagement without overwhelming users. This involves analyzing user interaction patterns to adjust ad lengths effectively. Balancing revenue goals with a positive user experience is critical, ensuring ads are relevant and non-intrusive to enhance user satisfaction. By strategically optimizing ad placements, Instagram can maximize revenue and improve user engagement, fostering higher retention rates and loyalty among users.🕒📈

![Ads Placement](ads.avif)

**Design Technique:**
The Rod Cutting Problem can be analogously applied to optimize ad placements on Instagram. Just as the rod cutting problem seeks to maximize the profit from cutting a rod into pieces of various lengths, Instagram can maximize revenue by determining the best placement and duration for ads based on user behavior and engagement metrics. 📏💼

**Complexity:**
Time Complexity: O(n^2) using dynamic programming, where n is the number of different ad placement lengths.

Space Complexity: O(n), where n is the number of different ad placement lengths.🧮

**Shortcomings and Scalability**:
Using the Rod Cutting Problem for ad optimization on Instagram faces challenges in accurately matching ad placements with dynamic user behaviors and context. It aims to maximize revenue by finding the best ad durations but may miss subtle contextual cues crucial for user engagement. Scalability issues arise from managing large datasets and ensuring algorithms can adapt quickly, requiring robust infrastructure and adaptive learning. Overcoming these challenges involves refining algorithms and leveraging real-time data insights to improve ad effectiveness and user satisfaction on the platform.🚀

*Code for sample implementation of [Rod Cutting Problem](all_codes/rod.cpp)*

---
### 6. Efficient managing and retrieving of user timelines🕒

**Challenges & Market Benefits**:
Implementing skip lists in Instagram for managing user timelines or feeds presents challenges in terms of space complexity, implementation intricacies, and performance optimization. However, skip lists offer significant benefits such as efficient access with logarithmic time complexity for operations, scalability to handle large-scale data dynamically, and improved user experience through faster content delivery and enhanced engagement on the platform.📊🚀 

![User Timeline](timeline.avif)

**Design Technique:**
Implementing skip lists involves maintaining multiple layers of linked lists with probabilistic skipping, which speeds up search operations. Each level acts as an express lane, reducing the average time complexity for search operations.🛤️

**Complexity:** 

Time Complexity : Skip lists offer efficient average-case time complexities for search, insertion, and deletion operations, all being O(log n), where **n** is the number of elements in the list.

Space Complexity : The space complexity of skip lists is O(n).

**Shortcomings and Scalability:** Skip lists require more memory compared to basic data structures due to their additional layers, which can limit their efficiency in memory-constrained environments. While they dynamically adjust to changes in data size and access patterns, their implementation complexity can pose challenges in distributed systems, requiring careful synchronization to maintain consistency and scalability. Despite their efficiency in average cases, skip lists may not be optimal for applications demanding strictly minimized memory usage or ultra-fast operations beyond logarithmic time complexity.

*Code for sample implementation of [Skip List](all_codes/skip.cpp)*

---
### 7. Content Delivery with Shortest Path Algorithms 🌐
**Challenges and Market Benefits**:
Optimizing content delivery routes in Instagram with algorithms like Dijkstra's or A* involves efficiently managing and updating paths across a large network. This ensures minimal latency, faster content delivery, and enhances user experience with quicker load times, crucial for maintaining user engagement and satisfaction.

![Route Optimization](route.webp)

**Design Technique**:
Implementing Dijkstra's algorithm involves calculating shortest paths from a source node to all other nodes, using priority queues for efficient path exploration. A* algorithm enhances this by incorporating heuristics to guide the search towards the destination more effectively.

**Complexity**:
Dijkstra's algorithm has a time complexity of O(V^2) using an adjacency matrix or O((E + V) log V) with priority queues, where V is the number of vertices and E is the number of edges. Space complexity is O(V) for storing distances and vertices.

**Shortcomings and Scalability**: 
While Dijkstra's and A* are efficient for finding shortest paths, they may struggle with scalability in very large networks or dynamic environments due to their reliance on exhaustive path exploration. Handling real-time updates and optimizing for varying network conditions can pose challenges, requiring continuous optimization and possibly more complex algorithms for large-scale applications.

*Code for sample implementation of [Dijkstra's Algorithm](all_codes/dijkstra.cpp)*

*Code for sample implementation of [A* Algorithm](https://github.com/daancode/a-star)*

---

### 8. Scheduling posts at right time for maximum reach

**Challenges and Market Benefits**:
Scheduling posts at optimal times on Instagram involves navigating dynamic user behavior and algorithmic complexities to maximize reach and engagement. Benefits include improved conversion rates, enhanced efficiency through automation, and strategic timing for higher visibility and user interaction.

![Scheduler](schedule.avif)

**Design Technique**:
Genetic algorithm mimics the process of natural selection to optimize solutions. In the context of scheduling posts, GA can evolve schedules over time by generating a population of potential schedules (chromosomes), evaluating their fitness (reach and engagement metrics), and applying genetic operators like crossover and mutation to produce new generations of schedules. This iterative process continues until an optimal or near-optimal schedule is found.

**Complexity**:
The time complexity for each generation in a genetic algorithm is O(k x n x m), where **k** is the population size, **n** is the number of chromosomes (or solutions) in the population, and **m** is the complexity of the fitness function evaluation. The space complexity mainly depends on the size of the population and the representation of each chromosome, typically O(k x n).

**Shortcomings & Scalability**:
Genetic algorithms can face challenges in scalability due to their reliance on population sizes and fitness evaluations, which can become computationally intensive for large datasets or complex problems. They may also struggle with premature convergence to suboptimal solutions and require careful parameter tuning to balance exploration and exploitation effectively. Maintaining diversity in the population and managing computational resources are critical for overcoming these limitations in practical applications.

*Code for sample implementation of [Genetic Algorithm](all_codes/genetic.cpp)*

---

### 9. Trend Detection on Instagram

**Challenges and Market Benefits:**
Detecting trends on Instagram involves processing vast amounts of data in real-time, identifying meaningful patterns amidst noise, and adapting quickly to changing user behaviors and preferences. This capability enhances user engagement, attracts advertisers, and keeps the platform relevant amid dynamic content trends.

![Trend Detection](trend.avif)

**Design Technique:**
Utilizing algorithms like the Louvain method or Girvan-Newman algorithm helps in identifying communities or clusters of users based on shared interactions and interests. This approach uncovers emerging trends by analyzing how content spreads through these communities, providing actionable insights for content creators and marketers.

**Complexity:**
These algorithms typically have a time complexity of O(E^2V) for Girvan-Newman and O(V log V) for Louvain method, where E represents edges and V represents vertices in the network. Space complexity varies based on implementation but generally scales with the size of the network.

**Shortcomings and Scalability:**
While effective for moderate-sized networks, these algorithms may struggle with scalability to handle Instagram's massive user base and real-time data streams. Implementations often require optimization for distributed environments and may overlook nuances in regional or niche trends due to global focus.

*Code for sample implementation of [Girvan Newman Algorithm](https://github.com/danieljsharpe/girvan-newman/blob/master/girvan-newman.cpp)*

---

### 10. User Engagement Analysis

**Challenges and Market Benefits:**
Analyzing user engagement using Kadane's algorithm presents challenges in accurately interpreting engagement spikes versus noise in data, and in adapting the algorithm to real-time streaming data. However, it offers significant benefits by identifying peak engagement periods, optimizing content scheduling, and enhancing user interaction strategies, thereby improving overall user engagement and satisfaction on Instagram.

![User Engagement](user-engagment.avif)

**Design Technique:**
Kadane's algorithm is employed by treating user engagement metrics as an array of values over time. It efficiently computes the maximum subarray sum, pinpointing periods of high activity and facilitating strategic decisions on content posting and user interaction timing.

**Time and Space Complexity:**
Time Complexity: O(n), where n is the number of elements in the engagement metrics array. Kadane's algorithm operates in linear time, making it suitable for processing large datasets quickly.
Space Complexity: O(1), as it requires constant space beyond the input array, ensuring minimal memory overhead.

**Shortcomings and Scalability:**
While effective for identifying contiguous segments of maximum engagement, Kadane's algorithm may struggle with diverse engagement patterns or when dealing with non-contiguous peaks. Scaling Kadane's for real-time applications with continuously updated data streams requires robust adaptation and integration with other algorithms for comprehensive user engagement analysis on Instagram.

*Code for sample implementation of [Kadane's Algorithm](all_codes/kadane.cpp)*

---
### 11. Efficient storing and retrieval of Images

**Challenges & Market Benefits**

Storing images without compression on Instagram results in high storage costs, slower retrieval times, and increased bandwidth usage, negatively impacting user experience and scalability. Implementing Huffman coding can address these issues by reducing storage space requirements and enhancing image loading times. This leads to cost savings, improved user satisfaction, and better scalability, allowing Instagram to manage its growing user base more efficiently.

![Storage & Retrieval](storage1.jpg)

**Design Technqiue**
The design for using Huffman coding in image compression starts with analyzing the image pixel data to determine the frequency of each pixel value. A binary tree, known as a Huffman tree, is then constructed based on these frequencies. In this tree, pixel values that occur less frequently are assigned longer binary codes, while more frequent pixel values are given shorter codes. This approach ensures efficient compression by reducing the overall size of the image data. The encoded image can then be stored and transmitted more efficiently, saving storage space and bandwidth.


**Time and Space Complexity**

Time Complexity: O(N log N) N: number of unique pixels for image compression.

Space Complexity: O(N)

*Code for sample implementation of [Huffman's Code ](all_codes/huff.cpp)*

---

### 12. User Interaction Data

**Challenges & Market Benefits** 
Managing user interaction data, such as likes, comments, and shares, poses challenges for Instagram due to the scale and real-time nature of updates required. Implementing Red-Black Trees can significantly benefit Instagram by enabling efficient organization and rapid retrieval of this data. Red-Black Trees' balanced structure ensures quick access and optimal performance for analytics and user engagement tracking, even as data volumes grow. This approach enhances scalability, supports real-time data integrity, and improves overall user experience by facilitating timely and personalized content delivery based on user interactions.

![User Interaction](user_interaction.jpg)

**Design Technique**
The Red-Black Tree design maintains balance by assigning each node a color (red or black) and enforcing rules that ensure balanced paths from the root to any leaf. This structure optimizes operations like insertion and deletion by guaranteeing efficient search and traversal, making it ideal for managing large datasets such as user interaction data on Instagram.

**Time and Space Complexity**
Time Complexity: O(log N) (Worst case) O(1)(Average case)
Space Complexity: O(1)

*Code for sample implementation of [Red Black Tree](all_codes/rb_tree.cpp)*

---

### 13. Ads Targeting 

**Challenges & Market Benefits**
Ad targeting on Instagram poses challenges in managing vast user data for precise audience segmentation and real-time updates. Ensuring accuracy in targeting specific income brackets or purchasing power ranges requires sophisticated data handling and competitive optimization strategies. Implementing Binary Search Trees (BSTs) can address these challenges by enabling efficient and scalable searches within demographic segments. This approach enhances targeting precision, improves user engagement through relevant ad placements, and optimizes advertising costs by maximizing ROI through effective audience segmentation and targeting on Instagram.

![Ads Targeting](ad_target.avif)

**Design Technique**
The design technique of a Binary Search Tree (BST) organizes nodes where each left subtree node value is less than its parent and each right subtree node value is greater. This structure allows for efficient searching, insertion, and deletion operations, making it suitable for applications requiring ordered data retrieval, such as ad targeting based on income brackets or purchasing power ranges on Instagram.

**Time & Space Complexity**
Time Complexity - 
* Average Case: O(log N) (Insert,search,delete)
* Worst Case: O(N)
Space Complexity : O(N)

*Code for sample implementation of [Binary Search Tree](all_codes/bst.cpp)*

---

## 📚 References
- [Instagram Official Site](https://www.instagram.com)
- [Dynamic Programming Techniques](https://en.wikipedia.org/wiki/Dynamic_programming)
