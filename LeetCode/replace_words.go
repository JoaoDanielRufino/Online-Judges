func replaceWords(dictionary []string, sentence string) string {
    hash := map[string]bool{}

    for _, root := range dictionary {
        hash[root] = true
    }

    words := strings.Split(sentence, " ")

    ans := ""
    for i, word := range words {
        found := false
        for j := range word {
            if hash[word[:j]] {
                if i == len(words)-1 {
                    ans += word[:j]
                } else {
                    ans += word[:j] + " "
                }
                found = true
                break
            }
        }

        if !found {
            if i == len(words)-1 {
                ans += word
            } else {
                ans += word + " "
            }
        }
    }

    return ans
}

// with trie
type Node struct {
    next        [26]*Node
    isEndOfWord bool
}

func NewNode() *Node {
    return &Node{}
}

type Trie struct {
    root *Node
}

func NewTrie() *Trie {
    return &Trie{
        root: NewNode(),
    }
}

func (t *Trie) insert(word string) {
    tmp := t.root

    for i := range word {
        index := word[i] - 'a'
        if tmp.next[index] == nil {
            tmp.next[index] = NewNode()
        }
        tmp = tmp.next[index]
    }

    tmp.isEndOfWord = true
}

func (t *Trie) findRootWord(word string) string {
    tmp, rootWord := t.root, ""

    for i := range word {
        index := word[i] - 'a'
        if tmp.next[index] == nil {
            return word
        }

        rootWord += string(word[i])

        tmp = tmp.next[index]
        if tmp.isEndOfWord {
            break
        }
    }

    return rootWord
}

func replaceWords(dictionary []string, sentence string) string {
    trie := NewTrie()

    for _, word := range dictionary {
        trie.insert(word)
    }

    words := strings.Split(sentence, " ")

    ans := ""
    for i, word := range words {
        rootWord := trie.findRootWord(word)
        
        if i == len(words)-1 {
            ans += rootWord
        } else {
            ans += rootWord + " "
        }
    } 

    return ans
}
