/**
 * QUESTIONS:
 * 
 * 1. What is the purpose of a balanced tree?
 *    (Hint: it has to do with the time complexity)
 * 
 * 2. What data values does a node in an AVL tree store
 *    in comparison to a normal BST?
 * 
 * 3. What is the time compexity of search in a normal
 *    BST vs an AVL tree?
 * 
 * 4. What are the four types of rotations used in an
 *    AVL tree? (Hint: L R DL DR)
 * 
 * 5. What are the balance factor of these nodes in the
 *    following AVL tree?
 *
 *                         ┌─┐
 *                         │A│
 *              ┌──────────┴─┴───────────┐
 *              │                        │
 *             ┌┴┐                      ┌┴┐
 *             │B│                      │C│
 *        ┌────┴─┘               ┌──────┴─┘
 *        │                      │
 *        │                      │
 *       ┌┴┐                    ┌┴┐
 *       │D│                    │E│
 *  ┌────┴─┘                    └─┴────┐
 *  │                                  │
 *  │                                  │
 * ┌┴┐                                ┌┴┐
 * │F│                                │G│
 * └─┘                                └─┘
 * 
 * 6. What is the time complexty of the rotation operation
 *    used in the AVL tree? Why?
 * 
 * 
 **/