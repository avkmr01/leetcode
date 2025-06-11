### **String**

**Concept:**

A string is a sequence of characters, typically used to store and manipulate text. Strings can contain letters, numbers, symbols, and even spaces.

Most programming languages provide built-in support for string manipulation such as:

* Concatenation (joining strings)
* Substring (extracting parts of strings)
* Searching (finding characters or substrings)
* Replacement (modifying parts of strings)

**Example in Python:**

```python
# Declare a string
s = "Hello World"

# Concatenate strings
s2 = s + "!"

# Substring
sub = s[0:5]  # "Hello"

# Search
position = s.find("World")  # 6

# Replace
new_s = s.replace("World", "Python")  # "Hello Python"

print(sub)
print(position)
print(new_s)
```

**Use Case:**

* Storing names, sentences, or any text data.
* Processing natural language.
* Parsing files, logs, and user input.

---

### **Trie (Prefix Tree)**

**Concept:**

A Trie is a tree-like data structure used to store a dynamic set of strings, where each node represents a single character of a word. It is very efficient for tasks like:

* Word search
* Auto-completion
* Prefix matching
* Dictionary implementations

**Main properties:**

* Each edge represents a character.
* Paths from the root to a node represent prefixes.
* Words are stored by linking characters through nodes.

**Example in Python:**

```python
class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()
    
    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True
    
    def search(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.is_end_of_word
    
    def starts_with(self, prefix):
        node = self.root
        for char in prefix:
            if char not in node.children:
                return False
            node = node.children[char]
        return True

# Usage
trie = Trie()
trie.insert("apple")
trie.insert("app")
print(trie.search("apple"))  # True
print(trie.search("appl"))   # False
print(trie.starts_with("app"))  # True
```

**Use Case:**

* Autocomplete in search engines
* Spell-checkers
* Word games (like Boggle, Scrabble)
* Efficient dictionary storage for strings

---
