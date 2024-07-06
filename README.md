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

![Hashtag Suggestion](hashtag_suggestion.png)

**Design Technique**:
Maintain a database of popular hashtags using a trie 🌳 or BK-tree for efficient management. When a user types a hashtag, calculate the edit distance between the input and stored hashtags to find the closest matches. Suggest hashtags with the smallest edit distances, using approximate string matching 🔍 and parallel processing to optimize performance.

**Shortcomings & Scalability**:
The edit distance algorithm can be computationally intensive with a time complexity of O(m * n) 🧮, leading to high memory usage. Using tries or BK-trees helps manage large datasets and reduces search time ⏳. The time complexity for operations in a trie is O(l) where l is the length of the hashtag, and the space complexity is O(n * l), where n is the number of hashtags. Parallel processing and load balancing ensure optimal resource utilization ⚖️. Implementing incremental updates allows the system to handle new and outdated hashtags without requiring a complete rebuild, maintaining responsiveness and efficiency 🚀.

*Code for sample implementation of [Trie](all_codes/edit.cpp)*
*Code for sample implementation of [Trie](all_codes/trie.cpp)*
## 📚 References
- [Instagram Official Site](https://www.instagram.com)
- [Dynamic Programming Techniques](https://en.wikipedia.org/wiki/Dynamic_programming)
