class AVLTree {

    // AVL Tree Node class
    static class Node {
        int data;
        Node left, right;
        int height;

        // Constructor to create a new node
        public Node(int data) {
            this.data = data;
            this.left = this.right = null;
            this.height = 1;
        }
    }

    // Root of the AVL Tree
    private Node root;

    // Constructor for an empty tree
    public AVLTree() {
        root = null;
    }

    // Method to insert a key in the AVL tree
    public void insert(int key) {
        root = insertRec(root, key);
    }

    // Recursive function to insert a key and balance the tree
    private Node insertRec(Node node, int key) {
        // Step 1: Perform normal BST insertion
        if (node == null) {
            return new Node(key);
        }

        if (key < node.data) {
            node.left = insertRec(node.left, key);
        } else if (key > node.data) {
            node.right = insertRec(node.right, key);
        } else { // Duplicate keys are not allowed in the AVL tree
            return node;
        }

        // Step 2: Update the height of the current node
        node.height = 1 + Math.max(getHeight(node.left), getHeight(node.right));

        // Step 3: Get the balance factor of this node
        int balance = getBalance(node);

        // Step 4: If the node becomes unbalanced, then there are 4 cases to handle

        // Left-Left (LL) Case
        if (balance > 1 && key < node.left.data) {
            return rightRotate(node);
        }

        // Right-Right (RR) Case
        if (balance < -1 && key > node.right.data) {
            return leftRotate(node);
        }

        // Left-Right (LR) Case
        if (balance > 1 && key > node.left.data) {
            node.left = leftRotate(node.left);
            return rightRotate(node);
        }

        // Right-Left (RL) Case
        if (balance < -1 && key < node.right.data) {
            node.right = rightRotate(node.right);
            return leftRotate(node);
        }

        // Return the (unchanged) node pointer
        return node;
    }

    // Method to perform a right rotation on the node
    private Node rightRotate(Node y) {
        Node x = y.left;
        Node T2 = x.right;

        // Perform rotation
        x.right = y;
        y.left = T2;

        // Update heights
        y.height = Math.max(getHeight(y.left), getHeight(y.right)) + 1;
        x.height = Math.max(getHeight(x.left), getHeight(x.right)) + 1;

        // Return the new root
        return x;
    }

    // Method to perform a left rotation on the node
    private Node leftRotate(Node x) {
        Node y = x.right;
        Node T2 = y.left;

        // Perform rotation
        y.left = x;
        x.right = T2;

        // Update heights
        x.height = Math.max(getHeight(x.left), getHeight(x.right)) + 1;
        y.height = Math.max(getHeight(y.left), getHeight(y.right)) + 1;

        // Return the new root
        return y;
    }

    // Get the height of a node
    private int getHeight(Node node) {
        return (node == null) ? 0 : node.height;
    }

    // Get the balance factor of a node
    private int getBalance(Node node) {
        return (node == null) ? 0 : getHeight(node.left) - getHeight(node.right);
    }

    // In-order traversal to print the tree (sorted order)
    public void inorder() {
        inorderRec(root);
    }

    // Recursive function for in-order traversal
    private void inorderRec(Node node) {
        if (node != null) {
            inorderRec(node.left);
            System.out.print(node.data + " ");
            inorderRec(node.right);
        }
    }

    // Main method to test the AVL tree
    public static void main(String[] args) {
        AVLTree tree = new AVLTree();

        // Insert nodes into the AVL tree
        tree.insert(10);
        tree.insert(20);
        tree.insert(30);
        tree.insert(40);
        tree.insert(50);
        tree.insert(25);

        // Print in-order traversal of the AVL tree
        System.out.println("In-order traversal of the AVL tree:");
        tree.inorder();
    }
}
