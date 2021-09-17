#include <iostream>
#include <queue>

template <typename T>
struct Node
{
    T data;
    Node* left;
    Node* right;
    Node(T data) 
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

template <typename T>
class BST
{
    
    public:
    BST() : root{nullptr}, size {}
    {}
    ~BST()
    {
        remove(root);
    }

    int get_size()
    {
        return size;
    }

    void insert(const T& data)
    {
        __insert(data, root);
    }

    void print_sort()
    {
        inorder(root);
    }
    
    void print_pre()
    {
        preorder(root);
    }

    void print_post()
    {
        postorder(root);
    }

    void print_level()
    {
        level_order(root);
    }

    void erase(T data)
    {
        __erase(root, data);
    }

    private:
    void __erase(Node<T>* current, T data)
    {
        std::vector <T> vec_for_elem;
        std::queue <Node<T>*> elements;
        elements.push(current);

        while(!elements.empty())
        {
            Node<T>* node = elements.front();
            elements.pop();
            if(node->data != data)
            {
                vec_for_elem.push_back(node->data);
            }
            if(node->left != nullptr)
            {
                elements.push(node->left);
            }
            if(node->right != nullptr)
            {
                elements.push(node->right);
            }
        }
        remove(root);
        this->root = nullptr;

        for(size_t index = 0; index < vec_for_elem.size(); ++index)
        {
            insert(vec_for_elem[index]);
        }
        
    }

    void remove (Node<T>* root)
    {
        if(root->left != nullptr)
        { 
            remove(root->left);
        }
        if(root->right != nullptr) 
        {
            remove(root->right);
        }
        delete root;
    }

    void preorder (Node<T>* cur)
    {
        if(cur != nullptr)
        {
            std::cout << cur->data;
            preorder(cur->left);
            preorder(cur->right);
        }
    }
    void postorder(Node<T>* cur)
    {
        if(cur != nullptr)
        {
            postorder(cur->left);
            postorder(cur->right);
            std::cout << cur->data;
        }
    }

    void level_order (Node<T>* cur)
    {
        Node<T>* tmp;
        std::queue<Node<T>*> arr;
        arr.push(cur);
        while(!arr.empty())
        {
            tmp = arr.front();
            std::cout << tmp->data<<" ";
            arr.pop();
            if(tmp->left != nullptr)
            {
                arr.push(tmp->left);
            }
            if(tmp->right != nullptr)
            {
                arr.push(tmp->right);
            }
        } 
    }

    void __insert(T data, Node<T>* ptr)
    {
        if(this->root == nullptr)
        {
            this->root = new Node<T>(data);
            size++;
            return;
        }
        if(ptr->data == data)
        {
            return;
        }
        if(ptr->data > data)
        {
            if(ptr->left == nullptr)
            {
                ptr->left = new Node<T>(data);
                size++;
                return;
            }
            else
            {
                __insert(data, ptr->left);
            }
        }
        else
        {
            if(ptr->right == nullptr)
            {
                ptr->right = new Node<T>(data);
                size++;
                return;
            }
            else
            {
                __insert(data, ptr->right);
            }
        }
    }

    void inorder(Node<T>* root)
    {
        if(root == nullptr) return;
        inorder(root->left);
        std::cout << root->data;
        inorder(root->right);
    }

    Node<T>* root;
    int size;
};



int main()
{
    BST<int> obj;
    obj.insert(50);
    obj.insert(40);
    obj.insert(30);
    obj.insert(65);
    obj.insert(45);
    obj.insert(60);
    obj.insert(35);
    obj.insert(70);
    obj.insert(25);
    // std::cout << obj.get_size();
    obj.erase(40);
    obj.erase(70);
    obj.print_level();

}