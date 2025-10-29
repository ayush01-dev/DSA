# 🧩 Linked List Explanation (C++)

## Step 1: Creating Nodes

```cpp
Node* first = new Node(10);
Node* second = new Node(20);  
Node* third = new Node(30);
Node* fourth = new Node(40);
Node* fifth = new Node(50);
```

You are creating **5 nodes** in heap memory using `new`.

Each node looks like this:

```
[ data | next ]
```

Example:
```
first  → [10 | NULL]
second → [20 | NULL]
third  → [30 | NULL]
fourth → [40 | NULL]
fifth  → [50 | NULL]
```

At this point, they are **not connected yet**.

---

## Step 2: Linking the Nodes

```cpp
first->next = second;
second->next = third;
third->next = fourth;
fourth->next = fifth;
```

Now the nodes are connected like a chain:

```
first → second → third → fourth → fifth → NULL
```

Here, `first` becomes the **head** (starting point) of the linked list.

---

## Step 3: Printing the Linked List

You call the function:

```cpp
printLL(first);
```

Let’s now understand how the function works.

---

## 💡 `printLL()` Function Explained

```cpp
void printLL(Node* head){
    Node* temp = head;      // Step 1
    while(temp != NULL){   // Step 2
        cout << temp->data << " ";  // Step 3
        temp = temp->next;          // Step 4
    }
}
```

---

### 🧠 Step 1: Create a Temporary Pointer

```cpp
Node* temp = head;
```

We use a temporary pointer so we **don’t lose the head address**.  
Now `temp` points to the first node (data = 10).

---

### 🔁 Step 2: Loop Until End of List

```cpp
while(temp != NULL)
```

Continue looping until `temp` becomes `NULL` (i.e., when we reach the end of the list).

---

### 🖨️ Step 3: Print Data

```cpp
cout << temp->data << " ";
```

This prints the **data** of the current node.

Example flow:
```
10 → 20 → 30 → 40 → 50
```

---

### 🔄 Step 4: Move to Next Node

```cpp
temp = temp->next;
```

This moves `temp` to the next node in the list.  
The pointer moves like this:

```
temp = first → second → third → fourth → fifth → NULL
```

When `temp` becomes `NULL`, the loop stops.

---

## ✅ Final Output

```
Printing linked list
10 20 30 40 50
```

---

## ⚙️ Summary

- `first` is the **head** of the list.
- `printLL()` starts from `head`.
- Uses `temp` to go through each node one by one.
- Prints the `data` of each node.
- Moves forward using `temp = temp->next`.
- Stops when `temp` becomes `NULL`.

---

## 📊 Visual Diagram

![Linked List Diagram](/mnt/data/linked_list_diagram.png)

---

**End of Notes**
