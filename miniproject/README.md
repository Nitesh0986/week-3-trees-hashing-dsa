# 📇 Contact Directory using Binary Search Tree (BST)

A menu-driven Contact Directory application developed in **C++** using the **Binary Search Tree (BST)** data structure. The project allows users to manage contacts efficiently by performing insertion, searching, deletion, and displaying contacts in alphabetical order.

This project was developed as part of the **BeeSkilled Week 3 – Trees & Hashing** assignment.

---

## 📌 Features

- ➕ Add a new contact
- 🔍 Search a contact by name
- ❌ Delete a contact
- 📋 Display all contacts in alphabetical order
- 🚪 Menu-driven console interface
- ⚠️ Prevent duplicate contact names

---

## 🛠️ Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Binary Search Tree (BST)
- Recursion
- Dynamic Memory Allocation

---

## 📂 Project Structure

```
MiniProject/
│
├── ContactDirectoryBST.cpp
└── README.md
```

---

## 🌳 Data Structure Used

The project uses a **Binary Search Tree (BST)** where:

- Contact **Name** is used as the key.
- Contact **Phone Number** is stored as the value.
- Contacts are automatically maintained in **alphabetical order**.

Example:

```
          Rahul
         /     \
      Amit      Zoya
        \
       Karan
          \
         Neha
```

---

## ⚙️ Functionalities

### 1. Add Contact
- Enter contact name
- Enter phone number
- Insert into BST

### 2. Search Contact
- Search using contact name
- Display phone number if found

### 3. Delete Contact
- Delete contact by name
- Handles:
  - Leaf node deletion
  - One child deletion
  - Two children deletion

### 4. Display Contacts
Displays all contacts in **alphabetical order** using **Inorder Traversal**.

---

## ▶️ How to Run

### Compile

```bash
g++ ContactDirectoryBST.cpp -o ContactDirectoryBST
```

### Run

```bash
./ContactDirectoryBST
```

For Windows:

```bash
ContactDirectoryBST.exe
```

---

## 📷 Sample Menu

```
=================================
      CONTACT DIRECTORY
=================================

1. Add Contact
2. Search Contact
3. Delete Contact
4. Display Contacts
5. Exit

Enter your choice:
```

---

## 📈 Time Complexity

| Operation | Average | Worst |
|----------|---------|--------|
| Insert | O(log n) | O(n) |
| Search | O(log n) | O(n) |
| Delete | O(log n) | O(n) |
| Display | O(n) | O(n) |

---

## 💾 Space Complexity

- BST Storage: **O(n)**
- Recursive Call Stack: **O(h)**

Where:
- **n** = Number of Contacts
- **h** = Height of the BST

---

## 🎯 Learning Outcomes

Through this project, I learned:

- Binary Search Tree implementation
- Recursive algorithms
- Tree traversal techniques
- Contact management using BST
- Dynamic memory management in C++
- Menu-driven application development

---

## 🚀 Future Enhancements

- Update existing contact
- Save contacts to a file
- Load contacts from a file
- Mobile number validation
- Email field support
- Balance the BST using AVL Tree
- Graphical User Interface (GUI)

---

## 👨‍💻 Author

**Nitesh Barnwal**

B.Tech CSE Student  
Narula Institute of Technology

GitHub: https://github.com/Nitesh0986

---

## ⭐ Repository

If you found this project helpful, consider giving the repository a ⭐.