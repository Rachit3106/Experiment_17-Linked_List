# 🔗 Linked List in C++

## 🎯 Aim  
To study and implement **Linked List operations in C++**, including node creation, insertion, and traversal, and to understand how linked lists differ from arrays in terms of memory allocation, flexibility, and efficiency.

---

## 📚 Theory  

A **Linked List** is a dynamic data structure that stores elements (called *nodes*) in non‑contiguous memory locations. Unlike arrays, which require a fixed size and continuous memory allocation, linked lists grow and shrink at runtime, making them highly flexible.  

Each **node** in a linked list consists of two parts:  
1. **Data field** → stores the actual value.  
2. **Pointer (next)** → stores the address of the next node in the sequence.  

The **head pointer** always points to the first node of the list. If the list is empty, `head = NULL`. Traversal begins from the head and continues until the pointer becomes `NULL`, which indicates the end of the list.  

### 🔑 Characteristics of Linked Lists  
- **Dynamic Size**: Can grow or shrink during execution.  
- **Efficient Insertions/Deletions**: Unlike arrays, no shifting of elements is required.  
- **Sequential Access**: Elements must be accessed in order; random access (like arrays) is not possible.  
- **Memory Utilization**: Nodes can be scattered across memory, linked by pointers.  

### 🔄 Types of Linked Lists  
- **Singly Linked List** → Each node points to the next node.  
- **Doubly Linked List** → Each node points to both the next and previous nodes.  
- **Circular Linked List** → The last node points back to the first node, forming a circle.  

---

## 📋 Algorithms  

### 🧾 Single Node Creation  
**Algorithm**  
1. **Start**  
2. Define a `Node` structure with two fields: `data` and `next`.  
3. Create a new node dynamically and assign a value to `data`.  
4. Initialize `next = NULL` to indicate the end of the list.  
5. Display the node’s data and pointer value.  
6. **End**  

---

### 🧾 Multiple Nodes & Traversal  
**Algorithm**  
1. **Start**  
2. Define a `Node` structure with `data` and `next`.  
3. Create multiple nodes with different values.  
4. Link them sequentially so that each node’s `next` points to the following node.  
5. Set the `next` of the last node to `NULL`.  
6. Initialize a temporary pointer `temp = head`.  
7. While `temp != NULL`:  
   - Print the value stored in `temp->data`.  
   - Move `temp` to the next node (`temp = temp->next`).  
8. Stop when `temp = NULL`.  
9. **End**  

---

### 🧾 Insertion at Head  
**Algorithm**  
1. **Start**  
2. Define a `Node` structure with `data` and `next`.  
3. Initialize `head = NULL` for an empty list.  
4. To insert a new node at the head:  
   - Create a new node dynamically.  
   - Assign the given value to its `data`.  
   - Set `new_node->next = head`.  
   - Update `head = new_node`.  
5. Repeat the process for multiple insertions.  
6. Traverse the list from head to NULL to display the updated sequence.  
7. **End**  

---

## 🚀 Applications of Linked Lists  

- Dynamic memory allocation.  
- Implementation of **stacks, queues, and graphs**.  
- Used in **hash tables with chaining**.  
- Efficient **insertion/deletion** in real‑time systems.  
- Undo/Redo operations in text editors.  
- Music/Video playlists using circular linked lists.  
- File systems and memory allocation tables.  

---

## 🧠 Conclusion  

- Linked lists are a **powerful alternative to arrays**, offering flexibility and efficient memory usage.  
- Each node contains **data** and a **pointer** to the next node, enabling dynamic growth.  
- The experiments demonstrated:  
  - Creation of a single node.  
  - Linking multiple nodes and traversing them.  
  - Insertion of nodes at the head of the list.  
- These operations form the **foundation for advanced linked list manipulations** such as insertion at tail, deletion, searching, and reversal.  
- Mastering linked lists is essential for understanding **higher‑level data structures** and solving complex programming problems.
