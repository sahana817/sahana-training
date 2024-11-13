// A simple Java program to implement a Binary Search Tree (BST)

class BinarySearchTree {

    // Define the structure of each node in the BST
    static class Node {
        int data;
        Node left, right;

        // Constructor to create a new node
        public Node(int data) {
            this.data = data;
            left = right = null;
        }
    }

    // Root of the binary search tree
    private Node root;

    // Constructor for an empty BST
    public BinarySearchTree() {
        root = null;
    }

    // Method to insert a new node with a given key
    public void insert(int key) {
        root = insertRec(root, key);
    }

    // Recursive function to insert a new key in the BST
    private Node insertRec(Node root, int key) {
        // If the tree is empty, return a new node
        if (root == null) {
            root = new Node(key);
            return root;
        }

        // Otherwise, recur down the tree
        if (key < root.data) {
            root.left = insertRec(root.left, key);  // Insert in the left subtree
        } else if (key > root.data) {
            root.right = insertRec(root.right, key); // Insert in the right subtree
        }

        // Return the (unchanged) node pointer
        return root;
    }

    // Method to search for a key in the BST
    public boolean search(int key) {
        return searchRec(root, key);
    }

    // Recursive function to search a key in the BST
    private boolean searchRec(Node root, int key) {
        // Base cases: root is null or key is present at the root
        if (root == null) {
            return false;
        }
        if (root.data == key) {
            return true;
        }

        // Key is greater than root's data, search the right subtree
        if (key > root.data) {
            return searchRec(root.right, key);
        }

        // Key is smaller than root's data, search the left subtree
        return searchRec(root.left, key);
    }

    // Method for in-order traversal of the BST
    public void inorder() {
        inorderRec(root);
    }

    // Recursive function to perform in-order traversal of the BST
    private void inorderRec(Node root) {
        if (root != null) {
            inorderRec(root.left);   // Traverse left subtree
            System.out.print(root.data + " ");  // Visit node
            inorderRec(root.right);  // Traverse right subtree
        }
    }

    // Method to find the minimum value node in the BST
    public int findMin() {
        Node minNode = findMinRec(root);
        return (minNode != null) ? minNode.data : Integer.MIN_VALUE;
    }

    // Recursive function to find the minimum value node in the BST
    private Node findMinRec(Node root) {
        if (root == null || root.left == null) {
            return root;
        }
        return findMinRec(root.left);
    }

    // Method to find the maximum value node in the BST
    public int findMax() {
        Node maxNode = findMaxRec(root);
        return (maxNode != null) ? maxNode.data : Integer.MAX_VALUE;
    }

    // Recursive function to find the maximum value node in the BST
    private Node findMaxRec(Node root) {
        if (root == null || root.right == null) {
            return root;
        }
        return findMaxRec(root.right);
    }

    public static void main(String[] args) {
        BinarySearchTree tree = new BinarySearchTree();

        // Insert values into the BST
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);

        // Print in-order traversal of the BST (should be sorted)
        System.out.println("In-order traversal of the BST:");
        tree.inorder();
        System.out.println();

        // Search for a value in the BST
        System.out.println("Searching for 40: " + tree.search(40));  // true
        System.out.println("Searching for 90: " + tree.search(90));  // false

        // Find minimum and maximum values in the BST
        System.out.println("Minimum value in the BST: " + tree.findMin());
        System.out.println("Maximum value in the BST: " + tree.findMax());
    }
}
