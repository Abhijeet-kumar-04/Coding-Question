class LRUCache {
public:
    struct Node{
        int key ,  val;
        Node* next;
        Node* prev;
        Node(int x , int y){
            key = x;
            val = y;
            next = prev = NULL;
        }
    };
    int cap;
    unordered_map<int , Node*> mp;
    Node* least_used;
    Node* most_used;
    int size = 0;

    void Delete(){
        Node* curr = least_used->next;
        mp.erase(curr->key);
        Node* x = least_used->next->next;
        least_used->next =x;
        x->prev = least_used;
        size--;
    }
    void Add(int key , int value){
        Node* x = new Node(key,value);
        mp[key]=x;
        x->next= most_used;
        x->prev = most_used->prev; 
        most_used->prev->next=x;
        most_used->prev=x;
        size++;
    }
    void update(int key , int value){
        Node* curr = mp[key]; 
        curr->val=value;
        Node* PREV = curr->prev;
        Node* NEXT = curr->next;
        PREV->next= NEXT;
        NEXT->prev=PREV;
        Node* x = curr;
        x->next= most_used;
        x->prev = most_used->prev; 
        most_used->prev->next=x;
        most_used->prev=x;
        
    }

    LRUCache(int capacity) {
        cap = capacity;
        size =0;
        least_used = new Node(-1,-1);
        most_used = new Node(-1,-1);
        least_used->next = most_used;
        most_used->prev = least_used;
    }
    
    int get(int key) {
        if(mp.count(key)!=0){
            update(key,mp[key]->val);
            return  mp[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.count(key)==0){
            Add(key,value);
            if(size> cap) Delete();
        }else{
            update(key,value);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */